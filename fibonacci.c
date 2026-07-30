#include<stdio.h>
int main() {
    int n=5,a=0,b=1,c,i;
    // printf("enter the number of terms:");
    // scanf("%d",&n);
    printf("Fibonacci Series: ");
    for(i=0;i<n;i++)
    {
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
    } 
   getch();
}
