//Logic: Candidate voting—cancel out all elements that are not the majority.

int majorityElement(vector<int>& nums) {
    int candidate = nums[0], count = 1;
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] == candidate) ++count;
        else if (--count == 0) {
            candidate = nums[i];
            count = 1;
        }
    }
    // (Optional) Verify whether candidate is really majority here
    return candidate;
}

/*
Time Complexity: O(n)
Space Complexity: O(1)
*/