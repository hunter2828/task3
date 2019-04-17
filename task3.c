#include <stdio.h>

int main()
{
    int key;
    char ch;
    printf("Enter key: \n");
    scanf("%d", &key);
    //Write text to a file, then read it from a file, lecture 9/04 around half hour into lecture recording.
    FILE *todecrypt5;
    todecrypt5 = fopen("todecrypt5.txt", "r");


   
       while(feof(todecrypt5) == 0)
       
       {   
             
                fscanf(todecrypt5, "%c", &ch);
                if(ch>= 'a' && ch<= 'z')//if loop to encrypt lower case letters. The loop adds the key to the value, and if the value exceeds the value of lowercase 'z', it initiates another if loop.
                {
                    ch = ch - key;//a letters ascii code plus the key is assigned to the same variable butwill have a different ascii code
                    if(ch < 'a')//used to encrypt an values that 'overflow' past the ascii value of 'z'
                    {
                        ch = ch + 26;//formula encrypts values that overflow past z, by using previous value calculated for the new 'ch' and minuses 26.
                    }   
                }
                
                else if(ch>= 'A' && ch<= 'Z')//if loop to encrypt lower case letters. The loop adds the key to the value, and if the value exceeds the value of uppercase 'Z' it initiates another loop
                {
                    ch = ch - key;//a letters ascii code plus the key is assigned to the same variable butwill have a different ascii code
                    if(ch < 'A')//used to encrypt an values that 'overflow' past the ascii value of 'Z'
                    {
                        ch = ch + 26;
                    }
                    
                }
                printf("%c", ch);
                
            
        }




    return 0;
}

 