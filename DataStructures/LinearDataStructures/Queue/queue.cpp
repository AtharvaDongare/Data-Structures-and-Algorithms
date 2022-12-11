#include<iostream>
using namespace std;

class Queue{
//	private:
	public:
	void helloWorld();
};

void Queue::helloWorld(){
	cout << "Hello World!" << endl;
}

int main (){
	Queue q1;
	q1.helloWorld();
}
