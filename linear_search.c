#include<stdio.h>
void main() {
    int a[10],i,n,f=0,item;
    printf("enter number of elements:\n");
    scanf("%d", &n);

    printf("enter elements in an array:\n");
    for(i=0;i<n;i++)
    scanf("%d", &a[i]);

    printf("Array is:");
    for(i=0;i<n;i++)
    printf("\n %d", a[i]);
 
    printf("\nenter item to be searched:\n");
    scanf("%d", &item);
    for(i=0;i<n;i++)
    {
        if(a[i] == item)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    printf("element found at %d",i+1);
    else 
    printf("not found");

    getch();
}