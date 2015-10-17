/*
Looping Testing
Simple Program by Rixuel Patrick
Date: October 15th, 2015
*/

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	clock_t start, start2;
    double duration, duration2;
	
	cout << "+------------------------+" << endl;
	cout << "|  Loop Test !  |  2015  |" << endl;
	cout << "+------------------------+" << endl;
	cout << "| Author: Rixuel Patrick |" << endl;
	cout << "+------------------------+" << endl;
	cout << endl;
	cout << "Let's see how fast is your computer..." << endl;
	cout << "(Too long? Use [CTRL]+[c] to end the program)\n" << endl;
	
	cout << "Looping TEST 1... O(n)\n" << endl;
	
	start = clock();
	int i;
	for(i=0; i<10000; i++); cout << "i: " << i << endl;
	for(i=0; i<100000; i++); cout << "i: " << i << endl;
	for(i=0; i<1000000; i++); cout << "i: " << i << endl;
	for(i=0; i<10000000; i++); cout << "i: " << i << endl;
	for(i=0; i<100000000; i++); cout << "i: " << i << endl;
	for(i=0; i<250000000; i++); cout << "i: " << i << endl;
	for(i=0; i<500000000; i++); cout << "i: " << i << endl;
	for(i=0; i<750000000; i++); cout << "i: " << i << endl;
	for(i=0; i<1000000000; i++); cout << "i: " << i << endl;
	
	duration = ( clock() - start ) / (double) CLOCKS_PER_SEC;
	
	cout << endl;
	cout << "TEST 1 DURATION: [" << duration << "s]\n" << endl;
	
	cout << "Looping TEST 2... O(n^2)\n" << endl;
	
	
	start2 = clock();
	int j, counter=0;
	for(i=0; i<100; i++)
	{
		for(j=0; j<100; j++)
		{
			counter++;
		}
	}
	cout << "c: " << counter << endl;
	
	counter=0;
	for(i=0; i<1000; i++)
	{
		for(j=0; j<1000; j++)
		{
			counter++;
		}
	}
	cout << "c: " << counter << endl;
	
	counter=0;
	for(i=0; i<10000; i++)
	{
		for(j=0; j<10000; j++)
		{
			counter++; 
		}
	}
	cout << "c: " << counter << endl;
	
	counter=0;
	for(i=0; i<10000; i++)
	{
		for(j=0; j<100000; j++)
		{
			counter++; 
		}
	}
	cout << "c: " << counter << endl;
	
	counter=0;
	for(i=0; i<100000; i++)
	{
		for(j=0; j<10000; j++)
		{
			counter++; 
		}
	}
	cout << "c: " << counter << endl;
	
	
	duration2 = ( clock() - start2 ) / (double) CLOCKS_PER_SEC;
	
	cout << endl;
	cout << "TEST 2 DURATION: [" << duration2 << "s]\n" << endl;
	
	cout << "-------------------\n" << endl;
	
	cout << "TOTAL DURATION: [" << duration+duration2 << "s]\n" << endl;
	
	cout << "(Type any characters and press enter to exit)" << endl;
	
	string str;
	cin >> str;
	
	return 0;
}
