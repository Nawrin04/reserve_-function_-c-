#include <bits/stdc++.h>
using namespace std;

void reserve(int arr[], int n) {
    sort(arr, arr + n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int findSecondLargest(int arr[], int n) {
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    int arr[] = {45, 12, 78, 34, 78, 90, 23};
    int n = sizeof(arr) / sizeof(arr[0]);

    reserve(arr, n);

    int ans = findSecondLargest(arr, n);

    cout << "Second largest distinct element: " << ans << endl;

    return 0;
}
