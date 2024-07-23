#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

bool check(long long mid, vector<long long>& array, int k) {
    int count = 0;
    long long sum = 0;
    for (int i = 0; i < array.size(); i++) {
        if (array[i] > mid) {
            return false;
        }
        if (sum + array[i] > mid) {
            count++;
            sum = array[i];
        }
        else {
            sum += array[i];
        }
    }
    count++;
    if (count <= k) {
        return true;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<long long> array(n);
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    long long left = *max_element(array.begin(), array.end());
    long long right = accumulate(array.begin(), array.end(), 0LL);
    while (left < right) {
        long long mid = left + (right - left) / 2;
        if (check(mid, array, k)) {
            right = mid;
        }
        else {
            left = mid + 1;
        }
    }
    cout << left << "\n";

    return 0;
}
