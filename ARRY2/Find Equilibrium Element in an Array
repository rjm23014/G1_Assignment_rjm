// Leetcode: 724. Find Pivot Index

int equilibriumIndex(vector<int> &arr)
{
    int total = accumulate(arr.begin(), arr.end(), 0);
    int leftSum = 0;
    for (int i = 0; i < arr.size(); ++i)
    {
        total -= arr[i]; // Now total is right sum
        if (leftSum == total)
            return i;
        leftSum += arr[i];
    }
    return -1; // No equilibrium index found
}
