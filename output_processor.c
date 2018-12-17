#include<stdio.h>
#define size 9
void display_output(int** inputArray)
{
	 int i,j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d\t",inputArray[i][j]);
        }
        printf("\n\n");
    }
}
