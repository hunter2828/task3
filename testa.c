#include <stdio.h>

int main()
{
    
    FILE *inputtsk3;
    inputtsk3 = fopen("inputtsk3.txt", "r");
    char ch;
    int getc(FILE *inputtsk3);
  if(inputtsk3 != NULL)
  {
      ch = fgetc(inputtsk3);
      printf("%c", ch);
  }
    
    return 0;
}