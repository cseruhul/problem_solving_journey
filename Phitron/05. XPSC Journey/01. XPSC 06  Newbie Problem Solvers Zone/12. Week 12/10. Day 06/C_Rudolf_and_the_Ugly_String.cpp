#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e9 + 7;

class Ruhul_Amin
{
public:
    int n;
    string str;
    
    void string_matching(string temp)
    {
        int cnt = 0;
        int t_size = temp.size();
        if (t_size == 5)
        {
            for (int i = t_size - 1; i < n; i++)
            {
                if (str[i - 4] == temp[0] && str[i - 3] == temp[1] && str[i - 2] == temp[2] && str[i - 1] == temp[3] && str[i - 0] == temp[4])
                {
                    str[i - t_size / 2] = '?';
                }
            }
        }
        else if (t_size == 3)
        {
            for (int i = t_size - 1; i < n; i++)
            {
                if (str[i - 2] == temp[0] && str[i - 1] == temp[1] && str[i - 0] == temp[2])
                {
                    str[i - t_size / 2] = '?';
                }
            }
        }
    }
    void solve()
    {

        cin >> n;
        cin >> str;

        string_matching("mapie");
        string_matching("map");
        string_matching("pie");

        int ans = 0;

        for (auto ch : str)
        {
            if (ch == '?')
                ans++;
        }
        
        cout << ans << endl;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Ruhul_Amin ruhul;
    int t;
    cin >> t;

    while (t--)
        ruhul.solve();

    return 0;
}