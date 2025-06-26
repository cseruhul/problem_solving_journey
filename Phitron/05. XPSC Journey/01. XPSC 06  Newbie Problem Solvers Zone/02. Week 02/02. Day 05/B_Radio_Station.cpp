#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, m;
        cin >> n >> m;

        unordered_map<string, string> config_file;
        string server_name, ip_address;

        for (int i = 0; i < n; i++)
        {
            cin >> server_name >> ip_address;
            config_file[ip_address] = server_name;
        }

        for (int i = 0; i < m; i++)
        {
            cin >> server_name >> ip_address;

            cout << server_name << " " << ip_address << " #";

            ip_address.pop_back();
            cout << config_file[ip_address] << endl;
        }
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Ruhul_Amin ruhul;

    ruhul.solve();

    return 0;
}