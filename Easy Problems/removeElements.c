#include<stdio.h>

int removeElement(int *a, int n, int value)
{
    if(n==0)
    {
        return 0;
    }
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=value)
        {
            a[k] = a[i];
            k++;
        }
    }
    return k;
}

void main()
{
    printf("Enter the number of elements : ");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements of the array are : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    int value;
    printf("Enter the value : ");
    scanf("%d",&value);
    int val = removeElement(a,n,value);
    printf("%d\n",val);
    printf("The elements after removing element are : ");
    for(int i=0;i<val;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

}