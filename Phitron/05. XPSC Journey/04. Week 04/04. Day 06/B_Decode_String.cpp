#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n;
        string str, ans = "";
        cin >> n >> str;
        unordered_map<int, char> char_map;
        deque<char> dq;
        char ch = 'a';
        for(int i = 1; i <= 26; i++, ch++){
            char_map[i] = ch;
        }

        for(int i = n - 1; i >= 0;){
           if(str[i] != '0'){
                ans = char_map[str[i] - '0'] + ans;
                i--;
           }else if(str[i] == '0'){
                int number;
                number = str[--i] - '0';
                number += 10 * (str[--i] - '0');
                --i;
                ans = char_map[number] + ans;
           }
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