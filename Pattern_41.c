/* Print below pattern.
   
 
A B C
D E F
G H I
 
*/       

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  
    
#include <stdio.h>

int main() 
{
    int i, j;
    char ch = 'A';
    
    for (i = 1; i <= 3; i++) 
    {
        for (j = 1; j <= 3; j++) 
        {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
    
    return 0;
}


