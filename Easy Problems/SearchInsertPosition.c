#include<stdio.h>
int searchInsert(int* nums, int numsSize, int target) {
    int low = 0;
    int high = numsSize - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (nums[mid] == target) {
            return mid;
        }
        else if (nums[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return low;
}
void main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array in sorted order : ");
    for(int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int target;
    printf("Enter the target value : ");
    scanf("%d",&target);
    int result = searchInsert(a,n,target);
    printf("%d\n",result);

}