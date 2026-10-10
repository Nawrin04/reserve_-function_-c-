#include <iostream>
using namespace std;

void reserve(int arr[], int n) {     //FUNCTION
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    reserve(arr, 5);             // Function call

    return 0;
}
