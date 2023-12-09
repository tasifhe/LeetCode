// Solved by Tasif Hossain Emon
// Student of SMUCT //BATCH 29th //ID:221071042

//*914. X of a Kind in a Deck of Cards //Accepted Solution
#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define INF LLONG_MAX

class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> count;
        for (int card : deck) {
            count[card]++;
        }
        int gcd = count.begin()->second;
        for (auto it = count.begin(); it != count.end(); it++) {
            gcd = __gcd(gcd, it->second);
        }
        return gcd >= 2;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Solution solution;
    // Test case
    vector<int> deck = {1, 1, 2, 2, 2, 2, 3, 3};
    bool result = solution.hasGroupsSizeX(deck);
    cout <<(result ? "true" : "false") << endl;

    return 0;
}