// INSERTION SORT
#include <stdio.h>

void insertionSort(int arr[], int n) {
    for (int i = 1 ; i < n; i++) {
        int currData = arr[i], j = i - 1;
        // 4 10 7 1 2
        // 4  7 10 1 2
        // 1 4 7 10 2 mau tarok 2
        // 1 2 4 7 10
        while (j >= 0 && currData < arr[j]) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = currData;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    insertionSort(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
