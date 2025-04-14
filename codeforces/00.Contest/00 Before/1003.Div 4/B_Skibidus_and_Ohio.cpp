#include <bits/stdc++.h>
using namespace std;


// [[1,1,0,0,0],
//  [1,1,0,0,0],
//  [0,0,0,1,1],
//  [0,0,0,1,1]]



int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;

        for (char c : s)
        {
            if (!st.empty() && st.top() == c)
            {
                st.pop();
                if (st.empty())
                {
                    st.push(c);
                }
            }
            else
            {
                st.push(c);
            }
        }

        cout << st.size() << endl;
    }

    return 0;
}
