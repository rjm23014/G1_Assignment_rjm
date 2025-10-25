
/*
Brute-force:
For each index, sum all elements up to that index.

Optimized:
Add cumulatively while iterating.
*/

vector<int> runningSum(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); ++i)
        arr[i] += arr[i - 1];
    return arr;
}
