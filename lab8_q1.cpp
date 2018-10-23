//This is a C++ program to find sum of all elements of an array using functions.
//Including library
#include <iostream>
using namespace std;

//Including the function structure

int sum(int no[], int size)
{
	//Declaring the variables	
	int i , sum = 0;
	for (i=0 ; i< size ; i++)
	{
		sum = sum + no [i];
	}
	return sum;
}

//Asking user for the size of array
//Including the main function

int main ()
{
	//declaring variables again
	int n, i, size;
	cout<< "Enter the required size of your array: " <<endl;
	cin >> size;
	int no [size];	
	cout << "So you need an array of size " << size << ". Okay Let's make one. " << endl;
//taking in the values
	for (i=0 ; i< size ; i++)
	{
		cout << "Please enter next element for your array. " << endl;
		cin >> 	no [i];
	}
	
//giving out the sum
cout << "Total is " << sum(no,size) << endl;
return 0;
}
