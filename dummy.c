#include<stdio.h>
int main()
{
  FILE *fr;
  char c;
  fr = fopen("users.txt", "r");
  while( c != EOF)
  {
    c = fgetc(fr); /* read from file*/
    printf("%c",c); /*  display on screen*/
  }
  fclose(fr);
  return 0;
}