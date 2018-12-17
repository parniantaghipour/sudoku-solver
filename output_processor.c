#include<stdio.h>
#define size 9
void display_output(int** inputArray)
{
	int i,j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d ",inputArray[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void file_output(int** inputArray,const char* file_name)
{
	FILE *fp;
	fp=fp = fopen(file_name, "a");
	int i,j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            fprintf(fp,"%d ",inputArray[i][j]);
        }
        fprintf(fp,"\n");
    }
	fprintf(fp,"\n");
	fclose(fp);
}
