using System;

namespace Task_3_3_6
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] numbers = { 6, 10, 7, 14, 12, 12, -2, 3, -9, 6, -10 };
            int sum = 0;

            for (int i = 0; i < numbers.Length; i++)
            {
                if (numbers[i] % 2 == 0 && numbers[i] % 3 != 0)
                {
                    Console.WriteLine("число кратное 2 и не кратное 3: " + numbers[i]);
                    sum += numbers[i];
                }
            }

            Console.WriteLine("сумма чисел: " + sum); 
            Console.ReadLine();
        }
    }
}
