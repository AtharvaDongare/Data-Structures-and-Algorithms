#include<iostream>
using namespace std;


#include"arrayOps.h"


class selection {
	int size;
	int * arr;
	
	public:
	selection();
	int getSize();
	int* getArr();
	void setArr(int * arr_);
	void setSize(int size_);
	void selectionSort();
	void exchangeData(int loc1, int loc2);
};

selection::selection(){
	size = -1;
	arr = NULL;
	cout << "Initiated class variables" << endl;
}

int selection::getSize(){
	return size;
}


int* selection::getArr(){
	return arr;
}

void selection::setSize(int size_){
	size = size_;
}

void selection::setArr(int* arr_){
	arr = arr_ ;
}

void selection::exchangeData(int loc1, int loc2){
	int temp = arr[loc1];
	arr[loc1] = arr[loc2];
	arr[loc2] = temp;
}

void selection::selectionSort(){
	int temp = arr[0], loc;
	cout << temp << endl;
	for (int j=0; j < size; j++){
		for (int i=0; i < size; i++){
			if (temp < arr[0]){
				loc = i;
				temp = arr[i];
				
			}
		}
	}
}


int main (){
	selection s1;
	s1.setSize(10);
	int * arr_ = createArray(s1.getSize(), s1.getArr());
	s1.setArr(arr_);
	displayArray( s1.getArr(), s1.getSize() );
	cout << isSorted(s1.getArr(), s1.getSize())<< endl ;
	s1.selectionSort();
	displayArray( s1.getArr(), s1.getSize() );
	cout << isSorted(s1.getArr(), s1.getSize())<< endl ;

}
