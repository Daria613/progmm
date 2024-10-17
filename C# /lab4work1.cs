using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp3
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Введите r = ");
            double r = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("Введите n = ");
            double n = Convert.ToDouble(Console.ReadLine());

            
            double p = Operation(10, r);
            Console.WriteLine("периметр 10n = " + p);

            double p1 = Operation(50, r);
            Console.WriteLine("периметр 50n = " + p1);

            double p2 = Operation(100, r);
            Console.WriteLine("периметр 100n = " + p2);

            double p3 = Operation(n, r);
            Console.WriteLine("периметр n = " + p3);
            Console.ReadKey();
        }
        static double Operation(double n, double r)
        {
            double a = 2 * r * Math.Sin(180 / n);
            double p = n * a;
            return p;
        }
    }
}
