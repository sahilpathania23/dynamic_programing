#include <iostream>
using namespace std;
 int* f(int n){
 	int * arr=new int[n];
 	for(int j=0;j<n;j++){
 		cin>>arr[j];
 	}
 	return arr;
 	// in this we return the address of the array as arr
 	delete [] arr;
 	arr=NULL;




 }
 int main(){
 	int n;
 	cin>>n;
 	int *ptr=f(n);
 	// we store the the address of the array 
 	for (int i = 0; i < n; ++i)
 	{
 		cout<<ptr[i]<<" ";
 		// in dynamic programing we genenrally dont give the array we 
 		// store it in the form of pointers
 		
 	}delete [] ptr;
 	ptr=NULL;



 	return 0;
 }