var controls = {
	url: document.getElementById('url'),
	path: document.getElementById('path'),
	message: document.getElementById('message'),
	commit: document.getElementById('commit'),
	pull: document.getElementById('pull'),
	cancel: document.getElementById('cancel')
};
controls.commit.onclick = function() {
    controls.commit.innerHTML = 'Push';
	controls.commit.classList.add('active');
	controls.pull.classList.add('active');
	controls.cancel.classList.add('active');
	controls.message.focus();
};
controls.cancel.onclick = function() {
    controls.commit.innerHTML = 'Commit';
	controls.commit.classList.remove('active');
	controls.pull.classList.remove('active');
	controls.cancel.classList.remove('active');
};