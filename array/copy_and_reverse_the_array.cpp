vector<int> copyAndReverse(vector<int> arr, int n) {
    vector<int> res;
    for (int i = n - 1; i >= 0; i--) res.push_back(arr[i]);
    return res;
}