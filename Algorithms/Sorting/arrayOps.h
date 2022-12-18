#include<climits>
#include<iostream>
#include<cstdlib>
using namespace std;

int getRandomNumber(){
	return rand()%4;
}

int * createArray(int size_, int * arr){

	arr = (int *) malloc (sizeof(int) * size_);
	for (int i=0; i < size_; i++){
		int temp = getRandomNumber();
		arr[i] = temp;
		cout << arr[i] << " " ;
	}
	cout << endl;
	return arr;
}

void displayArray(int * arr, int size_){
	cout << size_ << " " << arr << endl;

	for (int i=0 ; i < size_ ; i++ ){
		cout << (arr[i]) << " ";
	}

	cout << endl;
}


void helloWorld(){
	cout << "Hello World" ;
}


bool isSorted(int * arr, int size_ ){

	for (int i =0; i< size_ -1; i++){
		if (arr[i] > arr[i+1])
			return false;
	}

	return true;
}
