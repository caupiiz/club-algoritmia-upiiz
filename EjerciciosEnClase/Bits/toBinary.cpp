#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
    int n;
    cout << "Type the number: ";
    cin >> n;
    string str = "";
    while(n != 0) {
        if(n%2) str += "1";
        else str += "0";
        n /= 2;
    }
    for (int i = str.size() - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;
    return 0;
}
