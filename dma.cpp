#include <iostream>
using namespace std;
// dynamic memory aloocation
int main(){
	int * ptr=new int; 
	// this is the syntax used for allocating dynamic memory
	*ptr=40;
	// and this is how we used to allocate the value to that bucket with 
	// the help of pointers

	cout<<*ptr<<endl;
	// this is known as derefer used to  get the address of the bucket 
	// and the value also


	float *fptr=new float;
	*fptr=46.34;
	cout<<*fptr;



	return 0;
	
} 