
#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n);

class Solution
{
public:
    void solve(int open, int close, string s, vector<string> &ans)
    {
        if (open == 0 && close == 0)
        {
            ans.push_back(s);
        }
        if (open != 0)
        {
            solve(open - 1, close, s + '(', ans);
        }
        if (close > open && close != 0)
        {
            solve(open, close - 1, s + ')', ans);
        }
    }
    vector<string> AllParenthesis(int n)
    {
        // Your code goes here
        int open = n, close = n;
        vector<string> ans;
        string s = "";
        solve(n, n, s, ans);
        return ans;
    }
};
int main()
{
    int n;
    cin >> n;
    Solution ob;
    vector<string> result = ob.AllParenthesis(n);
    sort(result.begin(), result.end());
    for (int i = 0; i < result.size(); ++i)
        cout << result[i] << "\n";

    return 0;
}
