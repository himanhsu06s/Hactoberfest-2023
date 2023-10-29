#include <iostream>
#include <vector>

// Binary search function
int binarySearch(std::vector<int> &arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Element found at index mid
        } else if (arr[mid] < target) {
            left = mid + 1; // Continue searching in the right half
        } else {
            right = mid - 1; // Continue searching in the left half
        }
    }

    return -1; // Element not found
}

// Example usage
int main() {
    std::vector<int> array = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19}; // Example array

    int target = 11; // Element to search for
    int result = binarySearch(array, target);

    if (result != -1) {
        std::cout << "Element found at index: " << result << std::endl;
    } else {
        std::cout << "Element not found in the array." << std::endl;
    }

    return 0;
}
