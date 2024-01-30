	#include <iostream>
	#include <conio.h>
	using namespace std;

	int main()
	{
	    int numbers[5], s = 0;
	    cout << "Enter 5 numbers: ";

	    for (int i = 0; i < 5; ++i)
	    {
	        cin >> numbers[i];
 s += numbers[i];
 }

	    cout << "S = " << s << endl;

	    return 0;
	}

