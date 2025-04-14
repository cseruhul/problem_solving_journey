#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    stack<char> s;
    bool flag = false;

    cin >> str;

    for (auto ch : str)
    {
        if (s.empty())
        {
            s.push(ch);
        }
        else
        {
            if ((ch == 'R' and s.top() == 'B') or (ch == 'B' and s.top() == 'R'))
            {
                s.pop();
            }
            else if ((ch == 'Y' and s.top() == 'B') or (ch == 'B' and s.top() == 'Y'))
            {
                s.pop();
                s.push('G');
            }
            else if ((ch == 'R' and s.top() == 'Y') or (ch == 'Y' and s.top() == 'R'))
            {
                s.pop();
            }
            else if ((ch == 'G' and s.top() == 'R') or (ch == 'R' and s.top() == 'G'))
            {
                flag = true;
                break;
            }
            else
            {
                s.push(ch);
            }
        }
    }

    if (flag)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}