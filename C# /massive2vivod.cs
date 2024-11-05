using System;
using System.Collections.Generic;
using System.Diagnostics.Tracing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp9
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // тип_данных [,] имя_массива;
            int[,] dva = new int[3, 5]
                {
                   {2,45,12,51,51},
                   {23,87,3,6,10},
                   {41,54,50,9,7}


            };
            foreach (var iten in dva)
            {
                Console.WriteLine(iten + " ");
            }
                
        }   
            
    }
}
