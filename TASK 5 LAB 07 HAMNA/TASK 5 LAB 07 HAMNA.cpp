#include <iostream>
using namespace std;
int main() {
    int array[10];
    int positive = 0, negative = 0, odd = 0, even = 0; //even-additionalforpracticing
    cout << "ENTER 10 NO:" << endl;
    for (int i = 0; i < 10; ++i)
    {
        cout << "NUMBER " << i + 1 << ": ";
        cin >> array[i];
        if (array[i] > 0) {
            positive++;
        }
        else if (array[i] < 0) {
            negative++;
        }
        if (array[i] % 2 != 0)
        {
            odd++;
        }
        else if (array[i] % 2 == 0)
        {
            even++;
        }
    }
    cout << "Number of positive numbers: " << positive << endl;
    cout << "Number of negative numbers: " << negative << endl;
    cout << "Number of odd numbers: " << odd << endl;
    cout << "Number of even numbers: " << even << endl;
    return 0;
}