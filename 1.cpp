//first include the library
#include <iostream>
using namespace std;
//writing the subsidiary function
int kay(int arr[],int k){
	int sum=0;
	for(int i=0;i<k;i++)
		sum += arr[i];
return sum;
}
//writing the main function
int main(){
	int k,a;
	cout<<"gimme the numbers of inputs you want to give me"<<endl;
	cin>>k;
	int sub[k];
	cout<<"Now gimme the numbers"<<endl;
	for(int i=0;i<k;i++)
		{cin>>sub[i];}
	cout<<"Sum of the numbers you entered is : "<<kay(sub,k)<<endl;
return 0;
}	

