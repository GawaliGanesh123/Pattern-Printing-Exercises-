/* Print below pattern.
   
 
A B C D
B C D E
C D E F
D E F G
 
*/       

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  
    
#include <stdio.h>

int main() 
{
    int i, j;
    char ch;
    
    for (i = 1; i <= 4; i++) 
    {
        ch = 'A' + i - 1;
        
        for (j = 1; j <= 4; j++) 
        {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
    
    return 0;
}