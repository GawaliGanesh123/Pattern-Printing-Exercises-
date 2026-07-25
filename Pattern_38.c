/* Print below pattern.
   
 
      A
    A B A
  A B C B A
A B C D C B A
 
*/       

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  
    
#include <stdio.h>

int main() 
{
    int i, j;
    char k;
    
    for (i = 1; i <= 4; i++) 
    {
        k = 'A';
        
        for (j = 1; j <= 7; j++) 
        {
            if (j >= 5 - i && j <= 3 + i) 
            {
                printf("%c", k);
                
                if (j < 4) 
                {
                    k++;
                } 
                else 
                {
                    k--;
                }
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