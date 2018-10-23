//This is a program to merge 2 arrays (just one after another into another array), find maximum of 2 arrays [maximum element of all the elements in both the arrays], find minimum of 2 arrays [similar to maximum]. (Use functions for each)
//Including library
#include <iostream>
using namespace std;

//the largest number function structure

int large(int frstarray[], int size)
{
	//Declaring the variables	
	int i , a = frstarray[0];
	for (i=0 ; i< size ; i++)
	{
		if (a < frstarray [i])
		{
			a = frstarray [i];
		}
	}
	return large;
}

//the smallest number function structure

int small(int scndarray[], int size)
{
	//Declaring the variables	
	int i , x = scndarray[0];
	for (i=0 ; i< size ; i++)
	{
		if (a > scndarray [i])
		{
			a = scndarray [i];
		}
	}
	return small;
}

//mentioning the main function
int main()
{
	//defining all variables
	int a, b, i;

	//ask for the size of the first array
	cout<<"Enter required size of the first array "<<endl;
	cin>>a;
	int frstarray[a];

	//ask for the elements of the first array
	for(i=0;i<a;i++)
	{
		cout<<"Enter next element of the array"<<endl;
		cin>> frstarray[i];
	}

	//ask for the size of the second array
	cout<<"Enter required size of the second array "<<endl;
	cin>>b;
	int scndarray[b];

	//ask for the elements of the second array
	for(i=0;i<b;i++)
	{
		cout<<"Enter one element of the array "<<endl;
		cin>> scndarray[i];
	}
	int c=a+b, array[c];
	
	//merge the two arrays
	for(i=0;i<a;i++)
	{
		array[i] = frstarr[i];
	}

	for(i=0;i<b;i++)
	{
		array[i+a] = scndarr[i];
	}

	for(i=0;i<c;i++)
	{
		cout<< array[i] <<endl;
	}
	
	//giving the output
	cout<<"The maximum element of the new array is "<<large(array,c)<<endl;
	
	cout<<"The minimum element of the new array is "<<small(array,c)<<endl;

	return 0;
}
