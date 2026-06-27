#include <stdio.h>





void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {

    int p1 = m - 1;

    int p2 = n - 1;

    int p = m + n - 1;

    

   
    while (p1 >= 0 && p2 >= 0) {

        if (nums1[p1] > nums2[p2]) {

            nums1[p] = nums1[p1];

            p1--;

        } else {

            nums1[p] = nums2[p2];

            p2--;

        }

        p--;

    }

    


    while (p2 >= 0) {

        nums1[p] = nums2[p2];

        p2--;

        p--;

    }

}





void printArray(int* arr, int size) {

    printf("[");

    for (int i = 0; i < size; i++) {

        printf("%d", arr[i]);

        if (i < size - 1) {

            printf(", ");

        }

    }

    printf("]\n");

}



int main() {

    

    int nums1[6] = {1, 2, 3, 0, 0, 0};

    int m = 3;

    int nums2[3] = {2, 5, 6};

    int n = 3;

    

    printf("Before merge:\n");

    printf("nums1: ");

    printArray(nums1, m + n);

    printf("nums2: ");

    printArray(nums2, n);

    

    

    merge(nums1, m + n, m, nums2, n, n);

    

    printf("\nAfter merge:\n");

    printf("nums1: ");

    printArray(nums1, m + n);

    

    return 0;

}