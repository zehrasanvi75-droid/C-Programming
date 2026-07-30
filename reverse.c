#include<stdio.h>
void main() {
    int a[10],i,n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("input elements");
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    printf("The elements in reverse order are: ");
   for(i=n-1;i>=0;i--){
        printf("%d \n",a[i]);
   }
getch();
}