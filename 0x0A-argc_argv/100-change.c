#include <stdio.h>
#include <stdlib.h>

/**
* main - print the minimum num of coins to make change for
*an amount of money
*
* @argc: number of arguments
* @argv: an array of arguments
*
* Return: 0 (success)
*/

int main(int argc, char *argv[])
{
(void)argv;
if (argc >= 2)
{

int i, rest = 0, money = atoi(argv[1]);
int cents[] = {25, 10, 5, 2, 1};

for (i = 0; i < 5; i++)
{
if (money >= cents[i])
{
rest += money / cents[i];
money = money % cents[i];

if (money % cents[i] == 0)
{
break;
}
}
}
printf("%d\n", rest);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
