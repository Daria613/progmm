using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace laboratornai2variant2
{
    class Program
    {
        static void Main(string[] args)
        {
           

            double e = 0;
            double a;
            double o;

            Console.WriteLine("Введите x:");
            double x = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("Введите y:");
            double y = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("Введите c:");
            double c = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("Введите d:");
            double d = Convert.ToDouble(Console.ReadLine());




            if (x * y > 3)
            {

                a = Math.Pow(x, 3);
                o = Math.Log10(Math.Pow(x * y, c * d));
                e = Math.Max(a, o);
            }





            else if (x * y >= 0 && x * y <= 3)
            {

                 a = Math.Max(c * x, d * y);
                e = 3 * Math.Min(Math.Min(x, y), a);
            }


            else if (x * y < 0)
            {

                e = Math.Pow(2, c * d) - x;
               
            }

            Console.WriteLine("Результат: " + e);
            Console.WriteLine("Нажмите любую клавишу для выхода...");
            Console.ReadKey();
            // Ожидает нажатия любой клавиши



        }
    }
}
