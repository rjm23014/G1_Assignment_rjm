// Approach:
// Use a hashmap to count occurrences. Find the max frequency and count elements matching it.

int countMaxFrequency(vector<int>& arr) {
    unordered_map<int, int> freq;
    int maxFreq = 0;
    for (int num : arr) {
        freq[num]++;
        maxFreq = max(maxFreq, freq[num]);
    }
    int count = 0;
    for (auto& entry : freq) {
        if (entry.second == maxFreq) count++;
    }
    return count*maxFreq;
}
