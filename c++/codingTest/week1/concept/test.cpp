#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int size, i, j;
    cout << "TYPE SIZE : ";
    cin >> size;
    for (i = 0; i < size; i++)
    {
        for (j = 1; j < (size - i); j++)
            cout << ".";
        for (; j <= size; j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}