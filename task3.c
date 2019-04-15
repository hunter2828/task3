#include <stdio.h>
int main()
{
    char ch;
    int getc(FILE *inputtsk3);
   // char alphaorig[26] = {"Attack at noon"};
   // char substitute[26] = {'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A'};
   
    
    
    FILE *inputtsk3;
    inputtsk3 = fopen("inputtsk3.txt", "r");
    
    for(ch = 65; ch<67; ch++)
    {
        ch = fseek(inputtsk3, 1, 1);
        printf("%c", ch);
    }
    
  


      /*  if(ch = 'A')
        {
            ch = substitute[0];
        }
        printf("%c", ch);
        
        if(ch = 'B')
        {
            ch = substitute[1];
        }
        printf("%c", ch);
        
        if(ch = 'C')
        {
            ch = substitute[2];
        }
        printf("%c", ch);
        
        if(ch = 'D')
        {
            ch = substitute[3];
        }
        printf("%c", ch);
        
        if(ch = 'E')
        {
            ch = substitute[4];
        }
        printf("%c", ch);
        
        if(ch = 'F')
        {
            ch = substitute[5];
        }
        printf("%c", ch);
        
        if(ch = 'G')
        {
            ch = substitute[6];
        }
        printf("%c", ch);
        
        if(ch = 'H')
        {
            ch = substitute[7];
        }
        printf("%c", ch);
        
        if(ch = 'I')
        {
            ch = substitute[8];
        }
        printf("%c", ch);
        
        if(ch = 'J')
        {
            ch = substitute[9];
        }
        printf("%c", ch);
        
        if(ch = 'K')
        {
            ch = substitute[10];
        }
        printf("%c", ch);
        
        if(ch = 'L')
        {
            ch = substitute[11];
        }
        printf("%c", ch);
        
        if(ch = 'M')
        {
            ch = substitute[12];
        }
        printf("%c", ch);
        
        if(ch = 'N')
        {
            ch = substitute[13];
        }
        printf("%c", ch);
        
        if(ch = 'O')
        {
            ch = substitute[14];
        }
        printf("%c", ch);
        
        if(ch = 'P')
        {
            ch = substitute[15];
        }
        printf("%c", ch);
        
        if(ch = 'Q')
        {
            ch = substitute[16];
        }
        printf("%c", ch);
        
        if(ch = 'R')
        {
            ch = substitute[17];
        }
        printf("%c", ch);
        
        if(ch = 'S')
        {
            ch = substitute[18];
        }
        printf("%c", ch);
        
        if(ch = 'T')
        {
            ch = substitute[19];
        }
        printf("%c", ch);
        
        if(ch = 'U')
        {
            ch = substitute[20];
        }
        printf("%c", ch);
        
        if(ch = 'V')
        {
            ch = substitute[21];
        }
        printf("%c", ch);
        
        if(ch = 'W')
        {
            ch = substitute[22];
        }
        printf("%c", ch);
        
        if(ch = 'X')
        {
            ch = substitute[23];
        }
        printf("%c", ch);
        
        if(ch = 'Y')
        {
            ch = substitute[24];
        }
        printf("%c", ch);
        
        if(ch = 'Z')
        {
            ch = substitute[25];
        }
        printf("%c", ch);
        
        */
    
    return 0;
}

    
    