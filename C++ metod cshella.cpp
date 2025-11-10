#include <iostream>
#include <vector>
using namespace std;

// Функция для метода Шелла (вынесена из main)
void shellSort(vector<int>& arr) {
    int n = arr.size();

    // Начинаем с большого интервала, затем уменьшаем его
    for (int gap = n / 2; gap > 0; gap /= 2) {
        // Выполняем сортировку вставками для этого интервала
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;

            // Сдвигаем элементы, пока не найдем правильную позицию
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

// Функция для вывода массива (добавлена)
void printArray(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Исправлено имя переменной и преобразован массив в вектор
    vector<int> arr = { 6, 10, 7, 14, 12, 12, -2, 3, -9, 6, -10 };

    // Сортировка методом Шелла
    shellSort(arr);

    // Вывод отсортированного массива
    cout << "Отсортированный массив: ";
    printArray(arr);

    return 0;
}
