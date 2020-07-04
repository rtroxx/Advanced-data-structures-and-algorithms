//Leetcode problem no:909
   class Solution {
public:
    vector<int>calc(int nxt, int n)
    {
        int x = (nxt - 1) / n;
        int y = (nxt - 1) % n;
        if(x % 2 == 1) {
            y = n - 1 - y;
        }
        x = n - 1 - x;
        return {x,y};
    }
    int snakesAndLadders(vector<vector<int>>& board) {
        int n = board.size(); 
        unordered_map<int,int>step;
        step[1] = 0;
        queue<int>que;
        que.push(1); 
        while(!que.empty()) 
        {
            int cur = que.front();
            que.pop();
            if(cur == n * n) return step[cur];
            for(int i = 1; i <= 6; i++) 
            {
                int nxt = cur + i;
                if(nxt > n * n) break;
                auto v = calc(nxt, n);
                int nx = v[0], ny = v[1];
                if(board[nx][ny] != -1) {
                    nxt = board[nx][ny];
                }
                if(!step.count(nxt)) {
                    step[nxt] = step[cur] + 1;
                    que.push(nxt);
                }
            }
        }
        return -1;
    }
};
