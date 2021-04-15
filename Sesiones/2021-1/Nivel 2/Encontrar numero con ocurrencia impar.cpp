//“Given a set of numbers where all elements occur even number of times except one number, find the odd occurring number"

#include <bits/stdc++.h>

using namespace std; //biblioteca estandar de c++ para que las que la usen no ocupen

//Macros
#define watch(x) cout << (#x) << " es: " << x << endl;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

//Type names
typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<long long int> vlli;
const lli MAX = 1e9+7;//primo mas grande que cabe en un int, int es 2^31 -1

//usar double en vez de float por más precision

// function to convert decimal to binary
void decToBinary(int n)
{
    // array to store binary number
    int binaryNum[32];
 
    // counter for binary array
    int i = 0;
    while (n > 0) {
 
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 
    // printing binary array in reverse order
    if(i==0) cout << "0000000";
    else 
        for (int j = i - 1; j >= 0; j--)
            cout << binaryNum[j];
}
  
// Function to return the only odd
// occurring element
int findOdd(int arr[], int n)
{
    int res = 0, i;
    for (i = 0; i < n; i++){
        res ^= arr[i];
        

        //res = res ^ arr[i];
        decToBinary(res);
        cout << endl;
    }
    return res;
}


int main(void)
{
    int arr[] = { 12, 12, 90, 90, 90, 14, 14, 14, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("The odd occurring element is %d ",
           findOdd(arr, n));
    return 0;
}
