#include <iostream>
#include <vector>
using namespace std;

vector<int> findOddDivisors(int n) {
    vector<int> oddDivisors;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && i % 2 != 0) { // Check if i is an odd divisor
            oddDivisors.push_back(i);
        }
    }
    return oddDivisors;
}

int main() {
    int n;
    cin >> n;

    
    
    return 0;
}
