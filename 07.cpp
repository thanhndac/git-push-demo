#include <iostream>

using namespace std;

void inputArray(int*& a, int& n)
{
	cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void printArray(int* a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << ' ';
}

void swap(int& a, int& b)
{
	//most efficient
	a = a + b;
	b = a - b;
	a = a - b;
}



void boubleSort(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (a[j] < a[i])
				swap(a[i], a[j]);
		}
	}

}

void QuickSort(int* a, int L, int R)
{
	int i = L;
	int j = R;
	int mid = (L + R) / 2;
	while (i <= j)
	{
		while (a[i] < a[mid])
			i++;
		while (a[j] > a[mid])
			j--;
		if (i <= j)
		{
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}
	if (L < j)
		QuickSort(a, L, j);
	if (i < R)
		QuickSort(a, i, R);
}

void selectionSort(int* a, int n)
{
	QuickSort(a, 0, n - 1);
}



int main()
{
	int n;
	int* a = NULL;
	inputArray(a, n);
	//clock_t start = clock();
	QuickSort(a, 0, n - 1);
	//clock_t finish = clock();
	printArray(a, n);
	//cout << endl << "Runing time: " << (finish - start) * 1.0 / CLOCKS_PER_SEC;
	return 0;
}