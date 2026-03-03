class Solution
{
private:
  vector<int> memo; // 定义在类中，作为成员变量

  int dfs(int i)
  {
    // 递归边界
    if (i <= 1)
    {
      return 1;
    }
    // 查表：如果已经计算过，直接返回
    if (memo[i] != -1)
    {
      return memo[i];
    }
    // 记录结果
    memo[i] = dfs(i - 1) + dfs(i - 2);
    return memo[i];
  }

public:
  int climbStairs(int n)
  {
    // 初始化 memo 数组，大小为 n+1，填充 -1
    // 注意：如果 n 是 0，vector 大小为 1，逻辑依然成立
    memo.assign(n + 1, -1);
    return dfs(n);
  }
};
