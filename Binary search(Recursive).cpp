 #include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int target) {
    if (r >= l) {
        int mid =(l+r)/ 2;


        if (arr[mid] == target)
            return mid;

        // If the element is smaller than mid, then it can only be present in the left subarray
        if (arr[mid] > target)
            return binarySearch(arr, l, mid - 1, target);

        // Else the element can only be present in the right subarray
        return binarySearch(arr, mid + 1, r, target);
    }

    // If the element is not present in the array
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    int result = binarySearch(arr, 0, n - 1, target);
    if (result != -1)
         cout << "Element is present at index " << result <<  endl;
    else
         cout << "Element is not present in array" << endl;
    return 0;
}

