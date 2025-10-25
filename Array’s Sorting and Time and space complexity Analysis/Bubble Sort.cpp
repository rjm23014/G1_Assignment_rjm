//Logic:
//Repeatedly compare adjacent elements and swap if out of order; largest values “bubble” to the end in each pass.

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break; // Opt: stops if array is already sorted
    }
}

/*
Time Complexity:

Worst-case:  O(n^2) (when array is reversely sorted)

Best-case:  O(n) (when already sorted, with swapped check)

Average-case:  O(n^2)

Space Complexity:

O(1) (In-place, no extra space required)
*/