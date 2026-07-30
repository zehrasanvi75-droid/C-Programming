#include<stdio.h>
void main() {
    int arr[100],n,i,max1,max2;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    printf("input elements in an array:");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    if(arr[0]>arr[1]){
        max1=arr[0];
        max2=arr[1];    
    }
    else {
        max1=arr[1];
        max2=arr[0];
    }
    for(i=2;i<n;i++) {
        if(arr[i]>max1)
        {
          max2=max1;
          max1= arr[i];
        }
        else if(arr[i]>max2) {
            max2=arr[i];
        }
    }
    printf("Largest element is: %d\n", max1);
    printf("Second largest element is: %d\n", max2);
    getch();
}
