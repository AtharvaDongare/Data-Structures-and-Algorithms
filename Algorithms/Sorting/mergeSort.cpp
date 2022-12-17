#include<iostream>
#include"arrayOps.h"

using namespace std;

class merge {
	int size;
	int * arr;
	
	private:
	merge();
	int getSize();
	int * getArr();
	void setSize(int size_);
};

merge::merge(){
	size = -1;
	arr = NULL;
}

int merge::getSize(){
	return size;
}


int* merge::getArr(){
	return arr;
}

void merge::setSize(int size_){
	size = size_;
}

int main (){
		
}
