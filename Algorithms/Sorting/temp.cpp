#include<iostream>
#include "arrayOps.h"

using namespace std;


int main (){
	helloWorld();
	//cout << "Hello World" << endl;
	cout << endl << getRandomNumber() << endl;
	int * arr;
	arr = createArray (10 , arr);
	displayArray(arr , 10 ) ;
	cout << "Program completed" << endl;	
}
