using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp10
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Random random = new Random();
            int[,,] tri = new int[4, 3, 5];
            for (int i = 0; i < tri.GetLength(0); i++)
            {
                for (int j = 0; j < tri.GetLength(1); j++)
                {
                    for (int k = 0; k < tri.GetLength(2); k++)
                    {
                        tri[i, j, k] = random.Next(100);

                    }

                }
                Console.WriteLine();

            }
            for (int i = 0; i < tri.GetLength(0); i++)
                Console.WriteLine("Page № = " + (i + 1));
            {
                for (int j = 0; j < tri.GetLength(1); j++)
                {
                    for (int k = 0; k < tri.GetLength(2); k++)
                    {
                        Console.Write(tri[i, j, k] + " ");
                    }
                    Console.WriteLine("---------------------");
                }
            }  
             Console.WriteLine();
        }
    }
}
