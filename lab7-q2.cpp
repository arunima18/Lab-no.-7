//Print all natural numbers between 1 to n

#include<iostream>
using namespace std;

//Print a number using some function
int print(int i, int n){
	//Put a restriction or ending to your function
	
	if(i==(n+1)){
		}
	else{
		cout<<i<<endl;
		//Increase number by 1
		i++;
		//Call the same function to repeat the task
		print(i,n);
		}
	
}
//Repeat by calling the same function 
	

int main(){
	int n,c;
	cout<<"Enter any number"<<endl;
	cin>>n;
	c=print(1,n);
return 0;
}
