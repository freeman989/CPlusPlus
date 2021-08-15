#include "pch.h"
#include <iostream>
#include <thread>
#include <string>

using namespace std;


int main()
{
	int p = 1;
	for (int i = 1; i <= 10; i++)
	{
		this_thread::sleep_for(chrono::seconds(1));

		cout <<"int = " + to_string(p) << endl;

		p++;
	}

	return 0;
}
