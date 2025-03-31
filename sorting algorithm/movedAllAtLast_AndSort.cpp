// Given an integer arrary,move ll 0's o the end of it while maintaining the relative order of the non-zero element.
//Note that you must do this in-place without making a copy of the array.

// input:
// 0 5 0 3 42

// output:
// 5 3 42 0 0

//---------------------------------------------------------------------------------------------------

//Method-1 (using bubblesort) ( not satisfy condition)

// #include <iostream>
// using namespace std;

// // Custom Bubble Sort to move zeros to the end
// void BubbleSortCustom(int arr[], int size) {
//     for (int i = 0; i < size - 1; i++) {
//         for (int j = 0; j < size - i - 1; j++) {
//             // Swap if the current element is greater than the next element
//             // OR if the next element is zero and the current is non-zero
//             if ((arr[j] > arr[j + 1] && arr[j + 1] != 0) || 
//                 (arr[j] != 0 && arr[j + 1] == 0)) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }


//-------------------------------------------------------------------------------------------------------------

// Method-2 (bubblesort->reverse->again sort) (more time complexity) ( not satisfy condition)


// #include <iostream>
// using namespace std;

// // Function to perform Bubble Sort
// void BubbleSort(int arr[], int size) {
//     for (int i = 0; i < size - 1; i++) {
//         for (int j = 0; j < size - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// // Function to reverse the array
// void ReverseArray(int arr[], int size) {
//     int start = 0, end = size - 1;
//     while (start < end) {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }

// int main() {
//     int size;
//     cin >> size;

//     int arr[size];
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     // Step 1: Fully sort the array
//     BubbleSort(arr, size);

//     // Step 2: Reverse the array
//     ReverseArray(arr, size);

//     // Step 3: Count non-zero elements and sort them again
//     int nonZeroCount = 0;
//     for (int i = 0; i < size; i++) {
//         if (arr[i] != 0) {
//             nonZeroCount++;
//         } else {
//             break;
//         }
//     }

//     // Step 4: Sort only the non-zero part using BubbleSort
//     BubbleSort(arr, nonZeroCount);

//     // Print the final array
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

//----------------------------------------------------------------------------------------------------------

//(Method-3) 5//

#include <stdio.h>

void moveZeroes(int arr[], int size) {
    int nonZeroIndex = 0; // Index to place the next non-zero element

    // Traverse the array
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            // Swap the current element with the element at nonZeroIndex
            int temp = arr[i];
            arr[i] = arr[nonZeroIndex];
            arr[nonZeroIndex] = temp;
            nonZeroIndex++;
        }
    }
}

int main() {
    int arr[] = {0, 5, 0, 3, 42};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Input: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    moveZeroes(arr, size);

    printf("\nOutput: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

