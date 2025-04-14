#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string simplifyPath(string path) {
        path += '/';
        string ansString = "", tempString = "";
        int n = path.length();
        stack<string> directory_name;

        for (int i = 0; i < n; i++) {
            if (path[i] == '/') {
                if (tempString == "..") {
                    if (!directory_name.empty()) {
                        directory_name.pop();
                    }
                } else if (tempString != "" && tempString != ".") {
                    directory_name.push(tempString);
                }
                tempString = "";
            } else {
                tempString += path[i];
            }
        }
        // cout << directory_name.size() << endl;
        while (!directory_name.empty()) {
            ansString = "/" + directory_name.top() + ansString;
            directory_name.pop();
        }

        return (ansString.empty()) ? "/" : ansString;
    }
};

int main() {
    string path = "/home/user/Documents/../Pictures";
    // string path = "/home/";
    string ans;
    Solution obj;

    fstream input;
    input.open("input.txt");
    while (input.eof() == 0) {
        getline(input, path);
        ans = obj.simplifyPath(path);
        cout << ans << endl;
    }
    input.close();

    return 0;
}