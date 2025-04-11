#include <stdio.h>
void rotateArray(int arr[], int n, int d) {
    int temp[d]; // Temporary array to hold the rotated elements

    // Handle the case when d > n (since rotating by n is same as rotating by 0)
    d = d % n;

    // Copy the first d elements to the temporary array
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }

    // Shift the rest of the elements in the array to the right
    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }

    // Copy the elements from the temporary array to the end of the original array
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
}

int main() {
    int n, d;

    // Read the number of elements in the array
    scanf("%d", &n);
    int arr[n];

    // Read the elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the number of spaces by which to shift the elements
    scanf("%d", &d);

    // Rotate the array
    rotateArray(arr, n, d+1);

    // Output the rotated array
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
