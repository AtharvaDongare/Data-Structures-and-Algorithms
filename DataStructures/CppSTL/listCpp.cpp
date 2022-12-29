#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void showlist (list <int> list_ ){

	list <int> :: iterator itr; 

	for (itr = list_.begin() ; itr!= list_.end() ; ++itr){
		cout << *itr << " " ;
	}
	cout << endl << endl ; 
}


int main (){
	list <int> l1,l2;
	
	cout << "List is an implementation of the data structure doudbly linked list" << endl << endl;

	for (int i=0 ; i<10 ; i++){
		l1.push_front(i*2); // Adds the elements to the 
		l2.push_back(i*3); // Adds the elements to the end of the list
	}
	
	cout << "Printing the list l1 : ";
	showlist(l1);
	cout << "Printing the list 12 : ";
	showlist(l2);
	
	cout << endl;
	cout << "For List 1 " << endl;
	cout << "Front : " << l1.front() << endl;
	cout << "Back : " << l1.back() << endl;

	cout << endl;
	cout << "For List 2 " << endl;
	cout << "Front : " << l2.front() << endl;
	cout << "Back : " << l2.back() << endl << endl;

	cout << "Popping the first element from list2 : ";
	l2.pop_front() ;
	showlist(l2);

	cout << "Popping the last element from list 1 : ";
	l1.pop_back() ;
	showlist(l1);

	cout << "Reversing list l2 : ";
	l2.reverse();
	showlist(l2);
	
	cout << "Sorting list l1 : " ;
	l1.sort();
	showlist(l1);
}
