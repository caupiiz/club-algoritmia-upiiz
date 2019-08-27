#include <bits/stdc++.h>
// Por David Betancourt Montellano
// https://www.hackerrank.com/challenges/best-divisor/problem
using namespace std;

int getBestDivisor(int n) ;
int getSumDigits(int n);

int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    cout << getBestDivisor(n) << endl;
    return 0;
}

int getBestDivisor(int n) {
    int bestDivisor = 0;
    int sumBestDivisor = 0;
    for (int i = 1; i <= n; i++) {
        if(n % i == 0) {
            int sum = getSumDigits(i);
            if(sum > sumBestDivisor) {
                sumBestDivisor = sum;
                bestDivisor = i;
            }
        }
    }
    return bestDivisor;
}

int getSumDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n%10;
        n /= 10;
    }
    return sum;
}
