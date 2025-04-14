#include <bits/stdc++.h>
using namespace std;
class UnionFind {
public:
    vector<int> parent;
    vector<int> score;

public:
    UnionFind(int n) {
        parent.resize(n);
        score.resize(n, 1);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }

public:
    void Union(int p, int q) {
        int i = findParent(p);
        int j = findParent(q);

        if (i != j) {
            if (score[i] < score[j]) {
                parent[i] = j;
            } else if (score[i] > score[j]) {
                parent[j] = i;
            } else {
                parent[i] = j;
                score[j]++;
            }
        }
    }

public:
    int findParent(int p) {
        while (parent[p] != p) {
            parent[p] = parent[parent[p]];
            p = parent[p];
        }

        return p;
    }
};

class Solution {
public:
    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();
        unordered_set<int> parent_set;

        UnionFind uf(n);

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (stones[i][0] == stones[j][0] ||
                    stones[i][1] == stones[j][1]) {
                    uf.Union(i, j);
                }
            }
        }

        for (int i = 0; i < n; i++) {
            parent_set.insert(uf.findParent(i));
        }

        return n - parent_set.size();
    }
};

int main() {
    // vector<vector<int>> stones = {{0,0},{0,1},{1,0},{1,2},{2,1},{2,2}};
    // vector<vector<int>> stones = {{0,0},{0,2},{1,1},{2,0},{2,2}};
    vector<vector<int>> stones = {{0, 0}};
    Solution obj;

    cout << "Number of stones to removed is: " << obj.removeStones(stones)
         << endl;
    return 0;
}
