#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<string> words{"cc","acd","b","ba","bac","bad","ac","d"};
    string all = "cad";
    vector<char>allow;
    for(auto item:all)
        allow.push_back(item);
    int i, n = words.size(), j, c = 0, answer = 0;

    for(i = 0; i < n; i++){
        for(j = 0; j < words[i].size(); j++){
            auto it = find(allow.begin(), allow.end(), words[i][j]);
            if(it == allow.end())
            {
                c = 0;
                break;
            }
            else{
                c++;
            }
        }

        if(c != 0){
            answer++;
            c = 0;
        }
    }

    cout << answer << endl;

    return 0;
}
