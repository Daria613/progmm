using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace metod_vstawki
{
    class Program
    {
        static void Main()
        {
            // для начала создаем любой массив
            int[] numbers = { 6, 10, 7, 14, 12, 12, -2, 3, -9, 6, -10 };
            //сортировка вставки.ВЫЗЫВАЕМ ФУНКЦИЮ
            InsertionSort(numbers);

            Console.WriteLine("\nОтсортированный массив");
            PrintArrey(numbers);
        }

        static void InsertionSort(int[] arr)
        {
            //проверяет два условия:ассив не существует (нулевая ссылка),
            //массив пустой или содержит только один элемент
            //Если массив null - сортировать нечего
            //Если в массиве 0 или 1 элемент - он уже считается "отсортированным"

            if (arr == null || arr.Length <= 1)
                return;
            for (int i = 1; i < arr.Length; i++)
            {
                //Цикл for, который начинается с индекса i=1 и идет до конца массива.
                int key = arr[i];
                int j = i - 1;
                // перемещаем элементы arr[0...i-1],которые больше iey,
                // на 1 позицию вперед
                while (j >= 0 && arr[j] > key)
                {
                    arr[j + 1] = arr[j];  // Сдвигаем элемент вправо
                    j--;                  // Двигаемся влево по отсортированной части
                }
                arr[j + 1] = key;  // Вставляем key на правильную позицию
            }
        }

        // вспомогательный метод для вывода масива
        static void PrintArrey(int[] arr)
        {
            Console.WriteLine(string.Join(" ", arr));
        }
    }
}
