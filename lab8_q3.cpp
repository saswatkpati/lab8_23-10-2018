//This is a c++ program to find out kth largest, kth smallest element of an array using functions.
//Including library
#include <iostream>
using namespace std;

//first sort the array

//In descending order to find Kth largest term
int klarge (int array[], int size, int k)
{
	//declaring all variables
	int x, y, a;
	for (x=0; x<size; x++)
	{
		for (y = x+1; y < size; y++)
		{
			if(array[x]<array[y])
			{
				a=array[y];
				array[y]=array[x];
				array[x]=a;
			}
		}
	}
	return array[k-1];
}

//In ascending order to find Kth smallest term
int ksmall(int array[],int size,int k)
{
	//declaring all variables
	int x,y,a;
	for(x=0;x<size;x++)
	{
		for(y=x+1;y<size;y++)
		{
			if(array[x]>array[y])
			{
				a=array[x];
				array[x]=array[y];
				array[y]=a;
			}
		}
	}
	//return
	return array[k-1]; 
}

//Asking user for the size of array
//Including the main function

int main ()
{
	//declaring variables again
	int i, size, k;
	cout<< "Enter the required size of your array: " <<endl;
	cin >> size;
	int array[size];	
	cout << "So you need an array of size " << size << ". Okay Let's make one. " << endl;
//taking in the values
	for (i=0 ; i< size ; i++)
	{
		cout << "Please enter next element for your array. " << endl;
		cin >> 	array[i];
	}
//asking for k
	cout<<"Enter the integer value of k"<<endl;
	cin>>k;
	
//giving out the sum
	cout<<"The "<< k <<"th largest element of the array is :"<<klarge(array, size, k)<<endl;
	cout<<"The "<< k <<"th smallest element of the array is: "<< ksmall(array, size, k)<<endl;
	return 0;
}
