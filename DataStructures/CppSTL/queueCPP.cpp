#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void displayQueue(queue<int> q1){
	queue<int> temp = q1;

	while(!temp.empty()){  // Checking whether the queue is empty or not
		cout << temp.front() << " ";
		temp.pop(); // Popping the top element from the queue
	}
	cout << endl << endl;
}

int main () {
	queue<int> q1;
	for (int i = 0 ; i < 10 ; i++ )
		q1.push(i*4); // Adding the elements into the queue

	displayQueue(q1);
	
}  
