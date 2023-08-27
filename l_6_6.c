#include<stdio.h>
#define max_size 100
int main()
{
    int arr[max_size],n,i;
    printf("Enter size of Array:");
    scanf("%d",&n);

    for(i=0 ; i<n; i++)
    {
        printf("Arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    printf("\n\n");
    printf("Negative value");
    for(i=0;  i<n; i++)
    {
        if(arr[i]<0)
        {
            printf("\nArr[%d]=%d",i,arr[i]);
        }
    }
}
