#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[] = {3, 7, 12, 14, 2, 6, 9, 11};
    int n = sizeof(arr) / 4;
    sort(arr, arr+n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
