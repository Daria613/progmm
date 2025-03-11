let timerDisplay = document.getElementById('timer');
let startBtn = document.getElementById('startBtn');
let stopBtn = document.getElementById('stopBtn');
let resetBtn = document.getElementById('resetBtn');
let audio = document.getElementById('audio');

let seconds = 0;
let interval;

function updateTimer() {
    seconds++;
    let minutes = Math.floor(seconds / 60);
    let remainingSeconds = seconds % 60;
    timerDisplay.textContent = `${String(minutes).padStart(2, '0')}:${String(remainingSeconds).padStart(2, '0')}`;
}

startBtn.addEventListener('click', function() {
    if (!interval) {
        audio.play(); // играем музыку при старте таймера
        interval = setInterval(updateTimer, 1000);
    }
});

stopBtn.addEventListener('click', function() {
    if (interval) {
        clearInterval(interval);
        interval = null;
        audio.pause(); // останавливаем музыку
    }
});

resetBtn.addEventListener('click', function() {
    clearInterval(interval);
    interval = null;
    seconds = 0;
    timerDisplay.textContent = '00:00';
    audio.pause(); // останавливаем музыку
    audio.currentTime = 0; // сбрасываем позицию музыки
});
