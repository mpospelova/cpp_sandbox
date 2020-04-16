#include<bits/stdc++.h>

std::vector<int>floyd(int num_nodes, int q, std::vector<std::vector<int>>matrix, std::vector<std::pair<int, int>> queries) {
    for(int k = 1; k <= num_nodes; k++) {
        for(int i = 1; i <= num_nodes; i++) {
            for(int j = 1; j <= num_nodes; j++) {
                if(matrix[i][k] == std::numeric_limits<int>::max() ||
                matrix[k][j] == std::numeric_limits<int>::max())
                    continue;
                matrix[i][j] = std::min(matrix[i][j], matrix[i][k] + matrix[k][j]);
            }
        }
    }
    std::vector<int>result;
    for(int i = 0; i < q; i++) {
        std::pair<int, int> p = queries[i];
        result.push_back(matrix[p.first][p.second]);
    }
    return result;
}

int main() {
    int num_nodes, num_edges, q;
    std::cin >> num_nodes >> num_edges;

    std::vector<std::vector<int>> matrix(num_nodes + 1, std::vector<int>(num_nodes + 1));
    for(int i = 0; i < num_edges; i++) {
        int x, y, r;
        std::cin >> x >> y >> r;
        matrix[x][y] = r;
    }

    for(int i = 1; i < matrix.size(); i++) {
        for(int j = 1; j < matrix[0].size(); j++) {
            if(matrix[i][j] == 0 && j != i)
                matrix[i][j] = std::numeric_limits<int>::max();
        }
    }

    std::cin >> q;
    std::vector<std::pair<int, int>> queries;
    for(int i = 0; i < q; i++) {
        int a, b;
        std::cin >> a >> b;
        queries.push_back(std::make_pair(a, b));
    }

    std::vector<int>result = floyd(num_nodes,q, matrix, queries);
    for(int i = 0; i < result.size(); i++) {
        if(result[i] == std::numeric_limits<int>::max()) 
            std::cout << -1 << std::endl;
        else
            std::cout << result[i] << std::endl;
    }
    std::cout << "\n";
    return 0;
}