    #include <bits/stdc++.h>
    using namespace std;

    bool can_reach(long long n, long long val)
    {
        if (n == val)
            return true;

        if (n > val)
            return false;

        return can_reach(n * 10, val) || can_reach(n * 20, val);
    }

    int main()
    {
        int t;
        cin >> t;

        while (t--)
        {
            bool ans;
            long long num;
            cin >> num;

            ans = can_reach(1, num);

            if (ans)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }

        return 0;
    }