/*

1
2 3
4 5 6
7 8 9 10

*/

#include <stdio.h>
int main()
{
    int n,cnt=1;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("%d ",cnt++);
        }
        printf("\n");
    }
    return 0;
}



