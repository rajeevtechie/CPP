#include<iostream>
#include<vector>
#include<list>
using namespace std;

class graph {
    int V;
    list<int> *l;
public:
    graph(int V) {
        this->V = V;
        l = new list<int>[V];
    }

    void addedge(int u, int v) {  // u--v
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void removeEdge(int u, int v) {  // delete edge u--v
        l[u].remove(v);
        l[v].remove(u);
    }

    void deleteNode(int node) {
        if (node >= V) {
            cout << "Invalid node!" << endl;
            return;
        }

        // 1. Remove all edges connected to 'node'
        for (int i = 0; i < V; i++) {
            l[i].remove(node);  // remove 'node' from others' adjacency lists
        }

        // 2. Clear the adjacency list of 'node' itself
        l[node].clear();

        cout << "Node " << node << " and its edges deleted successfully!" << endl;
    }

    void print() {
        for (int i = 0; i < V; i++) {
            cout << i << " : ";
            for (int v : l[i]) {
                cout << v << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    graph Graph(5);
    Graph.addedge(0, 1);
    Graph.addedge(1, 2);
    Graph.addedge(1, 3);
    Graph.addedge(2, 3);
    Graph.addedge(4, 2);

    cout << "Graph before deleting node:\n";
    Graph.print();

    Graph.deleteNode(2);

    cout << "\nGraph after deleting node 2:\n";
    Graph.print();

    return 0;
}
