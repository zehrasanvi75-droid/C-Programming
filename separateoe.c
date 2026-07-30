#include<stdio.h>
void main() {
    int a[10],b[10],c[10],i,n,j=0,k=0;
printf("enter the number of elements");
scanf("%d",&n);
printf("input elements:");
for(i=0;i<n;i++) {
    scanf("%d",&a[i]); }
    for(i=0;i<n;i++) {
if(a[i]%2==0)
{
    b[j]=a[i];
    j++;
}
else {
    c[k]=a[i];
     k++;
}
    }
    printf("even elements are:");
    for(i=0;i<j;i++) {
        printf("%d \n",b[i]);
    }
    printf("odd elements are:");
    for(i=0;i<k;i++) {
        printf("%d \n",c[i]);}
        getch();
}