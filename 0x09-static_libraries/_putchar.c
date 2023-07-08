#include<stdio.h>
#include "main.h"

/**                                                                                                                                                  
 * main - Entry point                                                                                                                                
 *                                                                                                                                                   
 * Description: Prints _putchar using putchar prototype                                                                                              
 *                                                                                                                                                   
 * Return: Always 0 (success)                                                                                                                        
*/

int main(void)
{
char str[] = "_putchar";
int i = 0;

while (i < 8)
{
_putchar(str[i]);
i++;
}
_putchar('\n');
return (0);
}
