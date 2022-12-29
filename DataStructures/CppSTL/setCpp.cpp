#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main (){
	set <int> s1 ;
	cout << "Implementation of set Data Structure using STL." << endl  << endl ;
	for (int i =0 ; i <= 12 ; i++ ) 
		s1.insert(i%4) ;
	
	cout <<"Printing the set elements" << endl ;
	for (auto ptr:s1) 
		cout << ptr << " " ;
	cout << endl << endl ;

	cout <<"Printing the actual range with repeating numbers" << endl ;
	for (int i =0 ; i<=12 ; i++)
		cout << i%4 << " " ;
	cout << endl;

	cout << "Pointer to the beginning of the set : " << *s1.begin() << endl ;
	cout << "Pointer to the end of the set : " << *s1.end() << endl ;
	
	cout << "Printing the size of the set : " << s1.size() << endl ;


}
