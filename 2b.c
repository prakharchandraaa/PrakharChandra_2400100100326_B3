#include <stdio.h>
void main()
{
 int a[100],c[100],b,n,i,temp;
 printf("enter size of n: ");
 scanf("%d",&n);
 printf("enter values: ");
 for(i=0;i<n;i++)
 {
    scanf("%d",&a[i]);
 }
 printf("array elements:\n");
  for(i=0;i<n;i++)
 {
    printf("%d\t",a[i]);
 }
 printf("\nenter the position of element to delete:");
 scanf("%d",&b);
 for(i=0;i<b-1;i++)
 {
   c[i]=a[i];
 }
 for(i=b;i<n;i++)
 {
   c[i-1]=a[i];
 }
  for(i=0;i<n-1;i++)
 {
    printf("%d\t",c[i]);
 }
}