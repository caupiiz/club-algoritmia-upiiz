#include<bits/stdc++.h>
using namespace std;
int V;
vector<int> *lista;
void dfsUtil(int v,bool visitados[]){
    cout<<v<<endl;
    visitados[v] = true;
    vector<int>::iterator i;
    for (i = lista[v].begin(); i != lista[v].end(); ++i)
        if (!visitados[*i])
            dfsUtil(*i, visitados);
}
void dfs(int v){
    bool visitados[V];
    for (int i = 0; i < V; i++)
        visitados[i] = false;
    dfsUtil(v,visitados);
}
void addArista(int origen,int destino){
    lista[origen].push_back(destino);
    lista[destino].push_back(origen);
}
int main(){
    int E;
    int o,d;
    cin>>V>>E;
    lista = new vector<int>[V];
    while(E--){
        cin>>o>>d;
        addArista(o,d);
    }
    dfs(0);
    return 0;
}
