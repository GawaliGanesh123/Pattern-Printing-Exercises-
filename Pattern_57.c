/* Print below pattern.
   
 
A
BA
CBA
DCBA
EDCBA
 
*/       

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  
    
#include <stdio.h>

int main() 
{
    int i, j;
    char ch;
    
    for (i = 1; i <= 5; i++) 
    {
        ch = 'A' + i - 1;
        
        for (j = 1; j <= i; j++) 
        {
            printf("%c", ch);
            ch--;
        }
        
        printf("\n");
    }
    
    return 0;
}