#include <bits/stdc++.h>
// https://omegaup.com/arena/problem/Amigos-Misteriosos#problems
using namespace std;
// Por dbetm
int main() {
    string s;
    while (getline(cin,s)) {
        for (unsigned int i = 0; i < s.size(); i++) {
            if(s[i] == 'a') s[i]='x';
            else if(s[i] == 'e') s[i]='w';
            else if(s[i] == 'i') s[i]='y';
            else if(s[i] == 'o') s[i]='k';
            else if(s[i] == 'u') s[i]='z';
        }
        cout << s << "\n";
    }
    return 0;
}
