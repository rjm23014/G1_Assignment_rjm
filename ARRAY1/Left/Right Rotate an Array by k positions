/*
Left Rotation by k
Optimized (Reverse Technique):

Reverse first k elements

Reverse remaining n-k elements

Reverse all n elements
*/

void leftRotate(vector<int> &arr, int k)
{
    k %= arr.size();
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());
}

/*
Right Rotation by k
Optimized (Reverse Technique):

Reverse last k elements

Reverse first n-k elements

Reverse all n elements
*/

void rightRotate(vector<int> &arr, int k)
{
    k %= arr.size();
    reverse(arr.end() - k, arr.end());
    reverse(arr.begin(), arr.end() - k);
    reverse(arr.begin(), arr.end());
}

// Time Complexity: O(n)

// Space Complexity: O(1)
