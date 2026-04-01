#include <iostream>

// Function to find first occurrence
int firstOccurrence(int arr[], int n, int target, int i) {
    
    if (i == n) {
        return -1; 
    }

   
    if (arr[i] == target) {
        return i;
    }

   
    return firstOccurrence(arr, n, target, i + 1);
}

int main() {
    int arr[] = {2, 4, 6, 8, 4, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 4;

    int result = firstOccurrence(arr, n, target, 0);

    if (result != -1)
        std::cout << "Target found at index: " << result << std::endl;
    else
        std::cout << "Target not found." << std::endl;

    return 0;
}
