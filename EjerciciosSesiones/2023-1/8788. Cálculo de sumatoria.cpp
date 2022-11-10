#include <bits/stdc++.h>

using namespace std;

int main(){///O(n)  -> O(1)
    uint64_t n;///O(1)
    cin>>n;///O(1)

    /*uint64_t r = 0;///O(1)

    for(uint64_t i=1; i<=n; i++){///O(n)
        r += i; /// r = r + i
    }

    cout<<r<<endl;///O(1)*/

    cout<<(n*(n+1))/2;///O(1)

    return 0;
}
