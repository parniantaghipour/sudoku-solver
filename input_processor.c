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
	char file_name[25];
	int ch;
	FILE *fp;
	fp = fopen(filename, "r");
	int **arr = (int **)malloc(r * sizeof(int *)); 
	for (i=0; i<r; i++) 
        arr[i] = (int *)malloc(c * sizeof(int));

	i = 0;j = 0;
	do{
		fscanf(fp ,"%d " ,&ch);
		arr[i][j] = ch;
		j++;
		if (j == 9)
			i++;
		j %= 9;
		i %= 9;
		
	}while(!feof(fp));
	
    fclose(fp);
    return (arr);
}
