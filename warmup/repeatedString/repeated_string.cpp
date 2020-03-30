// problem statement: https://www.hackerrank.com/challenges/repeated-string/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup&h_r=next-challenge&h_v=zen
#include <bits/stdc++.h>

long repeatedString(std::string s, long n) {
    long num_of_a = std::count(s.begin(), s.end(), 'a');
    long fit = n / s.length();
    num_of_a *= fit;
    long remainder = n - fit*s.length();
    std::string substring = s.substr(0, remainder);

    return num_of_a += std::count(substring.begin(), substring.end(), 'a');
}


int main() {
    long res = repeatedString("aa", 10);
    std::cout << "result: " << res << std::endl;
    return 0;
}