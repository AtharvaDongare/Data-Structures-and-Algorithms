#include<iostream>
#include<climits>

using namespace std;

class LinkedStack{
	private:
		struct list{
			int data;
			struct list *forward;
		};
		//int head;
		struct list *head;
	public:
		LinkedStack();
	void hello();
	void createStack(int element);
	void pushStack(int element);
	int popStack ();
	int topStack();
};

LinkedStack::LinkedStack(){
	head = NULL;
}


void LinkedStack::hello(){
	cout << "Hello World!" << endl;
}

void LinkedStack::createStack(int element){
	struct list *node;
	node = (struct list *) malloc (sizeof(struct list));
	
	if (head){
		cout << "A stack is already created in this object" << endl;
	       return;
	}

	node -> data = element;
	node -> forward = head;

	head = node;
}

void LinkedStack::pushStack(int element){
	if (!head){
		cout << "The stack is not defined" << endl;
		return;
	}

	struct list *node ;
	node = (struct list*) malloc (sizeof(struct list));

	node -> data = element;
	node -> forward = head;

	head = node;
	cout << "The listed data has been updated in the stack "<< endl;
}

int LinkedStack::popStack(){
	if (!head){
		cout << "The stack was not defined "<<endl;
		return INT_MAX;
	}

	int temp = head -> data;

	head = head -> forward;
	
	return temp;
}

int LinkedStack::topStack(){
	if (!head){
		cout <<" The stack is not defined" << endl;
		return INT_MAX;
	}

	return head -> data ;
}


int main (){
	LinkedStack l1;

	l1.createStack(0);

	l1.pushStack(1);
	l1.pushStack(2);
	l1.pushStack(3);
	l1.pushStack(4);
	l1.pushStack(5);

	cout << l1.topStack() << endl;

	cout << l1.popStack() << endl;
	cout << l1.popStack() << endl;
	cout << l1.popStack() << endl;
	cout << l1.popStack() << endl;
	cout << l1.topStack() << endl;
}
