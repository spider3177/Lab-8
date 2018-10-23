#include <iostream>
using namespace std;

//for kth largest element
void klarge(int a[], int l, int k){
	cout<<a[l-k]<<endl;	
}

//for kth smallest element
void ksmall(int a[],int l,int k){
	cout<<a[k-1]<<endl;
}

int main(){
	int l;
	cout<<"Enter the length of the array"<<endl;
	cin>>l;
	int arr[l];
	cout<<"Enter the elements of the array"<<endl;
	for(int i=0; i<l;i++)
		cin>>arr[i];
	int k;

	//arranging in ascending order
	for(int i=0; i<l;i++){
		for(int j=i+1;j<l;j++){
			if(arr[i]>arr[j]){
				k=arr[i];
				arr[i]=arr[j];
				arr[j]=k;
			}
		}
	}
	int e1,e2;
	cout<<"Enter the position number of largest element you want to find"<<endl;
	cin>>e1;
	klarge(arr,l,e1);
	cout<<"Enter the position number of smallest element you want to find"<<endl;
	cin>>e2;
	ksmall(arr,l,e2);
return 0;
}
