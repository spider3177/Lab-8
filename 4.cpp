//First include library
#include<iostream>
using namespace std;
/*******************************************************************
Write a program to merge 2 arrays (just one after another into another array), find maximum of 2 arrays [maximum element of all the elements in both the arrays], find minimum of 2 arrays [similar to maximum]. (Use functions for each)
*******************************************************************/

//function to find the maximum element of an array
int max(int arr[],int n){
	//declaring variables
	int i;
	int a=arr[0];
	for(i=0;i<n;i++)
	{
		if(a<arr[i])
			a=arr[i];
	}
return a;
}
//function to find the minimum of an array
int min(int arr[],int n){
	//declaring variables
	int i;
	int a=arr[0];
	for(i=0;i<n;i++)
	{
		if(a>arr[i])
			a=arr[i];
	}
return a;
}
//write the main function
int main(){
	//define variables
	int a;
	int b;
	int i;
	//ask for the size of the first array
	cout<<"Enter the size of the first array "<<endl;
	cin>>a;
	int arr1[a];
	//ask for the elements of the first array
	cout<<"\nEnter the elements of the array"<<endl;
	for(i=0;i<a;i++)
		cin>>arr1[i];
	//ask for the size of the second array
	cout<<"\nEnter the size of the second array "<<endl;
	cin>>b;
	int arr2[b];
	//ask for the elements of the second array
	cout<<"\nEnter the elements of the array "<<endl;
	for(i=0;i<b;i++)
		cin>>arr2[i];
	int c=a+b;
	int arr[c];
	//merge the two arrays
	for(i=0;i<a;i++)
		arr[i]=arr1[i];
	for(i=0;i<b;i++)
		arr[i+a]=arr2[i];
	cout<<"The elements of the new array are :-\n"<<endl; 
	for(i=0;i<c;i++)
		cout<<arr[i]<<endl;
	//call the max function to find maximum of the new array
	cout<<"The maximum of the elements of the new array is :  "<<max(arr,c)<<endl;
	//call min function to find the minimum of the new array
	cout<<"The minimum of the elements of the new array is :  "<<min(arr,c)<<endl;
return 0;
}
