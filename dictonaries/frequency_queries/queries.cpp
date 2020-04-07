#include <bits/stdc++.h>

std::vector<int> freqQuery(std::vector<std::vector<int>> queries) {
    std::unordered_map<int, int> map;
    std::vector<int>result;
    for(int i = 0; i < queries.size(); i++) {
        auto current_query = queries[i];
        if(current_query[0] == 1)
            map[current_query[1]]++;

        else if(current_query[0] == 2)
            map[current_query[1]]--;
        
        else if(current_query[0] == 3) {
            int counter = current_query[1];
            bool found = false;
            for(auto x : map)
                if (x.second == counter)
                    found = true;

            if(found)
                result.push_back(1);
            else
                result.push_back(0);
        }
    }
    return result;
}


int main() {
int loops;
    std::unordered_map<int, int> cnt;
    std::unordered_map<int, int> freq;
    std::cin >> loops;

    for(int i = 0; i < loops; i++) {
        int first{0}, second{0};
        std::cin >> first >> second;
        if(first == 1) {
            cnt[freq[second]]--;
            freq[second]++;
            cnt[freq[second]]++;
        } else if(first == 2) {
            if(freq[second] > 0) {
                cnt[freq[second]]--;
                freq[second]--;
                cnt[freq[second]]++;
            }
        } else if(first == 3) {
            if(cnt[second]>0)
                std::cout << "1" << std::endl;
            else
                std::cout << "0" << std::endl;
        }
    }
        return 0;
}

    // a nice way to make a pair!!!!! very useful!!!!!
    // if( !(std::cin >> first >> second))
    //     throw std::runtime_error("Can't parse");
    // user_data.push_back(std::make_pair(first, second));