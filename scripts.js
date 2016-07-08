var github = require('github');

var committing = false;

var controls = {
	// Login section
	signIn: document.getElementsByClassName('sign-in')[0],
	username: document.getElementById('username'),
	password: document.getElementById('password'),
	login: document.getElementById('login'),

	// Main interface section
	main: document.getElementsByClassName('main')[0],
	avatar: document.getElementById('avatar'),
	avatarLabel: document.getElementById('avatarLabel'),
	url: document.getElementById('url'),
	path: document.getElementById('path'),
	message: document.getElementById('message'),
	commit: document.getElementById('commit'),
	pull: document.getElementById('pull'),
	cancel: document.getElementById('cancel')
};


controls.login.onclick = function() {
	/*github.authenticate({
		type: 'basic',
		username: controls.username.value,
		password: controls.password.value
	});*/
	if (controls.username.value && controls.password.value) {
		controls.signIn.style.display = 'none';
		controls.main.style.display = 'block';
		var user = new XMLHttpRequest();
		user.open('GET', 'https://api.github.com/users/' + controls.username.value, false);
		user.onreadystatechange = function() {
			controls.avatar.src = JSON.parse(user.responseText).avatar_url;
			controls.avatarLabel.innerHTML = JSON.parse(user.responseText).login;
		};
		user.send(null);
	}
};

controls.commit.onclick = function() {
	if (committing) {
        github.gitdata.createCommit(controls.username.value, controls.url.value, controls.message.value);
	} else if (controls.url.value && controls.path.value) {
		controls.commit.innerHTML = 'Push';
		controls.commit.className = 'active';
		controls.pull.className = 'active';
		controls.cancel.className = 'active';
		controls.message.focus();
		committing = true;
	}
};
controls.cancel.onclick = function() {
	controls.commit.innerHTML = 'Commit';
	controls.commit.className = '';
	controls.pull.className = '';
	controls.cancel.className = '';
	committing = false;
};