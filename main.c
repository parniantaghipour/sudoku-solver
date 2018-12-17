#include<stdio.h>
#include"input_processor.h"
#include"output_processor.h"
#include"logic_unit.h"
#include<stdlib.h>
void Free(int **inputArray){
	int i;
	for( i=0;i<9 ; i++)
		free(inputArray[i]);
	free(inputArray);	
}

int main()
{
//	char file_name[25];
//	scanf("%s",file_name);
//	int** inputArray =get_input_from_file(file_name);
	int** inputArray = get_input();
	display_output(inputArray);
	display_output(solve(inputArray,0));
//	file_output(inputArray,file_name);
//	file_output(solve(inputArray,0),file_name);
	Free(inputArray);
	return 0;
}
