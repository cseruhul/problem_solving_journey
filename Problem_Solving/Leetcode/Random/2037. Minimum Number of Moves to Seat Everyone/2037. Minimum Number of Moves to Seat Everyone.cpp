#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        int res = 0;
        for (int i = 0; i < seats.size(); i++) {
            res += abs(seats[i] - students[i]);
        }

        return res;
    }
};


int main(){
    vector<int>seats{3,1,5};
    vector<int>students{2,7,4};
    Solution soll;
    cout << soll.minMovesToSeat(seats,students);

    return 0;
}
