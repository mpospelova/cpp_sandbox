#include<bits/stdc++.h>
struct connection {
    int from;
    int to;
    int weight;
};

int root(std::vector<int>parents, int child) {
    int parent = parents[child];
    while(parent > 0) {
        int temp = parents[parent];
        if(temp < 0)
            return parent;

        parent = temp;
    }
    return child;
}

int kruskals(int num_nodes, std::vector<int>nodes, std::vector<connection>connections) {
    std::vector<int>parent(num_nodes + 1, -1);
    int counter = 0;
    for(auto x : connections) {
        int parent_from = root(parent, x.from);
        int parent_to = root(parent, x.to);
        if(parent_from != parent_to) {
            int min = std::min(parent_from, parent_to);
            int max = std::max(parent_from, parent_to);
            parent[min] += parent[max];
            parent[max] = min;
            counter += x.weight;
        }
    }
    return counter;
}

int main() {
    int num_nodes, num_edges;
    std::cin >> num_nodes >> num_edges;
    std::vector<connection> connections;
    std::vector<int> nodes;

    for(int i = 0; i < num_edges; i++) {
        int from, to, weight;
        std::cin >> from >> to >> weight;
        struct connection kc;
        kc.from = from;
        kc.to = to;
        kc.weight = weight;
        connections.push_back(kc);
        nodes.push_back(from);
        nodes.push_back(to);
    }
    std::sort(nodes.begin(), nodes.end());
    nodes.erase(std::unique(nodes.begin(), nodes.end()), nodes.end());

    std::sort(connections.begin(), connections.end(), [](auto x, auto y){return x.weight < y.weight;});
    std::cout << kruskals(num_nodes, nodes, connections) << std::endl;
    return 0;
}