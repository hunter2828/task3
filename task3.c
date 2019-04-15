#include <stdio.h>

int main()
{
    int n;
    FILE *inputsk3;
    inputsk3 = fopen("inputsk3.txt", "r");

    int getc(FILE *inputtsk3);
    char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    for(n = 0; n<26; n++)
    {
        if(inputsk3 != NULL)
  {
      alpha[n] = fgetc(inputsk3);
      
  }
}
    
    FILE *tsk3orig;
    tsk3orig = fopen("tsk3orig.txt", "r");
    while(feof(tsk3orig) == 0)
       { char ch = fgetc(tsk3orig);
       
        //fscanf(tsk3orig, "%c", &ch);
        
        if(ch = 'A')
        {
            ch = alpha[0];
            
        }


        else if(ch = 'B')
        {
            ch = alpha[1];
            
        }
        
        
        else if(ch = 'C')
        {
            ch = alpha[2];
            
        }
        
        
        else if(ch = 'D')
        {
            ch = alpha[3];
            
        }
        
        
        else if(ch = 'E')
        {
            ch = alpha[4];
            
        }
        
        
        else if(ch = 'F')
        {
            ch = alpha[5];
            
        }
        
        
        else if(ch = 'G')
        {
            ch = alpha[6];
            
        }
        
        
        else if(ch = 'H')
        {
            ch = alpha[7];
            
        }
        
        
        else if(ch = 'I')
        {
            ch = alpha[8];
            
        }
        
        
        else if(ch = 'J')
        {
            ch = alpha[9];
            
        }
        
        
        else if(ch = 'K')
        {
            ch = alpha[10];
            
        }
        
        
        else if(ch = 'L')
        {
            ch = alpha[11];
            
        }
        
        
        else if(ch = 'M')
        {
            ch = alpha[12];
            
        }
        
        
        else if(ch = 'N')
        {
            ch = alpha[13];
            
        }
        
        
        else if(ch = 'O')
        {
            ch = alpha[14];
            
        }
        
        
        else if(ch = 'P')
        {
            ch = alpha[15];
            
        }
        
        
        else if(ch = 'Q')
        {
            ch = alpha[16];
            
        }
        
        
        else if(ch = 'R')
        {
            ch = alpha[17];
            
        }
        
        
        else if(ch = 'S')
        {
            ch = alpha[18];
            
        }
        
        
        else if(ch = 'T')
        {
            ch = alpha[19];
            
        }
        
        
        else if(ch = 'U')
        {
            ch = alpha[20];
            
        }
        
        
        else if(ch = 'V')
        {
            ch = alpha[21];
            
        }
        
        
        else if(ch = 'W')
        {
            ch = alpha[22];
            
        }
        
        
        else if(ch = 'X')
        {
            ch = alpha[23];
            
        }
        
        
        else if(ch = 'Y')
        {
            ch = alpha[24];
            
        }
        
        
        else if(ch = 'Z')
        {
            ch = alpha[25];
            
        }
        printf("%c", ch);
  }  

    return 0;
}

 