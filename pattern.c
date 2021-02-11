#include<stdio.h>
#include<conio.h>
int main()
{
 int i,j;
    for(i=1; i<=6; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(j%2==1)
            {
                printf("0");
                printf("1");
            }
            else
			{
                printf("0");
                printf("1");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
