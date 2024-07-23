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

    int n, m;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> m;
    vector<long long> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    long long left = *max_element(a.begin(), a.end());
    long long right = accumulate(a.begin(), a.end(), 0LL);
    while (left < right) {
        long long mid = left + (right - left) / 2;
        if (check(mid, a, m)) {
            right = mid;
        }
        else {
            left = mid + 1;
        }
    }
    cout << left << "\n";

    return 0;
}
