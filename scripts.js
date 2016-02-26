var controls = {
	url: document.getElementById('url'),
	path: document.getElementById('path'),
	message: document.getElementById('message'),
	commit: document.getElementById('commit'),
	pull: document.getElementById('pull')
};
controls.commit.onclick = function() {
	controls.commit.classList.add('active');
    controls.pull.classList.add('active');
    controls.pull.innerHTML = 'Cancel';
	controls.message.focus();
};