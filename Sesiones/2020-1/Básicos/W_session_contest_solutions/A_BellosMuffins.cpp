#include <bits/stdc++.h>
// https://omegaup.com/arena/problem/Bellos-Muffins/#problems
using namespace std;

int main(int argc, char const *argv[]) {
    int n, m;
    int totalParaGil;
    cin >> n >> m;
    totalParaGil = (n/m) + (n%m);
    cout << totalParaGil << endl;
    return 0;
}
