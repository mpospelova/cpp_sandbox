#include<bits/stdc++.h>
typedef std::pair<int, int> P;

int prim(int num_nodes, std::vector<P>edges[], int start_node) {
    std::vector<bool>visited(num_nodes + 1);
    std::priority_queue<P, std::vector<P>, std::greater<P>> queue;
    P temp = std::make_pair(0, start_node);
    queue.push(temp);
    int counter = 0;

    while(!queue.empty()) {
        temp = queue.top();
        queue.pop();

        if(!visited[temp.second]) {
            visited[temp.second] = true;
            counter += temp.first;
            for(int i = 0; i < edges[temp.second].size(); i++)
                if(!visited[edges[temp.second][i].second])
                    queue.push(edges[temp.second][i]);
        }
    }

    return counter;
}


int main() {
    int num_nodes, num_edges, start;
    std::cin >> num_nodes >> num_edges;
    std::vector<P>edges[num_nodes + 1];

    for(int i = 0; i < num_edges; i++) {
        int from, to, weight;
        std::cin >> from >> to >> weight;
        edges[from].push_back(std::make_pair(weight, to));
        edges[to].push_back(std::make_pair(weight, from));
    }
    std::cin >> start;
    int res = prim(num_nodes, edges, start);
    std::cout << res << std::endl;
    return 0;
}