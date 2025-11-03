#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;

class graph{
    int V;
    list<int> *l;
public:
    graph(int V){
        this->V = V;
        l = new list<int> [V];
    }

    void addedge(int u,int v){ //u--v
        l[u].push_back(v);
        l[v].push_back(u);
    }

    
    void bfs(int start) {
    queue<int> q;
    vector<bool> vis(V, false);  // V is the number of vertices

    q.push(start);
    vis[start] = true;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        cout << u << " ";

        for (int v : l[u]) {  // l is the adjacency list
            if (!vis[v]) {
                vis[v] = true;
                q.push(v);
            }
        }
    }
    cout << endl;
}


    void print(){
        for(int i=0; i<V; i++){
            list<int> neighbours = l[i];
            cout << i << " : ";
            for(int v: neighbours){
                cout << v << " ";
            }
            cout << endl; 
        }
    }
};

int main(){
    graph Graph(5);
    Graph.addedge(0,1);
    Graph.addedge(1,2);
    Graph.addedge(1,3);
    Graph.addedge(2,3);
    Graph.addedge(4,2);
    Graph.print(); 
    Graph.bfs(0);
    return 0;
}

