#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
    string bin;
    cout << "Type number: ";
    cin >> bin;
    int j = 0;
    int ans = 0;
    for (int i = bin.size()-1; i >= 0; i--, j++) {
        if(bin[i] == '1') ans += pow(2, j);
    }
    cout << "\n" << ans << endl;
    return 0;
}
