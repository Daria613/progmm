#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int arrey[] = { 6 ,10 ,7 ,14 ,12 ,12 ,- 2 ,3 ,- 9 ,6 ,- 10 };
   

    const int count = sizeof(arrey) / sizeof(arrey[0]);
    int sum = 0;

    for (int i = 0; i < count; i++) {
        if (arrey[i] % 2 == 0 && arrey[i] % 3 != 0) {
            cout << "число кратное 2 и не кратное 3: " << arrey[i] << endl;
            sum += arrey[i];
        }
    }

    cout << "сумма чисел: " << sum;
    return 0;
}
