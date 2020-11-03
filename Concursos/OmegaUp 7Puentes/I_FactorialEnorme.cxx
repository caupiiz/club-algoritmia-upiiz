#include <bits/stdc++.h>
// https://omegaup.com/arena/problem/Factorial-Enorme/#problems

using namespace std;

int main() {
    long int n;
    double res = 0;
    cin >> n;

    for(double i = n; i > 0; i--) {
        res += log10(i);
    }
    res = ceil(res);

    if(n == 1) res = 1;

    cout << n << "! tiene ";
    cout << (int64_t)res << " digitos" << endl;

    return 0;
}
