#include <bits/stdc++.h>
using namespace std;
int f[1000000000];

int fibo(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;

    int f1 = fibo(n - 1);
    int f2 = fibo(n - 2);
    

}

int main()
{
    int n, f0, f1, f;
    f0 = 0;
    f1 = 1;

    cin >> n;

    cout << fibo(n) << endl;

    return 0;
}