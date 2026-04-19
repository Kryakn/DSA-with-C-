#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> prefixMax(n), suffixMin(n);

    prefixMax[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefixMax[i] = max(prefixMax[i-1], arr[i]);
    }

    suffixMin[n-1] = arr[n-1];
    for (int i = n-2; i >= 0; i--) {
        suffixMin[i] = min(suffixMin[i+1], arr[i]);
    }

    int blocks = 0;

    for (int i = 0; i < n-1; i++) {
        if (prefixMax[i] <= suffixMin[i+1]) {
            blocks++;
        }
    }

    cout << blocks + 1 << endl;
    return 0;
}