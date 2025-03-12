let output = document.getElementById('output');

function showCharacter(evt) {
    let char = evt.key;
    output.textContent = char;
}

window.addEventListener('keydown', showCharacter);
