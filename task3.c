#include <stdio.h>

int main() {
     int key;
        char ch;
    FILE *todecrypt5;//initialises file pointer 
        
         char sentence[200]; //string to store the message in
         
        printf("Enter string: \n"); //prompts user to enter sentence

        fgets(sentence, 200, stdin); //gets sentence from stdin and stores it as 'sentence'
        todecrypt5 = fopen("todecrypt5.txt", "w"); //opens filefor writing
        fputs(sentence, todecrypt5); //stores 'sentence' in the file

        fclose(todecrypt5);//closes file
        todecrypt5 = fopen("todecrypt5.txt", "r");//opens the file for reading
        fscanf(todecrypt5, "%c", &ch); //scans the file for the first char and stores it as ch
   
        printf("Enter key: \n");// prompts user to enter key
        scanf("%d", &key); //stores input as 'key'
                
	    printf("%c", sentence[0]+key);//prints the first char of the file and adds the key. This is done as the fgets fucntion was skipping sentence[1].

   
        
      
           while(feof(todecrypt5) == 0)
           //while(i < 1)
           {
            //i++;
            fscanf(todecrypt5, "%c", &ch);
            if(ch>= 'a' && ch<= 'z')//if loop to encrypt lower case letters. The loop adds the key to the value, and if the value exceeds the value of lowercase 'z', it initiates another if loop.
            {
                ch = ch + key;//a letters ascii code plus the key is assigned to the same variable butwill have a different ascii code
                if(ch > 'z')//used to encrypt an values that 'overflow' past the ascii value of 'z'
                {
                    ch = ch - 26;//formula encrypts values that overflow past z, by using previous value calculated for the new 'ch' and minuses 26.
                }
                
                
            }
            
            else if(ch>= 'A' && ch<= 'Z')//if loop to encrypt lower case letters. The loop adds the key to the value, and if the value exceeds the value of uppercase 'Z' it initiates another loop
            {
                ch = ch + key;//a letters ascii code plus the key is assigned to the same variable butwill have a different ascii code
                if(ch > 'Z')//used to encrypt an values that 'overflow' past the ascii value of 'Z'
                {
                    ch = ch - 26;
                }
                
            }
            printf("%c", ch);
           }


  
	return 0;
}




 
 