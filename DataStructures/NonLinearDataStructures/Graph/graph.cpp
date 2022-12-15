#include<iostream>
using namespace std;

class Graph{
	public:
	
	void helloWorld();
};


void Graph::helloWorld(){
	cout << "Hello World !" << endl;
}

int main (){
	Graph g1;
	
	g1.helloWorld();
}
