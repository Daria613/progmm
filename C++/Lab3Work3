using System;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp2
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("с использованием цикла for = ");
            // с испольованием цикла for
            for (double p = -2; p <= 2; p += 0.25)
            {
                if (p > 1)
                {
                    double y = Math.Exp(p);
                    Console.WriteLine(y);
                }
                if (p < 0)
                {
                    double y = 2 * p - 1;
                    Console.WriteLine(y);
                }
                if (0 <= p &&(p <= 1))
                {
                    double y = -1;
                    Console.WriteLine(y);
                }
            }
            Console.WriteLine("-----------------------------------------------------");
            Console.WriteLine("с использованием цикла while ");
            double x = -2;
            while (x <= 2)
            {
                
                if (x > 1)
                {
                    double y = Math.Exp(x);
                    Console.WriteLine(y);
                }
                if (x < 0)
                {
                    double y = 2 * x - 1;
                    Console.WriteLine(y);
                }
                if (0 <= x && (x <= 1))
                {
                    double y = -1;
                    Console.WriteLine(y);
                }
                x += 0.25;
            }
            Console.WriteLine("-----------------------------------------------------");
            Console.WriteLine("с использованием цикла do while ");
            x = -2;
            do
            {
                if (x > 1)
                {
                    double y = Math.Exp(x);
                    Console.WriteLine(y);
                }
                if (x < 0)
                {
                    double y = 2 * x - 1;
                    Console.WriteLine(y);
                }
                if (0 <= x && (x <= 1))
                {
                    double y = -1;
                    Console.WriteLine(y);
                }
                x += 0.25;
            } while (x <= 2);
        }
    }
}
