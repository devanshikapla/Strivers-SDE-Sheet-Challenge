long solve(int ind, int *denominations, int amt, vector<vector<long>> &dp) {
  if (ind == 0 or amt == 0)
    return amt % denominations[0] == 0;

  if (dp[ind][amt] != -1)
    return dp[ind][amt];

  long notTake = solve(ind - 1, denominations, amt, dp);
  long take = 0;
  if (denominations[ind] <= amt)
    take = solve(ind, denominations, amt - denominations[ind], dp);

  return dp[ind][amt] = take + notTake;
}

long countWaysToMakeChange(int *denominations, int n, int value) {
  vector<vector<long>> dp(n, vector<long>(value + 1, -1));
  long val = solve(n - 1, denominations, value, dp);
  return val == 1e9 ? 0 : val;
} 
