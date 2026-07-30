#include<stdio.h>
void main() {
    int a[2],b[2];
    printf("Enter the first number: ");
    scanf("%d",&a[0]);  
    printf("Enter the second number: ");
    scanf("%d",&a[1]);
    a[0]=a[0]+a[1];
    a[1]=a[0]-a[1];
    a[0]=a[0]-a[1];
    printf("array after swapping: %d %d",a[0],a[1]);
    getch();
}
// int a[2],b[2],temp;
// temp=a[0];
//     a[0]=a[1];
//     a[1]=temp;