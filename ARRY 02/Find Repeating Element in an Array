// Brute-force:
// Nested loops to check each pair.

Optimized(Floyd’s Cycle Detection or Hashmap) :

                                                int findDuplicate(vector<int> & nums)
{
    unordered_set<int> seen;
    for (int num : nums)
    {
        if (seen.count(num))
            return num;
        seen.insert(num);
    }
    return -1; // No duplicate found
}

// Time Complexity: O(n)

// Space Complexity: O(n)