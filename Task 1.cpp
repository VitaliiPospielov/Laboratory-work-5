#include <iostream>
#include <math.h>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    double m, n, k, tmp;
    srand(time(0));
    cout << "You must input three numbers," << endl;
    cout << " -m is long of massiv A" << endl;
    cin >> m;
    cout << " -n is long of massiv B" << endl;
    cin >> n;
    cout << " -k is long of string in console" << endl;
    cin >> k;
    cout << endl;
    vector<int> a(m);
    for (int i = 0; i < m; i++) {
        a[i] = (double)(rand()) / RAND_MAX * (100 - (-200)) + (-200);
    }
    vector<double> b(n);
    for (int i = 0; i < n; i++) {
        b[i] = (double)(rand()) / RAND_MAX * (10 - 0) + 0;
    }
    cout << "Array A, initial form :" << endl;
    int vector_size = a.size();
    for (int i = 0, j = 0; i < vector_size; i++, j++)
    {
        if (j == k)
        {
            cout << endl;
            j = 0;
        }
        cout << a[i] << " ";
    }
    cout << endl << endl;
    cout << "Array B, initial form :" << endl;
    vector_size = b.size();
    for (int i = 0, j = 0; i < vector_size; i++, j++)
    {
        if (j == k)
        {
            cout << endl;
            j = 0;
        }
        cout << fixed << showpoint;
        cout << setprecision(3);
        cout << b[i] << " ";
    }
    cout << endl << endl;
    for (int i = 0; i < a.size() - 1; i++)
    {
        for (int j = 0; j <= a.size() - 2 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < b.size() - 1; i++)
    {
        for (int j = 0; j <= b.size() - 2 - i; j++)
        {
            if (b[j] > b[j + 1])
            {
                tmp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = tmp;
            }
        }
    }
    cout << "Array A, sorted form :" << endl;
    vector_size = a.size();
    for (int i = 0, j = 0; i < vector_size; i++, j++)
    {
        if (j == k)
        {
            cout << endl;
            j = 0;
        }
        cout << a[i] << " ";
    }
    cout << endl << endl;
    cout << "Array B, sorted form :" << endl;
    vector_size = b.size();
    for (int i = 0, j = 0; i < vector_size; i++, j++)
    {
        if (j == k)
        {
            cout << endl;
            j = 0;
        }
        cout << fixed << showpoint;
        cout << setprecision(3);
        cout << b[i] << " ";
    }
    cout << endl << endl;
}
