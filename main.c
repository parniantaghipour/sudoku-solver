#include<stdio.h>
#include"input_processor.h"
#include"output_processor.h"
#include"logic_unit.h"
#include<stdlib.h>
void Free(int **inputArray){
	for(int i=0;i<9 ; i++)
		free(inputArray[i]);
	free(inputArray);	
}

int main()
{
	int** inputArray = get_input();
//	display_output(inputArray);
	display_output(solve(inputArray,0));
	Free(inputArray);
	return 0;
}
