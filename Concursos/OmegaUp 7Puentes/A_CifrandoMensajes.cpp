#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,res;
    vector<int> ls,rs;
    getline(cin,s);
    for(int i = 0;i < s.size();i++){
        if(s[i] == '(')ls.push_back(i);
        if(s[i] == ')')rs.push_back(i);
    }
    int resi = 0;
    for(int i = 0;i < ls.size();i++){
        res = s.substr(ls[i] + 1 - resi,rs[i] - ls[i] - 1);
        reverse(res.begin(),res.end());
        s.replace(ls[i] - resi,rs[i] - ls[i] + 1,res);
        resi += 2;
    }
    cout<<s<<endl;
    return 0;
}
