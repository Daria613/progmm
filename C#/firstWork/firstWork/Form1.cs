namespace firstWork
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            double start;
            double end;
            double step;


            start = Convert.ToDouble(textBox1.Text);
            end = Convert.ToDouble(textBox3.Text);
            step = Convert.ToDouble(textBox4.Text);

            for (double i = start; i <= end; i += step)
            {
                listBox1.Items.Add(i.ToString());
            }
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }
    }
}
