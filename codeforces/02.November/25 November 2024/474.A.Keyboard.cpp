#include <bits/stdc++.h>
using namespace std;

int position(string keyboard, char msg, char ch)
{
    int n = keyboard.size(), i;

    for (i = 0; i < n; i++)
    {
        if (msg == keyboard[i])
        {
            break;
        }
    }

    if (ch == 'L')
    {
        return (i + 1);
    }
    else
    {
        return (i - 1);
    }
}

int main()
{
    string message, keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char ch;

    cin >> ch;
    cin >> message;
    // cout << message;

    int n = message.size();

    for (int i = 0; i < n; i++)
    {
        int index = position(keyboard, message[i], ch);
        cout << keyboard[index];
    }

    return 0;
}