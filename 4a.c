#include <stdio.h>

void merge(int A[], int p, int q, int r) 
{
    int i, j, k;
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], M[n2];

    for (i = 0; i < n1; i++) 
        L[i] = A[p + i];
    for (j = 0; j < n2; j++) 
        M[j] = A[q + 1 + j];

    i = 0;
    j = 0;
    k = p;

    while (i < n1 && j < n2)
    {
        if (L[i] <= M[j])
            A[k++] = L[i++];
        else
            A[k++] = M[j++];
    }

    while (i < n1)
        A[k++] = L[i++];
    while (j < n2)
        A[k++] = M[j++];
}

void mergeSort(int A[], int p, int r) {
    if (p >= r) 
        return;
    int q = (p + r) / 2;
    mergeSort(A, p, q);
    mergeSort(A, q + 1, r);
    merge(A, p, q, r);
}

void main() 
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int A[n];
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);

    mergeSort(A, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", A[i]);
    printf("\n");
}