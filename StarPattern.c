/*

   *
  ***
 *****
*******
 *****
  ***
   *

*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i<n-j-1)
                printf(" ");
            else
                printf("*");
        }
        for(int j=1; j<n; j++)
        {
            if(i>=j)
                printf("*");
        }
        printf("\n");
    }
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i>j)
                printf(" ",j+1);
            else
                printf("*");
        }
        for(int j=1; j<n; j++)
        {
            if(i<n-j)
                printf("*");
        }
        printf("\n");
    }
    return 0;
}




