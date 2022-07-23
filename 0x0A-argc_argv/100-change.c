#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 *
 * @argc: Argument count
 *
 * @argv: Arguments passed
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x, cents, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");}

	cents = atoi(argv[1]);
	coins = 0;

	if (cents >= 25)
	{
		x = cents / 25;
		cents = cents % 25;
		coins += x;}
	if (cents >= 10 && cents < 25)
	{
		x = cents / 10;
		cents = cents % 10;
		coins += x;}
	if (cents >= 5 && cents < 10)
	{
		x = cents / 5;
		cents = cents % 5;
		coins += x;}
	if (cents >= 2 && cents < 5)
	{
		x = cents / 2;
		cents = cents % 2;
		coins += x;}
	if (cents == 1)
	{
		x = cents;
		coins += x;}

	printf("%d\n", coins);

	return (0);
}
