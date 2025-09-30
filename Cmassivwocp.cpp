using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] a = { 2, 3, 1, 0, 10, 28, 27, 31 };
            List<int> b = new List<int>(10);
            int h = a[0];
            b.Add(h); 
         
            for (int i = 0; i < a.Length; i++)
            {
                if (h < a[i])
                {
                    h = a[i];
                    b.Add(h);
                }
               
            }

            for (int i = 0; i< b.Count; i++)
            {
                Console.WriteLine(b[i]);
            }
           
        }
    }
}
