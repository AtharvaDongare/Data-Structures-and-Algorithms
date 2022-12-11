#include<iostream>
using namespace std;

class Queue{
	public:
	void helloWorld();
	
};


void Queue::helloWorld(){
	cout << "Hello WOrld!" << endl;
}

int main (){
	Queue q1;
	q1.helloWorld();
}
