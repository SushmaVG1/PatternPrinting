/*

    1
   212
  32123
 4321234
543212345

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
                printf("  ");
            else
                printf("%d ",n-j);
        }
        for(int j=1; j<n; j++)
        {
            if(i>=j)
                printf("%d ",j+1);
        }
        printf("\n");
    }
    return 0;
}



