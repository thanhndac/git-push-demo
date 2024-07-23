#include <iostream>
#include <stdlib.h>
using namespace std;


int isBinary(int **a, int m, int n)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] != 0 && a[i][j] != 1) // neu co 1 phan tu khong phai 0 hoac 1 thi khong phai ma tran nhi phan
            return 0;
    return 1;
}

int main()
{
    //code right here
    int m, n;
    cin >> m >> n;
    int** a = new int* [n];
    for (int i = 0; i < n; i++) 
    {
        a[i] = new int[m];
    }
    srand(time(NULL));
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            a[i][j] = 0 + rand() % 2;
        }
    }
    
    //end of code
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j];
        cout << endl;
    }
    
    if (isBinary(a, m, n) == 1) cout << "Ma tran nhi phan";

    return 0;
}
