#include <stdio.h>
int main()
{
    int n[100],i,Number,a;

    printf("Enter number of elements of an array in 100 number :\n");

    scanf("%d",&a);

    printf("Enter the Numbers : \n");
    {

    for (i=0; i<a; i++)

    scanf("%d", &n[i]);
    }

    printf("Enter Number to search it,s position : ");

    scanf("%d", &Number);

    for (i=0; i<=9; i++)
    {


    if (Number == n[i])
    {
      printf("\nNumber found at location %d", i+1);
        break;
    }

    if (i > 9)

    printf("\nNumber does not exist.");

    }

    return 0;
}
