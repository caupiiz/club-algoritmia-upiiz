#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m;
    cin >> n;
    while(n--){
        cin >> m;
        long long int suma = 0;
        long long int ans = 0;
        long long int temp = 0;
        int l = 0;
        int ansL = 0,ansR = 0;
        //Iterate all the values that will given
        for (int i = 0; i < m; ++i) {
            long long int aux;
            cin >> aux;
            suma += aux;
            temp += aux;
            //If the sum saved in temp is less or equals to 0
            if(temp <= 0){
                //the temp value start again to 0
                temp = 0;
                //The left value is changed
                l = i + 1;
                continue;
            }
            if(ans < temp){
                ans = temp;
                ansL = l;
                ansR = i;
            }
        }
        if (suma > ans)cout<<"YES"<<endl;
		else if (suma < ans) cout<<"NO"<<endl;
		else {
			if (ansL == 0 && ansR == m - 1)cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}


    }
    return 0;
}
