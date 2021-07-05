vector<vector<int>> pairSum(vector<int> &arr, int s) {
    int n = arr.size();
    vector<vector<int> > res;
    vector<int> t;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == s) {
                if (arr[i] > arr[j]) {
                    t.push_back(arr[j]);
                    t.push_back(arr[i]);
                }
                else {
                    t.push_back(arr[i]);
                    t.push_back(arr[j]);
                }
                res.push_back(t);
                t.clear();
            }
        }
    }
    sort(res.begin(), res.end());
    return res;
}