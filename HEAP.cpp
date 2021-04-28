#include <iostream>
using namespace std;
int main(){
	// int srr[100] this is static way
	int * arr=new int[100];
	for (int i = 0; i < 5; ++i)
	{
		/* code */
		cin>>arr[i];

	}
	// this is same method we used using to allocate 
	// in static way as we used in dynamic
	for (int i = 0; i < 5; ++i)

	{
		cout<<arr[i]<<endl;
		/* code */
	}
}