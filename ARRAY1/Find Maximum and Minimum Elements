// Brute-force/Optimized:

pair<int, int> findMaxMin(vector<int> &arr)
{
    int maxVal = arr[0], minVal = arr[0];
    for (int i = 1; i < arr.size(); ++i)
    {
        maxVal = max(maxVal, arr[i]);
        minVal = min(minVal, arr[i]);
    }
    return {maxVal, minVal};
}

// Time Complexity: O(n)

// Space Complexity: O(1)