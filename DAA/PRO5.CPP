#include<conio.h>
#include<stdio.h>

// recursive function to calculate
// multiplication of two numbers
int product(int x, int y)
{
	// if x is less than
	// y swap the numbers
	if (x < y)
		return product(y, x);

	// iteratively calculate
	// y times sum of x
	else if (y != 0)
		return (x + product(x, y - 1));

	// if any of the two numbers is
	// zero return zero
	else
		return 0;
}

// Driver Code
int main()
{
	int x = 2, y = 4;
	clrscr();
	printf("%d",product(x, y));
	getch();
	return 0;
}
