#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m, a, b, cost, res;
  cin >> n >> m >> a >> b;

  cost = min(n / m * b, n * a);
  res = n % m * a;

  res = min(res, b);
  cost += res;
  cout << cost << endl;

  return 0;
}