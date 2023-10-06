#include<stdio.h>
int main(){
int a[50],limit,i,j,temp;
    printf("Enter the limit:\n");
    scanf("%d",&limit);
    printf("Enter the elements:\n");
    for(i=0;i<limit;i++)
      scanf("%d",&a[i]);
    printf("The elements are:\n");
    for(i=0;i<limit;i++)
       printf("%d\t\n",a[i]);
    for(i=0;i<limit-1;i++)
    {
        for(j=0;j<limit-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The sorted array is :\n");
    for(i=0;i<limit;i++)
    printf("%d\t\n",a[i]);

}
