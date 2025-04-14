#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
    {
        string str1, str2;
        int i, flag = 1;
        for (auto item : word1)
            str1 += item;
        for (auto item : word2)
            str2 += item;
        if (str1.length() == str2.length())
        {
            for (i = 0; i < str1.length(); i++)
            {
                if (str1[i] != str2[i])
                {
                    flag = 0;
                    break;
                }
            }
            return flag == true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    vector<string> word1 = {"abc", "d", "defg"};
    vector<string> word2 = {"abcddefg"};
    Solution soln;

    cout << soln.arrayStringsAreEqual(word1, word2);
    return 0;
}
