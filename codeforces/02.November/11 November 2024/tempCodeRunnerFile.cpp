long long sq = sqrt(x);

            if (sq * sq == x && isPrime[sq] == 0)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }