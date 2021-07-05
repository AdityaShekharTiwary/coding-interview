vector<pair<int, int>> twoSum(vector<int>& arr, int target, int N)
{
	vector<pair<int, int>> ans;

	bool visited[N];

	for (int i = 0; i < N; i++)
	{
		visited[i] = false;
	}

	for (int i = 0; i < N; i++)
	{
		if (visited[i] == true)
		{
			continue;
		}

		for (int j = i + 1; j < N; j++)
		{
			/* If arr[i] + arr[j] == target and index j is still unvisited,
			   we can include arr[i] and arr[j] in our answer */
			if (arr[i] + arr[j] == target && visited[j] == false)
			{
				// As index j is now included in the answer we set visited[j] to true
				visited[j] = true;

				ans.push_back({arr[i], arr[j]});
				break;
			}
		}
	}

	// If no valid pair exists
	if (ans.size() == 0)
	{
		ans.push_back({ -1, -1});
	}

	return ans;
}
