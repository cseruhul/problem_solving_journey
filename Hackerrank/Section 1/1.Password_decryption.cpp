#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'decryptPassword' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string decryptPassword(string s)
{
    int i;
    string ans = "Ruhul";
    i = s.length() - 1;
    int j = 0;
    stack<char> st;
    cout << i << endl;
    for (i; i > 0;)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') && (s[i - 1] >= 'A' && s[i - 1] <= 'Z'))
        {
            st.push(s[i]);
            st.push(s[i - 1]);
            i -= 2;
        }
        else if (s[i] == '0')
        {
            st.push(s[j++]);
            i--;
        }
        else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            st.push(s[i]);
            i--;
        }
    }

    // string ans;
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    cout << ans;
    return ans;
}

int main()
{
    string input;
    cin >> input;

    cout << decryptPassword(input);

    return 0;
}
