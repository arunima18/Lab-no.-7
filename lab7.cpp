#include<iostream>
#include<cmath>
using namespace std;
//function to reverse the digits of number
int reverse(int n,int i){
  if (i==1){
  return n;
  }
  else{
  r=n/10;
  return r*pow(10,i-1)+return(n/10,i-1);
  }
  
//Write main functio 
int main(){
  int n;
  cout<<"Enter the number of which you want to find the reverse"<<endl;
  cin>>n;
  int x=n;
  //Look for the number of digits
  i=0;
  while (x>1){
    x=x/10;
    i++
  }
  
  //call the function
  int z=reverse(x,i);
  //print the values
  cout<<"The reverse of the given number is"<<z<<endl;
  
return 0;
}
  