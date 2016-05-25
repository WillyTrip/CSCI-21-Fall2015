/*
 * Name        : lab_recursion.cpp
 * Author      : YOUR NAME
 * Description : Recursive Functions
 */

#include "lab_recursion.h"

// CODE FUNCTION DEFINITIONS HERE

/*
 * UPDATE!!!! to match the requirements
 * Convert a decimal number to binary
 * @param number to be converted.
 * @return a stringstream.
 */
string decToBin(int num)
{
    stringstream ss;
    ss.str();
    string conversion;
    
	if (num > 1) //note this makes the base case num = 0
	{
	    ss << (num%2);
		decToBin(num/2); //recursive call
	}

	ss << (num%2); //outputs in correct order
	conversion = ss.str();
	return conversion;
}

unsigned int binToDec(int num)
{
    unsigned int base = 1, dec, add;
    
    if (num > 0)
    {
        add = num % 10;
        dec = dec + (add * base);
        base = base*2;
        binToDec(num/10);
    }
    return num;
}

int main()
{
    cout << binToDec(11);
    cout << decToBin(543);
    return 0;
}
