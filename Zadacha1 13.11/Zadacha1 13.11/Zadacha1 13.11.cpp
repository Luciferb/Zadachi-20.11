#include<iostream>

#include<string>

using namespace std;

int main ()

{

	string classmates[15];

	for (int i=0; i<15; i++)

	{

		getline (cin, classmates [i]);

	}

	cout <<classmates;

	return 0;

	}