#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>

struct Player {
    int score;
    std::string name;
};

class Checker{
public:
    static int comparator(Player a, Player b)  {
        if(a.score < b.score)
            return -1;

        else if(a.score == b.score) {
            if(b.name > a.name)
                return 1;
            else
                return -1;
        }
        
        return 1;
    }
};

bool compare(Player a, Player b) {
    if(Checker::comparator(a,b) == -1)
        return false;
    return true;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<Player> players;
    std::string name;
    int score;
    for(int i = 0; i < n; i++) {
        std::cin >> name >> score;
        Player player;
        player.name = name, player.score = score;
        players.push_back(player);
    }

    std::sort(players.begin(), players.end(), compare);
    std::cout << "Sorted array: " << std::endl;
    for(int i = 0; i < players.size(); i++) {
        std::cout << players[i].name << " " << players[i].score << std::endl;
    }

    return 0;
}