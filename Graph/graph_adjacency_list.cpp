#include<iostream>
#include<vector>
#include<list>
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
    return 0;
}

