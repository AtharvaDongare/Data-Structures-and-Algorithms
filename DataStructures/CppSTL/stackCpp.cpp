#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void displayStack(stack <int> s1){
	stack <int> temp = s1;
	
	while (!temp.empty()) { // Checking whether the stack is empty or not
		cout << temp.top() << " "; // Printing the top element from stack
		temp.pop(); // Deleting the top element
	}
	cout << endl ;

}

int main(){
	stack <int> s1;

	cout << "Implementation of the Stack data structure" << endl;

	for (int i =0 ; i < 10 ; i++ )
		s1.push(i);
	
	cout << "Display the top element of stack : " << s1.top() << endl;; // Showing the top element from the stack
	cout << "Deleting the top element from the stack ";
	s1.pop();
	displayStack(s1);
	cout << endl;
	
}
