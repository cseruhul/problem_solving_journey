#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int R, C;
    int parent[250005];
    int group_size[250005];

    vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    unordered_set<int> boundary_connect;

    int position(int r, int c) { return r * C + c; }

    void dsu_init()
    {
        int n = R * C;

        for (int i = 0; i < n; i++)
        {
            parent[i] = i;
            group_size[i] = 1;
        }
    }

    bool is_valid(int r, int c)
    {
        if (r < 0 or r >= R or c < 0 or c >= C)
            return false;
        return true;
    }

    bool is_boundary(int r, int c)
    {
        if (r == 0 or r == R - 1 or c == 0 or c == C - 1)
        {
            return true;
        }

        return false;
    }

    int dsu_find(int node)
    {
        if (parent[node] == node)
            return node;

        int leader = dsu_find(parent[node]);
        parent[node] = leader;

        return leader;
    }

    void dsu_union(int node1, int node2)
    {
        int leader1 = dsu_find(node1);
        int leader2 = dsu_find(node2);

        if (leader1 != leader2)
        {
            if (group_size[leader1] >= group_size[leader2])
            {
                parent[leader2] = leader1;
                group_size[leader1] += group_size[leader2];
            }
            else
            {
                parent[leader1] = leader2;
                group_size[leader2] += group_size[leader1];
            }
        }
    }

    int numEnclaves(vector<vector<int>> &grid)
    {
        int enclaves = 0;
        R = grid.size();
        C = grid[0].size();

        dsu_init();

        /*-----(DSU OPERATION)------*/
        for (int i = 0; i < R; i++)
        {
            for (int j = 0; j < C; j++)
            {
                for (auto dir : d)
                {
                    int r = i + dir.first;
                    int c = j + dir.second;

                    if (grid[i][j] == 1 and is_valid(r, c) and
                        grid[r][c] == 1)
                    {
                        dsu_union(position(i, j), position(r, c));
                    }
                }
            }
        }

        /*----(Boundary Select)----*/
        for (int i = 0; i < R; i++)
        {
            for (int j = 0; j < C; j++)
            {
                if (grid[i][j] == 1 and is_boundary(i, j))
                {
                    boundary_connect.insert(dsu_find(position(i, j)));
                }
            }
        }

        /*----(Enclave Count)---*/
        for (int i = 0; i < R; i++)
        {
            for (int j = 0; j < C; j++)
            {
                if (grid[i][j] == 1 and
                    boundary_connect.find(dsu_find(position(i, j))) ==
                        boundary_connect.end())
                {
                    enclaves++;
                }
            }
        }

        // int n = position(R, C);

        // for (int item : boundary_connect)
        //     cout << item << " ";

        return enclaves;
    }
};
int main()
{
    vector<vector<int>> grid = {
        {0, 0, 0, 0},
        {1, 0, 1, 0},
        {0, 1, 1, 0},
        {0, 0, 0, 0},
    };

    Solution obj;

    cout << obj.numEnclaves(grid);

    return 0;
}