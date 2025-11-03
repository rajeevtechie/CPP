#include<iostream>
#include<vector>
using namespace std;

class graph {
    int V;
    vector<vector<int>> adjMatrix;  // adjacency matrix
public:
    graph(int V) {
        this->V = V;
        adjMatrix.resize(V, vector<int>(V, 0));  // initialize all with 0
    }

    void addedge(int u, int v) {  // u--v (undirected)
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1;
    }

    void print() {
        cout << "Adjacency Matrix:" << endl;
        for (int i = 0; i < V; i++) {
            cout << i << " : ";
            for (int j = 0; j < V; j++) {
                cout << adjMatrix[i][j] << " ";
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

    Graph.print();
    return 0;
}
