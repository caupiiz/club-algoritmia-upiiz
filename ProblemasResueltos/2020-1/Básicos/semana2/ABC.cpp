#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
    int a, b, c;

    cin >> a >> b >> c;
    vector <int> abc = {a, b, c};

    sort(abc.begin(), abc.end());

    string orden;
    cin >> orden;

    cout << abc[(int)orden[0]-65] << " ";
    cout << abc[(int)orden[1]-65] << " ";
    cout << abc[(int)orden[2]-65] << endl;

    return 0;
}
