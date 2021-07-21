/*

*****
*   *
*   *
*   *
*****

*/


#include <stdio.h>
int main()
{
    int r,c;
    printf("Enter no of rows and columns : ");
    scanf("%d%d",&r,&c);
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(i==0 || i==r-1)
                printf("*");
            else
            {
                if(j==0 || j==c-1)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
