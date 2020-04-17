#include<bits/stdc++.h>

int snakes_and_ladders(std::vector<std::vector<int>>board) {
    std::vector<bool>visited(101, false);
    std::vector<int>dist(101, 0);
    std::queue<int>queue;
    visited[1] = true;
    queue.push(1);

    while(!queue.empty()) {
        int top = queue.front();
        if(top == 100)
            break;
        queue.pop();
        for(int i = 0; i < board[top].size(); i++) {
            if(!visited[board[top][i]]) {
               visited[board[top][i]] = true;
               dist[board[top][i]] = dist[top] + 1;
               queue.push(board[top][i]);
           }
        }
    }
    return dist[100];
}


int main() {
    int t{0};
    std::cin >> t;
    for(int i = 0; i < t; i++) {
        std::vector<std::vector<int>>board(100 + 1);
        std::vector<bool>not_empty(100 + 1, false);
        int num_ladders{0}, num_snakes{0};
        std::cin >> num_ladders;
        for(int i = 0; i < num_ladders; i++) {
            int from{0}, to{0};
            std::cin >> from >> to;
            board[from].push_back(to);
            not_empty[from] = true;
        }

        std::cin >> num_snakes;
        for(int i = 0; i < num_snakes; i++) {
            int from{0}, to{0};
            std::cin >> from >> to;
            board[from].push_back(to);
            not_empty[from] = true;
        }

        for(int i = 1; i <= 100; i++) {
            for(int j = 1; j <= 6 && i + j <= 100; j++) {
                if(not_empty[i])
                    continue;

                if(board[i + j].size() > 0) {
                    int next_node = board[i + j][0];
                    board[i].push_back(next_node);
                } else
                    board[i].push_back(i + j);
            }
        }

        int result = snakes_and_ladders(board);
        if(result == 0)
            result = -1;
        std::cout << result << std::endl;
    }
    return 0;
}