// Logic:
// Check each character. If it’s an English letter and is a vowel, increment vowel count; otherwise, if letter, increment consonant.

pair<int, int> countVowelConsonant(const string &s) {
    int vowels = 0, consonants = 0;
    for (char ch : s) {
        if (isalpha(ch)) {
            char c = tolower(ch);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    return {vowels, consonants};
}


// Time Complexity: O(n)

// Space Complexity: O(1)
