#include<stdio.h>
void main() {
    int a[10],min,i,n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("input elements");
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);}
        min=a[0];
        for(i=0;i<n;i++) {
            if(a[i]<min)
            min=a[i];
        }
        printf("The minimum element in the array is: %d",min);
    getch();
}