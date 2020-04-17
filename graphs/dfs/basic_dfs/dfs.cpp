#include<bits/stdc++.h>
bool dfs(int num_nodes, std::vector<std::vector<int>>edges, int start, int finish) {
    std::vector<bool>visited(num_nodes + 1, false);
    std::stack<int>stack;
    visited[start] = true;
    stack.push(start);
    while(!stack.empty()) {
        int top = stack.top();
        if(top == finish)
            return true;

        stack.pop();
        for(int i = 0; i < edges[top].size(); i++) {
            int next_node = edges[top][i];
            if(!visited[edges[top][i]]) {
                visited[next_node] = true;
                stack.push(next_node);
            }
        }
    }
    return false;
}


int main() {
    int num_nodes{0}, num_edges{0};
    std::cin >> num_nodes >> num_edges;

    std::vector<std::vector<int>>edges_per_index(num_nodes + 1);
    for(int i = 0; i < num_edges; i++) {
        int u{0}, v{0};
        std::cin >> u >> v;
        if(std::find(edges_per_index[u].begin(), edges_per_index[u].end(), v) == edges_per_index[u].end())
                edges_per_index[u].push_back(v);
            
        if(std::find(edges_per_index[v].begin(), edges_per_index[v].end(), u) == edges_per_index[v].end())
            edges_per_index[v].push_back(u);
    }
    int start{0}, finish{0};
    std::cin >> start >> finish;
    bool result = dfs(num_nodes, edges_per_index, start, finish);
    std::cout << result << std::endl;
    return 0;
}