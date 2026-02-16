#include<stdio.h>
void main()
{
    int a[100], i, j, temp, n, min;
    printf("enter size of array: ");
    scanf("%d",&n);
     printf("enter %d elements in the array: ", n);
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0; i<n-1; i++) 
    {
        min = i;
        for (j=i+1 ; j<n ; j++) 
        {
            if (a[j]<a[min]) 
            {
                min = j;
            }
        }
        temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }
    printf("Sorted array: ");
    for (i=0 ; i<n ; i++) 
    {
        printf("%d ", a[i]);
    }
}

