/* Print below pattern.
   
 
1
10
101
1010
10101
101010
 
*/       

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  
    
#include <stdio.h>

int main() 
{
    int i, j, k, rows;
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    
    for (i = 1; i <= rows; i++) 
    {
        k = 1;
        
        for (j = 1; j <= rows; j++) 
        {
            if (j <= i) 
            {
                printf("%d", k);
                k = 1 - k;
            } 
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}