#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *_strdup - duplicate        
 *@str: char
 *Return: 0    
 */
char *_strdup(char *str)
{
char *chara;
int i, z = 0;
if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;
chara = malloc(sizeof(char) * (i + 1));
if (chara == NULL)
return (NULL);
for (z = 0; str[z]; z++)
chara[z] = str[z];
return (chara);
}
