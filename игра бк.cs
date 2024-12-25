using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Reflection.Emit;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp3
{
    public partial class Form1 : Form
    {
        //переменная для  генерации случайных чисел
        private Random rand = new Random();
        private int[] x = new int[4];
        //хранение строкового загаданного числа
        private string s;
        // счетчики совп.числ
        private int polnoeSovpadenie;
        private int chastichnoeSovpadenie;

        public Form1()
        {
            InitializeComponent();
            // вызов метода начала
            NewGame();

        }
        // метод новой игры
        private void NewGame()
        {
            // вызов метода для генерации нового числа
            NovoeChislo();
            // вывод результатов сравнения загаданного и введенного чисела
            label2.Text = "";
            // обнуление вывода загаданного числа
            label3.Text = "";
            textBox1.ReadOnly = false;
        }
        // метод генерации нового числа
        private void NovoeChislo()
        {
            // сравнение с предыдущими цифрами
            bool contains;
            for (int i = 0; i < 4; i++)
            {
                do
                {
                    contains = false;
                    x[i] = rand.Next(10);
                    // цикл сравнения цифры с предыдущими
                    for (int k = 0; k < i; k++)
                        if (x[k] == x[i])

                            contains = true;
                } while (contains);
            }
            s = x[0].ToString() + x[1] + x[2] + x[3];

        }

        // привязываем событие
        // описывает что сделать
        private void textBox1_KeyPress(object sender, KeyPressEventArgs e)
        {

            if (Char.IsDigit(e.KeyChar) || e.KeyChar == (char)Keys.Back)

                e.Handled = false;
            else

                e.Handled = true;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            // если в текстбоксе не 4 цифры
            if (textBox1.Text.Length != 4)
            {
                // вывести сообщение об ошибке
                MessageBox.Show("введенное число должно быть четырехзначным");
            }
            else
            {

                SravenieChisel();
                // вызвать метод вывода результатов сравнения на экран
                RezultShow();
            }
            // очистка текстбокса
            textBox1.Text = "";
        }


        private void RezultShow()
        {
            label2.Text += textBox1.Text + " полностью совпало " + polnoeSovpadenie + " совпало " + chastichnoeSovpadenie + "\n";
        }

        // сравнение загаданного и введенного чисела
        private void SravenieChisel()
        {
            // обнуление 
            polnoeSovpadenie = 0;
            chastichnoeSovpadenie = 0;

            char[] ch = textBox1.Text.ToCharArray();
            // проверка символов в массиве
            for (int i = 0; i < 4; i++)
            {

                if (s.Contains(ch[i]))
                {

                    if (s[i] == ch[i])

                        polnoeSovpadenie++;
                    else

                        chastichnoeSovpadenie++;
                }
            }
        }


        private void button2_Click(object sender, EventArgs e)
        {
            label3.Text = s;

            label2.Text = "";
            // запрещаем ввод символов в текстбокс
            textBox1.ReadOnly = true;
        }


        private void button3_Click(object sender, EventArgs e)
        {
            // вызов метода начала новой игры
            NewGame();


        }

      
    }

}

