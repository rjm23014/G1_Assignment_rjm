// BRUTE FORCE

vector<int> reverseArray(vector<int> &arr)
{
    vector<int> temp(arr.size());
    for (int i = 0; i < arr.size(); ++i)
        temp[i] = arr[arr.size() - 1 - i];
    return temp;
}

// Optimized (in-place, two-pointer):

void reverseArray(vector<int> &arr)
{
    int left = 0, right = arr.size() - 1;
    while (left < right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}
