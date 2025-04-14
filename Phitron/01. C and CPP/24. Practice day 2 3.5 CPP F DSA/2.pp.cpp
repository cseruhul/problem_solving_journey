#include <bits/stdc++.h>
using namespace std;

class Crickter
{
public:
    int jersey_no;
    string country;
};

int main()
{
    Crickter *dhoni = new Crickter;
    Crickter *kohli = new Crickter;
    cin >> dhoni->jersey_no >> dhoni->country;

    kohli->country = dhoni->country;
    kohli->jersey_no = dhoni->jersey_no;

    cout << dhoni->jersey_no << " " << dhoni->country << endl;
    delete dhoni;

    cout << kohli->jersey_no << " " << kohli->country;
    delete kohli;

    return 0;
}