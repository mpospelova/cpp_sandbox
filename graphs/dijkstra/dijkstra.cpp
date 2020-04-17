#include<bits/stdc++.h>
typedef std::pair<int, int>P;

std::vector<int> dijkstra(int num_nodes, int start, std::vector<P>edges[], std::vector<int>dist) {
    std::vector<bool>visited(num_nodes + 1, false);
    std::priority_queue<P, std::vector<P>, std::greater<P>> queue;
    queue.push(std::make_pair(0, start));

    while(!queue.empty()) {
        P top = queue.top();
        queue.pop();
        int current_vertex = top.second;
        if(!visited[current_vertex]) {
            visited[current_vertex] = true;

            for(int i = 0; i < edges[current_vertex].size(); i++) {
                int next_vertex = edges[current_vertex][i].second;
                int weight = edges[current_vertex][i].first;

                if(dist[next_vertex] > dist[current_vertex] + weight)
                    dist[next_vertex] = dist[current_vertex] + weight;

                queue.push(std::make_pair(dist[next_vertex], next_vertex));
            }
        }
    }
    return dist;
} 


int main() {
    int t{0};
    std::cin >> t;
    for(int i = 0; i < t; i++) {
        int num_nodes{0}, num_edges{0};
        std::cin >> num_nodes >> num_edges;
        std::vector<P>edges[num_nodes + 1];
        std::vector<int>dist(num_nodes + 1, std::numeric_limits<int>::max());
        for(int j = 0; j < num_edges; j++) {
            int x{0}, y{0}, r{0};
            scanf("%d %d %d", &x, &y, &r);

            edges[x].push_back(std::make_pair(r, y));
            edges[y].push_back(std::make_pair(r, x));
        }
        int start{0};
        std::cin >> start;
        dist[start] = 0;
        for(int i = 0; i < edges[start].size(); i++) {
            P pair = edges[start][i];
            dist[pair.second] = pair.first;
        }

        std::vector<int>result = dijkstra(num_nodes, start, edges, dist);
        for(int i = 1; i < result.size(); i++) {
            if(i == start)
                continue;
            if(result[i] == std::numeric_limits<int>::max())
                std::cout << -1 << ' ';
            else
                std::cout << result[i] << ' ';
        }
        std::cout << "\n";
    }
    return 0;
}