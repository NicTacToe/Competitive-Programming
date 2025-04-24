#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Graph {
public:
  unordered_map<int, vector<int>> adjList;

  void addEdge(int u, int v) {
    adjList[u].push_back(v);
    adjList[v].push_back(u);
  }

  int countEdges() {
    int edgeCount = 0;
    for (auto& node : adjList) {
      edgeCount += node.second.size();
    }
    return edgeCount / 2;
  }
};

int main() {
  Graph g;

  g.addEdge(1, 2);
  g.addEdge(1, 3);
  g.addEdge(2, 3);
  g.addEdge(3, 4);
  g.addEdge(4, 5);

  cout << "Total number of edges: " << g.countEdges() << endl;

  return 0;
}