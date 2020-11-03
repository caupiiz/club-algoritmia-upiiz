#include <iostream>
// https://omegaup.com/arena/problem/Formula-Recursiva-Ocho/#problems
using namespace std;
typedef long int li;

long int arr[10000] = {0};

li fn(li n) {
    if(n < 4) return 10;
    else if(arr[n] != 0) {
        return arr[n];
    }
    return arr[n] = (fn(n - 2) + fn(n - 4) + 30);
}

int main() {
    li n;
    cin >> n;
    cout << fn(n) << endl;
    return 0;
}
