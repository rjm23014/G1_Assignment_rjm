//Logic: Track both max product and min product at each step (because negative values can flip signs).


int maxProduct(vector<int>& nums) {
    int maxProd = nums[0], minProd = nums[0], res = nums[0];
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] < 0) swap(maxProd, minProd);
        maxProd = max(nums[i], maxProd * nums[i]);
        minProd = min(nums[i], minProd * nums[i]);
        res = max(res, maxProd);
    }
    return res;
}
