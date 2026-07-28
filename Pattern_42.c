/* Print below pattern.
   
 
A b C d
E f G h
I j K l
 
*/       

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  
    
#include <stdio.h>

int main() 
{
    int i, j;
    char ch = 'A';
    
    for (i = 1; i <= 3; i++) 
    {
        for (j = 1; j <= 4; j++) 
        {
            if (ch % 2 != 0)
            {
                printf("%c ", ch);
            }
            else
            {
                printf("%c ", ch + 32);
            }

            ch++;
        }
        printf("\n");
    }
    
    return 0;
}