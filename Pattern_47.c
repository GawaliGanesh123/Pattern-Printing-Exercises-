/* Print below pattern.
   
 
A B C D E
  B C D E
    C D E
      D E
        E
 
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
        
        for (j = 1; j <= 5; j++) 
        {
            if (j >= i)
            {
                printf("%c ", ch);
                ch++;
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    
    return 0;
}