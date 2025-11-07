using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace povtoreniePervoiPabot
{
    class Program
    {
        static void Main(string[] args)
        {
           
        
            double t;
            double x = 1;
            double y = 2;


            t = Math.Cos(Math.PI / 7) * Math.Pow(Math.Sin(x - 8 * y), 2) / 2.7 * (x - Math.PI);
            Console.WriteLine(t);

            

        }
    }
}
