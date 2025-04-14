#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int countStudents(vector<int> &students, vector<int> &sandwiches) {
        queue<int> studentqueue;
        stack<int> sandwichestack;
        int n = students.size();
        for (int i = 0; i < n; i++) {
            studentqueue.push(students[i]);
            sandwichestack.push(sandwiches[n - 1 - i]);
        }

        // while (!studentqueue.empty()) {
        //     cout << studentqueue.front() << " ";
        //     studentqueue.pop();
        // }
        // cout << endl;
        // while (!sandwichestack.empty()) {
        //     cout << sandwichestack.top() << " ";
        //     sandwichestack.pop();
        // }

        int last_taken_sand = 0;
        while (!studentqueue.empty()) {
            if (studentqueue.front() == sandwichestack.top()) {
                studentqueue.pop();
                sandwichestack.pop();
                last_taken_sand = 0;
            } else {
                studentqueue.push(studentqueue.front());
                studentqueue.pop();
                last_taken_sand++;
                if (last_taken_sand == studentqueue.size()) break;
            }
        }
        return studentqueue.size();
    }
};
int main() {
    vector<int> student{1, 1, 1, 0, 0, 1};
    vector<int> sandwich{1, 0, 0, 0, 1, 1};
    Solution obj;
    cout << obj.countStudents(student, sandwich) << endl;
    return 0;
}