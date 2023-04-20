#include <iostream>
using namespace std;

int unique(int a[], int size)
{

    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return a[0];
    }
    else
    {
        int u = unique(a + 1, size - 1);
        int b = a[0] ^ u;

        return b;
    }
}

int main()
{
    int a[] = {11, 22, 1, 33, 3};

    cout << endl
         << unique(a, 5);
}