#include<stdio.h>
void main() {
    int arr[100],n,left,right , target;
    left = 0;
    printf("enter the value of n");
    scanf("%d",&n);
      right = n-1;
    printf("enter the target value");
    scanf("%d",&target);
    printf("input values of the array");
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    while(left<right) {
        int current_sum = arr[left]+arr[right];
        if( current_sum == target) {
            printf("pair found at index %d and %d", left, right);
            break;
        }
        else if(current_sum<target) {
               left++;
        }
        else{
            right--;
        }

    } getch();
}