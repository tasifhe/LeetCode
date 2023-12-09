// Solved by Tasif Hossain Emon
// Student of SMUCT //BATCH 29th //ID:221071042

//*258. Add Digits //Accepted Solution
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        if (num == 0) {
            return 0;
        }
        if (num % 9 == 0) {
            return 9;
        }
        return num % 9;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Solution sol;

    int num;
    cin >> num;

    int result = sol.addDigits(num);
    cout<< result << endl;
    
    return 0;
}