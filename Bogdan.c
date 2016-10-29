#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

char caesar(char token, int key);

int main(int argc, string argv[])
{
  \\\The number of command line args submitted was incorrect.
  if (argc != 2)
{
        \\\\We accept only letters as input.
        printf("Try again.");
        return 1;
}
string key = argv[1];
unsigned long keyCount = strlen(key);
for(int k = 0; k < keyCount; k++) 
{
if (!isalpha(key[k]))
{
printf("Try again.");
return 1;
}
}
string text = GetString();
if(text == NULL) 
{
printf("Try again.");
return 1;
}
for (int i = 0, n = 0; i < strlen(text); i++) 
{
  // If input at given position is not letter, just mirror it.
  if (isalpha(text[i])) 
  {
  if (isupper(text[i]))
  printf("%c", ((((text[i] - 'A') + ((toupper(key[n++%keyCount]))-'A')%26) % 26) + 'A'));
  if (islower(text[i]))
  printf("%c", ((((text[i] - 'a') + ((tolower(key[n++%keyCount]))-'a')%26) % 26) + 'a'));
  } else
  printf("%c", text[i]);
  }
     // Be a nice citizen and exit cleanly.
     printf("\n");
     return 0;
}
