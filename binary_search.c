#include <stdio.h>
void main()
{

    int a[50],limit,i,j,temp,check,right,left=0,middle,flag=0;
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
   printf("Enter the element to be searched:\n");
    scanf("%d",&check);

    right=limit-1;
    while(left<=right)
    {
        middle=(left+right)/2;
        if(check<a[middle])
        {
            right=middle-1;
        }
        else if (check>a[middle])
            left=middle+1;
        else
        {
            printf("The element is present\n");
            flag=1;
            break;
        }}
        if(flag==0)
            {
                printf("not present");
            }
        }
