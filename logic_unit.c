#include<stdio.h>
int safe(int**inputArray,int row, int col, int n)
{
  int r, c, br, bc;
 
  if (inputArray[row][col] == n)
		return 1;
  if (inputArray[row][col] != 0) 
  		return 0;
  for (c = 0; c < 9; c++)
    if (inputArray[row][c] == n)
		return 0;
  for (r = 0; r < 9; r++)
    if (inputArray[r][col] == n)
		return 0;
  br = row / 3;
  bc = col / 3;
  for (r = br * 3; r < (br + 1) * 3; r++)
    for (c = bc * 3; c < (bc + 1) * 3; c++)
      if (inputArray[r][c] == n)
			return 0;
 
  return 1;
}
int Full(int **inputArray)
{
	for(int i=0;i<9;++i)
	{
		for(int j=0;j<9;++j)
		{
			if(inputArray[i][j]==0)
			{
				return(0);
			}
		}
	}
	return(1);
}
 int**parnianSolve(int** inputArray,int row, int col)
{ 

	//printf("%d %d\n",row,col);
	int n, temp;
	if (row == 9)
	{
	
		return (inputArray);
	}
  	
	for (n = 1; n <= 9; n++)
      if (safe(inputArray,row, col, n))
	  {
		temp = inputArray[row][col];
		inputArray[row][col] = n;
		if (col == 8)
	  		parnianSolve(inputArray,row + 1, 0);
		else
	 		parnianSolve(inputArray,row, col + 1);
	 	if(Full(inputArray)==1)
	 	{
	 		return(inputArray);
		 }
	 	
		inputArray[row][col] = temp;
      }
}


int** solve(int** inputArray,int n)
{
	//printf("injaaa");
	return(parnianSolve(inputArray,0,0));
}
  

 
