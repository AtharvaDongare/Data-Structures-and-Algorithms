#include<iostream>
#include<climits>
using namespace std;

class Queue{
	private:
	int * arr;
	int head;
	int capacity;

	public:
	Queue();
	void createQueue(int size);
	void putEle(int element);
	int getEle();
	int delLatest();
	bool isFull();
	bool isEmpty();
};


Queue::Queue(){
	head = -1;
	capacity = INT_MAX;
	arr = NULL;
}


void Queue::createQueue(int size){
	arr = (int*) malloc (sizeof(int) * size);
	cout << "Created Queue with size: " << size << endl;
	return;
}

void Queue::putEle(int element){
	if (head == capacity) {
		cout << "The queue is full" << endl;
		return;
	}
	
	arr[head] = element;
	head += 1;
	cout << "Element Successfully added!" << endl;
}

int Queue::getEle(){
	return arr[head -1];
}

int Queue::delLatest(){
	int temp = arr[head -1];
	head -- ;
	cout << "Logical deletion succesfull !" << endl ;
	return temp ;
}

bool Queue::isFull(){
	if ( head == capacity -1)
		return true;
	return false;
}

bool Queue::isEmpty(){
	if ( head == -1) 
		return true;
	return false;
} 

int main (){
	Queue q1;
	
	q1.createQueue(7);
	q1.putEle(1);
	q1.putEle(2);
	q1.putEle(3);
	q1.putEle(4);
	q1.putEle(5);
	q1.putEle(6);
	q1.putEle(7);
	
	cout << q1.isFull() << endl;
	
	cout << q1.getEle() << endl;
	
	cout << q1.delLatest() << endl;
	cout << q1.delLatest() << endl;
	cout << q1.delLatest() << endl;
	cout << q1.delLatest() << endl;
	cout << q1.delLatest() << endl;
	cout << q1.delLatest() << endl;
	cout << q1.delLatest() << endl;
	cout << q1.delLatest() << endl;
	cout << q1.delLatest() << endl;
	cout << q1.delLatest() << endl;

	cout <<q1.isEmpty() << endl;

}
