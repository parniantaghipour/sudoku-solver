#include <stdio.h>
#include<stdlib.h>
#include<string.h>
 int** get_input()
{
	int i,j;
	int r=9,c=9;
	int **arr = (int **)malloc(r * sizeof(int *)); 
	for (i=0; i<r; i++) 
        arr[i] = (int *)malloc(c * sizeof(int));
	for (i = 0; i < r; i++) 
    	for (j = 0; j < c; j++)
    		scanf("%d",&arr[i][j]);
    return (arr);
}
int** get_input_from_file(const char *filename)
{
	int i,j;
	int r=9,c=9;
	char ch, file_name[25];
	FILE *fp;
	fp = fopen(file_name, "r");
	int **arr = (int **)malloc(r * sizeof(int *)); 
	for (i=0; i<r; i++) 
        arr[i] = (int *)malloc(c * sizeof(int));
    while((ch = fgetc(fp)) != EOF)
    {
		for (i = 0; i <  r; i++) 
    		for (j = 0; j < c; j++)
    			arr[i][j]='ch'-48;	
	}
	
    fclose(fp);
    return (arr);
}*/
