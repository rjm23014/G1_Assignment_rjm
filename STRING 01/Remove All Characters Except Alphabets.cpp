// Logic:
// Iterate and only keep alphabetic characters.

string removeNonAlpha(const string &s) {
    string result;
    for (char ch : s) {
        if (isalpha(ch))
            result += ch;
    }
    return result;
}


// Time Complexity: O(n)

// Space Complexity: O(n) — new string output
