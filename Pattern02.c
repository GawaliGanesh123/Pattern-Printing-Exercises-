/*
Accept the number of Rows and Columns from the user and print below pattern

*   * 	*   *
*   *   *   *
*   *   *   *
*   *   *   *

*/


#include<stdio.h>


void Display(int iRow, int iColumn)
{
	int i=0, j=0;

       if(iRow != iCol)
	{
		printf("Please Enter Equal  Rows & Columns Count");
		return;
	}

	for(i=1; i<=iRow; i++)
	{
	  for(j=1; j<=iColumn; j++)
	  {
	     printf("*\t");
	  }

	  printf("\n");
	}
}


int main()
{
   int iRow=0, iColumn=0;

   printf("Enter the Number of Rows:\n");
   scanf("%d",&iRow);

   printf("Enter the Number of Columns:\n");
   scanf("%d",&iColumn);

   Display(iRow, iColumn);

	return 0;
}