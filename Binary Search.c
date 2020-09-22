#include<stdio.h>

int main()
{
    int arr[50],i,a,b,flag=0,first,last,mid;

    printf("Enter size of array: \n");

    scanf("%d",&a);

    printf("Enter array element : \n");

    for(i=0;i<a;++i)

    scanf("%d",&arr[i]);

    printf("Enter the element to search:");
    scanf("%d",&b);

    first=0;
    last=a-1;

    while(first<=last)
    {
        mid=(first+last)/2;

        if(b==arr[mid]){
            flag=1;
            break;
        }
        else
            if(b>arr[mid])
                first=mid+1;
            else
                last=mid-1;
    }

    if(flag==1)
        printf("Element found at position %d",mid+1);
    else
        printf("Element not found");

    return 0;
}
