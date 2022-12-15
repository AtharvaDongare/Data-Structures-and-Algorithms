#include<iostream>
#include<cstdlib>
using namespace std;


class bubbleSort{

	int *arr;
	int size;
	int randomNumber;

	public:
	bubbleSort(); 
	int getRandomNumber(int size);
	void createArray(int size);
	void displayArray();
	void bubbleSorting();
}; 

bubbleSort::bubbleSort(){
	arr = NULL;
	size = 1;
	randomNumber = -1;
}


int bubbleSort::getRandomNumber(int size_){
	return rand(); // %size_;

}

void bubbleSort::createArray(int size_){
	size = size_ ;
	cout << size << endl;
	arr = (int *) malloc (sizeof(int) * size);
	cout << "malloc done" << endl;
	for (int i=0; i < size; i++){
		int temp = this->getRandomNumber(i+1);
		cout << temp << endl;
		arr[i] = temp;
	}

	cout << "Array randomly for " << size << " elements" << endl;

}

void bubbleSort::displayArray(){
	for (int i=0 ; i < size ; i++ ){
		cout << (arr[i]) << " ";
	}
	
	cout << endl;
}


void bubbleSort::bubbleSorting(){
	int temp;
	for (int i=0; i<size-1; i++){
		if (arr[i] > arr[i+1]){
			temp = arr[i];
			arr[i] = arr[i+1]
			arr[i+1] = temp;
		}	
	}

}

int main (){
	bubbleSort b1;
	cout << b1.getRandomNumber(6) << endl;
	b1.createArray(10);
	b1.displayArray();

}


