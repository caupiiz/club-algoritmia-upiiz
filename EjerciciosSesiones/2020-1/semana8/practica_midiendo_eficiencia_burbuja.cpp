#include<bits/stdc++.h>

using namespace std;
using namespace std::chrono;

//burbuja sin optimizar
void ordenar1(int arreglo[], int n) {
    int x, y;
    for(x=0;x<n-1;x++) {
        for(y=0;y<n-1-x;y++) {
            if(arreglo[y]>arreglo[y+1]) {
                   int temp=arreglo[y];
                    arreglo[y]=arreglo[y+1];
                    arreglo[y+1]=temp;
               }
        }
    }
}

void generarArr(int arr[],int n) {
    std::random_device rd;
    std::mt19937_64 gen(rd());
    std::uniform_int_distribution<unsigned int>dis;

    for(int i=0;i<n;i++) {
        arr[i]= dis(gen) % 1000;
    }
}
int main() {
    ofstream fs("tiempos.csv");
    for(int n = 2; n <= 5000; n++) {
        int arr[n];
        generarArr(arr,n);
        high_resolution_clock::time_point t1 = high_resolution_clock::now();
        ordenar1(arr,n);
        high_resolution_clock::time_point t2 = high_resolution_clock::now();
        
        duration<double, std::milli> time = t2 - t1;
        fs <<to_string(n) << "," << to_string(time.count()) << "\n";
        cout << n << ": " << time.count() << endl;
    }
    return 0;
}









