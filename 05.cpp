/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
###End banned keyword*/

#include <iostream>
using namespace std;

void inputArray(int*& a, int& n)
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
		int left = 0;
		int right = n;
		int mid = (left + right) / 2;
		bool isFound = 0;
		while (left <= right)
		{
			if (a[mid] == num)
			{
				cout << mid << endl;
				isFound = 1;
				break;
			}
			else if (num > a[mid])
			{
				left = mid + 1;
				mid = (left + right) / 2;
			}
			else
			{
				right = mid - 1;
				mid = (left + right) / 2;
			}
		}
		if (!isFound)
		{
			cout << -1 << endl;
		}
	}
	return;
}

int main()
{
	int n, m;
	int* a = NULL;
	inputArray(a, n);
	findElements(a, n, m);
	return 0;
}