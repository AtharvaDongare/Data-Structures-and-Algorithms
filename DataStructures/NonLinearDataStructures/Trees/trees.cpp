#include<iostream>
using namespace std;


class Trees{
	public:
	void helloWorld();
};


void Trees::helloWorld(){
	cout << "Hello World!" << endl;
}


int main (){
	Trees t1;
	t1.helloWorld();
}
