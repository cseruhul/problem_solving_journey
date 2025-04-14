#include<bits/stdc++.h>
using namespace std;

class UnionFind{
private:
    unordered_map<char, char>parent;
public:
    UnionFind(string str1, string str2, string str3){
        int n = str1.size(), i;
        for(i = 0; i < n; i++){
            parent[str1[i]] = str1[i];
            parent[str2[i]] = str2[i];
            parent[str3[i]] = str3[i];
        }
    }

public:
    char findRoot(char p){
        while(parent[p] != p){
            parent[p] = parent[parent[p]];
            p = parent[p];
        }
        return p;
    }

public:
    void Union(char p, char q){
        char i = findRoot(p);
        char j = findRoot(q);

        if(i != j){
            if(i > j){
                parent[i] = j;
            }else{
                parent[j] = i;
            }
        }
    }

};

class Solution {
public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        string answer;
        int n = s1.size(), i;

        UnionFind uf(s1, s2, baseStr);

        for(i = 0; i < n; i++){
            uf.Union(s1[i],s2[i]);
        }

        n = baseStr.size();

        for(i = 0; i < n; i++){
            answer += uf.findRoot(baseStr[i]);
        }

        return answer;
    }
};

int main(){
    string s1 = "leetcode", s2 = "programs", baseStr = "sourcecode", ans;
    Solution soln;

    ans = soln.smallestEquivalentString(s1, s2, baseStr);

    cout << ans << endl;
    return 0;
}
