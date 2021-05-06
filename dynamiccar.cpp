#include <iostream>
using namespace std;
class car{
public:

};

int main(){
	car *dynamicCar=new car;
	// first thing is to assign memory to the name bucket so that we can 
	//copy the car name
	char arr[]="tesla";

	(*dynamicCar).name=new char[strlen(arr)+1];
	// the 1 in the above is for the null 

	strcopy((*dynamicCar).name,arr);
	delete dynamicCar;
	dynamicCar=NULL;
	// WE HAVE TO DELTE THE DYNAMCI MEMORY BY OUR OWN 


	return 0;

}