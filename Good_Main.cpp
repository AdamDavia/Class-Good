/*	Project:    NAME OF PROJECT GOES HERE
	Name:       YOUR NAME GOES HERE
    Partner:    PARTNER'S NAME IF ANY
    Class:      example: CSC 1810 - Section 1
*/

#include <iostream>
#include "counter.h"

using namespace std;

int main(int argc, char *argv[])
{
	counter C;

	C.Begin();

	{
		char c;
		cout << "Hit enter to exit:";
		cin.get(c);
	}
	return 0;
}