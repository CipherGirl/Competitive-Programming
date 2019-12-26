#include<bits/stdc++.h>
using namespace std;
#define inf 1e9

void fastscan(int &number)
{
	//variable to indicate sign of input number
	bool negative = false;
	register int c;

	number = 0;

	// extract current character from buffer
	c = getchar();
	if (c=='-')
	{
		// number is negative
		negative = true;

		// extract the next character from the buffer
		c = getchar();
	}

	// Keep on extracting characters if they are integers
	// i.e ASCII Value lies from '0'(48) to '9' (57)
	for (; (c>47 && c<58); c=getchar())
		number = (number << 3) + ( number << 1 ) + ( c & 15 );

	// if scanned input has a negative sign, negate the
	// value of the input number
	if (negative)
		number *= -1;
}

int main()
{
    int a;
    fastscan(a);
    printf("%d\n",a);
    return 0;
}
