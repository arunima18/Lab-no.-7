//Print all even numbers from m to n, taking m and n from the user

#include<iostream>
using namespace std;
//Print number
int printEven(int i,int n){
	//Apply a restriction to the function
	if(i<=n){
		//If number is even,print the number
		if(i%2==0){
			cout<<i<<endl;
			//Increase number by two and do the same thing by recursion
			i=i+2;
			printEven(i,n);
		}
		//If number is odd, increase value by one and call the same function
		else{
			i++;
			printEven(i,n);
		}
	}
	else{
		}
}

int main(){
int c,n,m;
	//Ask values of upper and lower range from user
	cout<<"Enter the lower range"<<endl;
	cin>>m;
	cout<<"Enter the upper range"<<endl;
	cin>>n;
	//Call the function
	c=printEven(m,n);
return 0;
}
