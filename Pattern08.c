/*Accept the number of Rows and Columns from the user and print below pattern.

   1	 $	3	$
   1	 $	3	$
   1	 $	3	$
   1	 $	3	$

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Display_Pattern(int iRow, int iCol)
{
	int i=0,j=0;

	if(iRow != iCol)
	{
		printf("Please Enter Equal  Rows & Columns Count");
		return;
	}

	for(i=1; i<=iRow; i++)
	{
	  for(j=1; j<=iCol; j++)
	  {
	  	if(j%2==0)
	    printf("$\t");
	   else
	   	printf("%d\t",j);
	  }
	  printf("\n");
	}
}

int main()
{
	int iRow=0, iCol=0;

	printf("Enter Number of Rows:\n");
	scanf("%d",&iRow);

	printf("Enter Number of Columns:\n");
	scanf("%d",&iCol);

	Display_Pattern(iRow, iCol);

	return 0;
}

