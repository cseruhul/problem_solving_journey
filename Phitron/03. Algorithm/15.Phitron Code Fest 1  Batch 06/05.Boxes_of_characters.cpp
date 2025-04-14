#include <bits/stdc++.h>
using namespace std;

int main()
{
    string given_str;
    int T, consonant, vowel, number;

    cin >> T;

    while (T--)
    {
        cin >> given_str;
        consonant = 0;
        vowel = 0;
        number = 0;

        for (auto ch : given_str)
        {
            if (ch >= '0' and ch <= '9')
                number++;
            else if (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u')
                vowel++;
            else
                consonant++;
        }
        vowel = vowel / 2 + vowel % 2;

        int consonant_calc = consonant / 3;
        consonant = consonant % 3;
        if (consonant)
            consonant_calc++;
        consonant = consonant_calc;

        int max_num = max({number, vowel, consonant});
        cout << max_num;

        cout << "\n";
    }

    return 0;
}