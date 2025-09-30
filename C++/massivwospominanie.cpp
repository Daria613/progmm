#include <iostream>
#include <vector>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int  arrey [] = { 2, 3, 1, 0, 10, 28, 27, 31 };
    int h = arrey [0];
    vector <int> b;
    b.push_back(h);

    for (int i = 0; i < 10; i++)
    {
        if (h < arrey[i]) {
            h = arrey[i];
            b.push_back(h);
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << b[i] << endl;
    }
}
