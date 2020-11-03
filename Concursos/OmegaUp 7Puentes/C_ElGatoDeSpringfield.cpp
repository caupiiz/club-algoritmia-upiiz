#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

int inf =  0x3f3f3f3f;
struct edge{
	int source, dest, cost, id;
	bool operator>(const edge & e) const{
		return cost > e.cost;
	}
};
struct path{
	int cost = inf;
	vector<pii> previous;
};

vector<path> dijkstra(int start, vector<vector<edge>> & adjList){
	int V = adjList.size();
	priority_queue<edge, vector<edge>, greater<edge>> cola;
	vector<path> paths(V, path());
	vector<bool> relaxed(V, false);
	cola.push({start, start, 0});
	paths[start].cost = 0;
	relaxed[start] = true;
	while(!cola.empty()){
		int u = cola.top().dest; cola.pop();
		if(u == V - 1) break;
		relaxed[u] = true;
		for(edge & current : adjList[u]){
			int v = current.dest;
			if(relaxed[v]) continue;
			int nuevo = paths[u].cost + current.cost;
			if(nuevo == paths[v].cost){
				paths[v].previous.push_back({current.id, u});
			}else if(nuevo < paths[v].cost){
				paths[v].previous = {{current.id, u}};
				cola.push({v, v, nuevo});
				paths[v].cost = nuevo;
			}
		}
	}
	return paths;
}

int dijkstra(int start, vector<vector<edge>> & adjList, vector<bool> & forbidden){
	int V = adjList.size();
	priority_queue<edge, vector<edge>, greater<edge>> cola;
	vector<path> paths(V, path());
	vector<bool> relaxed(V, false);
	cola.push({start, start, 0});
	paths[start].cost = 0;
	relaxed[start] = true;
	while(!cola.empty()){
		int u = cola.top().dest; cola.pop();
		if(u == V - 1) return paths[u].cost;
		relaxed[u] = true;
		for(edge & current : adjList[u]){
			if(forbidden[current.id]) continue;
			int v = current.dest;
			if(relaxed[v]) continue;
			int nuevo = paths[u].cost + current.cost;
			if(nuevo < paths[v].cost){
				cola.push({v, v, nuevo});
				paths[v].cost = nuevo;
			}
		}
	}

	return -1;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int V, E, u, v, cost;
	while(cin >> V >> E && !(V == 0 && E == 0)){
		vector<vector<edge>> graph(V, vector<edge>());
		for(int i = 0; i < E; ++i){
			cin >> u >> v >> cost;
			--u, --v;
			graph[u].push_back({u, v, cost, i});
			graph[v].push_back({v, u, cost, i});
		}
		vector<path> paths = dijkstra(0, graph);

		vector<bool> processed(V);
		vector<bool> forbidden(E);
		queue<int> Q;
		Q.push(V - 1);
		processed[V - 1] = true;

		while(!Q.empty()){
			int curr = Q.front(); Q.pop();
			for(auto & path : paths[curr].previous){
				int id = path.first;
				forbidden[id] = true;
				int prev = path.second;
				if(!processed[prev]){
					Q.push(prev);
					processed[prev] = true;
				}
			}
		}

		int ans = dijkstra(0, graph, forbidden);
		if(ans == -1) cout << "Do'oh!\n";
		else cout << ans << "\n";
	}
	return 0;
}
