let names = ["Эльмира","Эмилиана"," Эмилия", "Эмма", "Эннафа", "Эра", "Эрна", "Эрнеста", "Эрнестина", "Эсмеральда", "Эсфирь", "Юдифь", "Юлиана", "Юлиания", "Юлия", "Юния", "Юнона", "Юрия", "Юстина", "Ядвига", "Яна", "Янина", "Ярослава","Алексей", "Мария", "Сергей", "Анна", "Дмитрий", "Екатерина","Алекс", "Марфа", "Соня", "Аня", "Данна", "Ваня"]

let result = document.getElementById('result');

function random(event) {
    if (event.code === 'Space') {
        event.preventDefault(); // Исправлено на event.preventDefault()
        let randomIndex = Math.floor(Math.random() * names.length);
        result.textContent = names[randomIndex];
    }
}

window.addEventListener('keydown', random);
