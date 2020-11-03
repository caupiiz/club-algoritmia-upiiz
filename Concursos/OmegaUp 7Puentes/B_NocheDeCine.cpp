#include<bits/stdc++.h>
using namespace std;
vector<int> *adj;
int V;
void dfsUtil(int v,bool visitados[]){
    cout<<v + 1<<" ";
    visitados[v] = true;
    vector<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visitados[*i])
            dfsUtil(*i, visitados);
}
void dfs(int v){
    bool visitados[V];
    for (int i = 0; i < V; i++)
        visitados[i] = false;
    dfsUtil(v,visitados);
}
//O(V + E)
int main(){
    int s,m,d,v;
    cin >> V >> v;
    v--;
    adj = new vector<int>[V];
    for(int i = 0;i < V;i++){
        cin >> s >> m;
        s--;
        while(m--){
            cin >> d;
            d--;
            adj[s].push_back(d);
        }
    }
    dfs(v);
    cout<<endl;
    return 0;
}
