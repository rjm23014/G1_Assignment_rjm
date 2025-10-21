//Logic:
//Repeatedly find the minimum element from unsorted part and swap it with the first unsorted element.


void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIdx = i;
        for (int j = i + 1; j < n; ++j)
            if (arr[j] < arr[minIdx])
                minIdx = j;
        swap(arr[i], arr[minIdx]);
    }
}

/*
Time Complexity:

All cases: 
O(n^2) (nested loops: selection not affected by order)

Space Complexity:

O(1) (In-place)
*/