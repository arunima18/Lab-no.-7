//Print sum of all natural numbers between 1 and n

#include<iostream>
using namespace std;

int sum(int n){
	//Resrict the function at n=1
	if (n==1){
		return 1;
		
		}
	else{
	//Calculate sum
		return n+sum(n-1);
		
		}
	
}	
int main(){
	int n,c;
	//Ask number from user upto which sum is to be done
	cout<<"Enter a number"<<endl;
	cin>>n;
	//Call the sum function
	c=sum(n);
	//Print the sum
	cout<<c<<endl;
return 0;
}
