#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
    const int n = 10;
    int a, b;
    srand(time(0));
    cout << "Input limits of array(a and b, a<b):" << endl;
    cin >> a >> b;

    int array[n];
    for (int i = 0; i < n - 1; i++) {
        array[i] = rand() % (b - a) + a;
    }
    cout << "Your initial array is:" << endl;
    for (int i = 0; i < n - 1; i++) {
        cout << array[i] << "\t";
    }
    cout << endl;

    int task1 = 1;
    for (int i = 2; i < n - 1; i += 2) {
        task1 *= array[i];
    }
    cout << "The product of even numbers of the array: "
         << task1 << endl;


    int task2 = 0, min = 0, max = 0;
    for (int i = 0; i < n - 1; i++) {
        if (array[i] == 0) {
            min = i;
            break;
        }
    }
    for (int i = 0; i < n - 1; i++) {
        if (array[i] == 0) max = i;
    }
    for (int i = min + 1; i < max; i++)
    {
        task2 += array[i];
    }
    cout << "the sum of the array elements located between the first and last zeros among elements: "
        << task2 << endl;
}
