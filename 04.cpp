/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
###End banned keyword*/

#include <iostream>
using namespace std;

void inputArray(int* &a, int& n)
//con tro trong ham khac voi con tro trong main do ta goi ham bang cach truyen tham so;
{
    cin >> n;
    a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void findElements(int* a, int n, int& m)
{
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int num;
        cin >> num;
        int index;
        bool isFound;
        for (index = 0; index < n; index++)
        {
            isFound = false;
            if (a[index] == num)
            {
                cout << index << endl;
                isFound = true;
                break;
            }
        }
        if (!isFound)
            cout << -1 << endl;
    }
    return;
}

int main()
{
    int n,m;
    int *a=NULL;
    inputArray(a,n);
    findElements(a,n,m);
    return 0;
}
