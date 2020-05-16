#include<bits/stdc++.h>

void dfs(int start, std::vector<bool>&visited, std::vector<std::vector<int>>edges) {
    std::stack<int>stack;
    visited[start] = true;
    stack.push(start);
    while(!stack.empty()) {
        int top = stack.top();
        stack.pop();
        for(int i = 0; i < edges[top].size(); i++) {
            int next_node = edges[top][i];
            if(!visited[edges[top][i]]) {
                visited[next_node] = true;
                stack.push(next_node);
            }
        }
    }
}

int get_index(std::vector<bool>visited) {
    for(int i = 1; i < visited.size(); i++)
        if(!visited[i])
            return i;
    
    return -1;
}

int roads_and_libraries(std::vector<std::vector<int>>edges, int num_nodes, int cost_lib, int cost_road) {
    std::vector<bool>visited(num_nodes + 1);
    int count = std::count(visited.begin(), visited.end(), true);
    int num_roads{0};
    int num_lib{0};

    while(count != num_nodes) {
        int index = get_index(visited);
        if(index == -1)
            break;
        
        dfs(index, visited, edges);
        int temp = std::count(visited.begin(), visited.end(), true);
        num_roads += (temp - count - 1);
        num_lib += 1;
        count = temp;
    }
    return num_roads * cost_road + num_lib * cost_lib;
}

int main() {
    int q{0};
    std::cin >> q;
    for(int j = 0; j < q; j++) {
        int num_cities{0}, num_roads{0}, lib_cost{0}, road_cost{0};
        std::cin >> num_cities >> num_roads >> lib_cost >> road_cost;

        std::vector<std::vector<int>>edges(num_cities + 1);
        for(int i = 0; i < num_roads; i++) {
            int u{0}, v{0};
            std::cin >> u >> v;
            edges[u].push_back(v);
            edges[v].push_back(u);
        }

        if(road_cost >= lib_cost) {
            std::cout << lib_cost * num_cities << std::endl;
            continue;
        }

        int result = roads_and_libraries(edges, num_cities, lib_cost, road_cost);
        std::cout << result << std::endl;
    }
    return 0;
}