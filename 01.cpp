#include <iostream>
#include <stdlib.h>
using namespace std;
#define MIN -1000
#define MAX 1000

int isTotalOven(int *a, int n) // or (int a[], int n)
{
    for (int i=0;i<n;i++)
        if(a[i]%2!=0)
            return 0;
    return 1;
}
int isValidValue (int *a, int n) // or (int a[], int n)
{
    for (int i=0;i<n;i++)
        if (a[i]<2*MIN||a[i]>2*MAX)
            return 0;
    return 1;
}
int main()
{
    int n;
    cin >> n;
    int* a = new int[n];
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        a[i] = 2 + (MIN * rand() % (MAX - MIN + 1));
    }
    


    if (isTotalOven(a, n) == 1) cout << "Mang toan so chan" << endl;
    if (isValidValue(a, n) == 1) cout << "Mang chua cac gia tri nam trong khoang [" << 2 * MIN << "," << 2 * MAX << "]";
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}


