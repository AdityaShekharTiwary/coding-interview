bool canPartition(vector<int> &arr, int n)
{
    int sum = 0;
    for (int x : arr) sum += x;
    if (sum % 2 != 0) return false;
    sum /= 2;
    vector<bool> dp(sum + 1, false);
    dp[0] = true;
    for (int i : arr) {
        for (int j = sum; j >= i; j--) {
            if (dp[j - i]) dp[j] = true;
        }
    }
    return dp[sum];
}
