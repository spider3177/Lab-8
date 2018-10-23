//first include the library
#include <iostream>
using namespace std;
/********************************************************************
program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. (Use functions for each of the task in the question)
********************************************************************/
//writing the subsidiary functions
//mean
float mean(int arr[],float k){
	float s=0.0;
	for(int i=0;i<k;i++)
		s=s+arr[i];
	float kay=s/k;		
return kay;
}
//median
float median(int arr[],int k){
	int l;
	if(k%2==0){
		float g =(arr[k/2]+arr[(k/2)-1])/2.0;
		return g;
	}
	else{
		l=(k-1)/2;
		return arr[l];
	}
}
//smallest number
int small(int arr[],int k){
return arr[0];
}
//largest number
int large(int arr[],int k){

return arr[k-1];
}
//writing the main function
int main(){
	int a,lar;
	int k;
	cout<<"gimme the numbers of inputs you want to give me"<<endl;
	cin>>k;
	int sub[k];
	cout<<"Now gimme the numbers"<<endl;
	for(int i=0;i<k;i++)
		{cin>>sub[i];}
	cout<<endl;
	for(int i=0;i<k;i++){
		for(int j=i+1;j<k;j++){
			if(sub[j]<sub[i]){
				lar=sub[j];
				sub[j]=sub[i];
				sub[i]=lar;
			}
		}
	}
	cout<<"Largest of the numbers you entered is : "<<large(sub,k)<<endl;
	cout<<"Smallest of the numbers you entered is : "<<small(sub,k)<<endl;
	cout<<"median of the numbers you have entered is : "<<median(sub,k)<<endl;
	cout<<"mean of the numbers you have entered is : "<<mean(sub,k)<<endl;
return 0;
}	

