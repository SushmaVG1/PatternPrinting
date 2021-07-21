/*

     1
    1 2
   1 2 3
  1 2 3 4
 1 2 3 4 5

*/

#include <stdio.h>
int main()
{
    int n,cnt=1,num=1;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i<n-j)
                printf(" ");
        }
        for(int j=0; j<num; j++)
        {
            printf("%d ",cnt++);
        }
        printf("\n");
        num++;
        cnt=1;
    }
    return 0;
}

