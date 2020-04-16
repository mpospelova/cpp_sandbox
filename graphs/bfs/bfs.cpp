#include<bits/stdc++.h>

std::vector<int> bfs(int num_nodes, int num_edges, std::vector<std::vector<int>> edges, int start) {
    std::vector<bool>visited(num_nodes + 1, false);
    std::vector<int>dist(num_nodes + 1, 0);
    std::queue<int>queue;

    visited[start] = true;
    queue.push(start);
    while(!queue.empty()) {
        int node = queue.front();
        queue.pop();
        for(int i = 0; i < edges[node].size(); i++) {
            if(!visited[edges[node][i]]) {
                visited[edges[node][i]] = true;
                dist[edges[node][i]] = dist[node] + 1;
                queue.push(edges[node][i]);
            }
        }
    }

    for(int i = 1; i < dist.size(); i++) {
        if(dist[i] == 0 && i != start) {
            dist[i] = -1;
            continue;
        }
        dist[i] *= 6;
    }
    dist.erase(dist.begin() + start);
    dist.erase(dist.begin());
    return dist;
}



int main() {
    int q;
    std::cin >> q;
    for(int i = 0; i < q; i++) {
        int number_nodes, number_edges;
        std::cin >> number_nodes >> number_edges;
        std::vector<std::vector<int>>edges_per_index(number_nodes + 1);
        for(int j = 0; j < number_edges; j++) {
            int u, v;
            std::cin >> u >> v;

            if(std::find(edges_per_index[u].begin(), edges_per_index[u].end(), v) == edges_per_index[u].end())
                edges_per_index[u].push_back(v);
            
            if(std::find(edges_per_index[v].begin(), edges_per_index[v].end(), u) == edges_per_index[v].end())
                edges_per_index[v].push_back(u);
        }

        int start;
        std::cin >> start;
        std::vector<int>dist = bfs(number_nodes, number_edges, edges_per_index, start);
        std::cout << "\nresult:\n";
        for(int j = 0; j < dist.size(); j++) {
            std::cout << dist[j] << ' ';
        }
        std::cout << "\n";
    }

    return 0;
}