/*. Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 4 iCol = 4

Output : A  	B  	C  	D
         A    B   C  	D
         A    B  	C  	D
         A  	B  	C  	D


*/
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
	int i=0; 
	int j=0;
	char ch='A';

	if(iRow != iCol)
	{
		printf("Please Enter Equal  Rows & Columns Count");
		return;
	}


	for(i=1; i<=iRow; i++)
	{
		  ch='A';
		  
       for(j=1; j<=iCol; j++)
       {
         printf("%c\t",ch);
         ch++;
       }
        printf("\n");
	}

}


int main()
{
	int iRow=0; 
	int iCol=0;

	printf("Enter number of rows:\n");
	scanf("%d",&iRow);

	printf("Enter the number of columns:\n");
	scanf("%d",&iCol);

	DisplayPattern(iRow, iCol);

	return 0;
}