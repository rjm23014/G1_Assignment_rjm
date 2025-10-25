//Logic:
//Pick each element and insert it into its correct position in the sorted part of the array (like sorting cards by hand).


void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i], j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

/*
Time Complexity:

Worst-case:  O(n^2) (when array is reversely sorted)

Best-case:  O(n) (when already sorted)

Average-case:  O(n^2)

Space Complexity:

O(1) (In-place, no extra space required)
*/  