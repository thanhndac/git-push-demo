/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

#include <iostream>
using namespace std;



//###INSERT CODE HERE -
void inputArray(int*& a, int& n)
{
    cin >> n;
	a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
// 6 8 9 12 12 45 45 45 89 89 89 89
int binarySearch2(int* arr, int n, int target) {
    int left = 0;
    int right = n - 1;
    int last_occurrence = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            last_occurrence = mid;
            left = mid + 1;  // Move to the right to find the last occurrence
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return last_occurrence;
}

//code ends here


int main()
{
    int n, *a = NULL;
    inputArray(a, n); //Luu y van de tham chieu cho con tro a va n

    // nhap cac gia tri can tim, neu nhap -1 thi ket thuc viec tim kiem
    int x;
    while(1)
    {
		cin >> x;
		if (x == -1)
			break;
        cout << binarySearch2(a, n, x) << endl;
    }

    return 0;
}

