//This is a program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. Using functions for each of the task.
//Including library
#include <iostream>
using namespace std;

//the largest number function structure

int large(int array[], int size)
{
	//Declaring the variables	
	int i , a = array[0];
	for (i=0 ; i< size ; i++)
	{
		if (a < array [i])
		{
			a = array [i];
		}
	}
	return large;
}

//the smallest number function structure

int small(int array[], int size)
{
	//Declaring the variables	
	int i , x = array[0];
	for (i=0 ; i< size ; i++)
	{
		if (a > array [i])
		{
			a = array [i];
		}
	}
	return small;
}

//the mean function structure

float mean(int array[], int size)
{
	//Declaring the variables	
	int i , total=0;
	for (i=0 ; i< size ; i++)
	{
		total = total + array [i]
	}
	return total/size ;
}

//the median number function structure

int median(int array[], int size)
{
	//Declaring the variables	
	int median;
	//median is the middle most element. If the total number of elements is even then median the size/2th element. If it is odd then it is the (size+1)/2th element.
	if (size%2==0)
	{
		median = array [size/2];
	}
	else
	{
		median = array [(size+1)/2];
	}
return median;
}

//the highest frequency number function
int mostfrequent (int array[], int size) 
{
	//Declaring the variables
	int i, j, freq, maxfreq, a = array[0];
	for (int i = 0; i < size; i++) 
	{
		//searching for duplicacy ahead
		int array[size];
			for (int i=0; i<size; i++)
			cin>>a[i];

		int maxfreq = 0;

		for (int i=0;i<size;i++)
		{
			int freq=1;

			for (int j=i+1;j<size;j++)
		       	{
				if (a[i]==a[j])
			   	freq++;
		   		
				if (freq > maxfreq)
		      		maxfreq = freq;
			}
		}

		//searching duplicacy behind
		for (int i=0;i<size;i++)
		{
			int freq=1;
			for (int j=i+1;j<size;j++)
			{
				if (a[i]==a[j])
				freq++;
				if (freq==maxfreq)
				cout << a[i] << endl;
			}
		}
	}
return 0;
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
	
//giving out the results

cout << "The largest number of the array is " << large(array,size) << endl;
cout << "The smallest number of the array is " << small(array,size) << endl;
cout << "The mean of the array is " << mean(array,size) << endl;
cout << "The median of the array is " << median(array,size) << endl;
cout << "The most frequent number of the array is " << mostfrequent(array,size) << endl;
return 0;
}
