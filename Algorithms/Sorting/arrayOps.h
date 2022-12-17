#include<climits>
#include<iostream>
#include<cstdlib>
using namespace std;

int getRandomNumber(){
	return rand()%4;
}

void createArray(int size_, int * arr){
	arr = (int *) malloc (sizeof(int) * size_);
	for (int i=0; i < size_; i++){
		int temp = getRandomNumber(i+1);
		arr[i] = temp;
	}
}

void displayArray(int * arr){
	for (int i=0 ; i < size ; i++ ){
		cout << (arr[i]) << " ";
	}
	cout << endl;
}


void helloWorld(){
	cout << "Hello World" ;
}


bool isSorted(int * arr){
	for (int i =0; i< size-1; i++){
		if (arr[i] > arr[i+1])
			return false;
	}

	return true;
}


