#include <iostream>
#include <algorithm>
#include<vector>
#include<queue>
//task text: https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup
int jumpingOnClouds(std::vector<int> c) {
    //using BFS
    int length = c.size();
    int src = 0;
    int dest = c.size() - 1;
    bool visited[length];
    int dist[length];
    for(int i = 0; i < length; i++) {
        dist[i] = 0;
        visited[i] = false;
    }

    std::queue<int> queue;
    std::vector<int> edges[length];

    for(int i = 0; i < length-1; i++) {
        if(c.at(i) == 0) {
            if(i == length-2) {
                if(c.at(i+1) != 1)
                    edges[i].push_back(i+1);
            } else {
                if(c.at(i+1) != 1)
                    edges[i].push_back(i+1);
                if(c.at(i+2) != 1)
                    edges[i].push_back(i+2);
            }
        }
    }

    visited[src] = true;
    dist[src] = 0;
    queue.push(src);
    int result_found = false;
    while(!queue.empty()) {
        if(result_found)
            break;

        int front = queue.front();
        queue.pop();
        for(int i = 0; i < edges[front].size(); i++) {
            if(!visited[edges[front][i]]) {
                visited[edges[front][i]] = true;
                dist[edges[front][i]] = dist[front]+1;
                queue.push(edges[front][i]);

                if (edges[front][i] == dest) {
                    result_found = true;
                    break;
                }
            }
        }
    } 

    return dist[length-1];
}



int main() {
    std::vector<int> input = {0, 0, 1, 0, 0, 0, 0, 1, 0, 0};
    int res = jumpingOnClouds(input);
    std::cout << "result: " << res << std::endl;
    return 0;
}