#include<stdio.h>
int main()
{
    int a1[100],a2[100],i,n;
    printf("Enter size of Array:");
    scanf("%d",&n);
    printf("Enter Array elements:");

    for(i=0; i<n; i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("First array elements:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a1[i]);
    }
    printf("\ncoping array elements:\n");
    for(i=0;i<n;i++)
    {
        a2[i]=a1[i];
    }
    printf("second array elements: \n");
    for(i=0;i<n;i++)
    {
        printf("%d",a2[i]);
    }
}
