var controls = {
    signIn: {
        this: document.getElementById('sign-in-section'),
        username: document.getElementById('username'),
        password: document.getElementById('password'),
        login: document.getElementById('login')
    },
    main: {
    	url: document.getElementById('url'),
    	path: document.getElementById('path'),
    	message: document.getElementById('message'),
    	commit: document.getElementById('commit'),
    	pull: document.getElementById('pull'),
    	cancel: document.getElementById('cancel')
    }
};
controls.main.commit.onclick = function() {
    controls.main.commit.innerHTML = 'Push';
	controls.main.commit.classList.add('active');
	controls.main.pull.classList.add('active');
	controls.main.cancel.classList.add('active');
	controls.main.message.focus();
};
controls.main.cancel.onclick = function() {
    controls.main.commit.innerHTML = 'Commit';
	controls.main.commit.classList.remove('active');
	controls.main.pull.classList.remove('active');
	controls.main.cancel.classList.remove('active');
};
controls.signIn.login.onclick = function() {
    console.log('test');
    controls.signIn.this.style.display = 'none';
};