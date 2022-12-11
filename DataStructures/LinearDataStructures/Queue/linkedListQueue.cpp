#include<iostream>
using namespace std;

class Queue{
	private:
	struct node{
		int data;
		struct node * forward;	
	};
	struct node * head;
	struct node * tail;

	public:
	void createQueue (int element);
	void putElement (int element);
	int getElement ();
	int delElement ();		
};


void Queue::createQueue (int element){
	head = (struct node*) malloc (sizeof(struct node));
	tail = NULL;
	
	head -> data = element;
	head -> forward = tail;

	cout << "The Queue has been created!" << endl;

	return;
}

void Queue::putElement(int element){
	struct node * temp = (struct node*) malloc (sizeof(struct node));
	temp -> data = element;
	temp ->forward = NULL;
	if (!head -> forward){
		head -> forward = temp;
		tail = temp;
		return;
	}
	
	tail -> forward = temp;
	tail = temp;
}

int Queue::getElement(){
	return head -> data;
}

int Queue::delElement(){
	int temp = head -> data;
	head = head -> forward;
	return temp;
}


int main (){
	Queue q1;
	
	q1.createQueue(1);
	q1.putElement(2);
	q1.putElement(4);
	q1.putElement(5);
	q1.putElement(6);

	cout << q1.getElement() << endl;

	cout << q1.delElement() << endl;
	cout << q1.delElement() << endl;
	cout << q1.delElement() << endl;
	cout << q1.delElement() << endl;
	cout << q1.delElement() << endl;


}
