/* Print below pattern.
   
 
A1
2B
C3
4D
E5
6F
 
*/       

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  
    
#include <stdio.h>

int main() 
{
    int i, k = 1;
    char ch = 'A';
    
    for (i = 1; i <= 6; i++) 
    {
        if (i % 2 != 0)
        {
            printf("%c%d", ch, k);
            ch++;
            k++;
        }
        else
        {
            printf("%d%c", k, ch);
            k++;
            ch++;
        }
        
        printf("\n");
    }
    
    return 0;
}



