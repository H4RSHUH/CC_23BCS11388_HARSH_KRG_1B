#include <iostream>
#include <vector>
using namespace std;

int countSetBits(int n) {
    int count = 0;
    while (n != 0) {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int sumBitDiff(vector<int>& arr) {
    int diff = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int x = arr[i] ^ arr[j];
            int count = countSetBits(x);
            diff += 2 * count;
        }
    }

    return diff;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << sumBitDiff(arr) << endl;

    return 0;
}