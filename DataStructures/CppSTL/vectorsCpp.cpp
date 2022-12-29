#include<bits/stdc++.h>
#include<iostream>

using namespace std; 


int main () {
	vector<int> v1 , v2;
	cout << endl << "Vector are an implementation of array in CPP STL. Vectors are more powerful than normal arrays, since they provide dynamic memory allocation. \nPush and pop operations with requried adjustments in the array elements. We have discussed these default functions below with examples. " << endl;
	for (int i =0 ; i < 10; i++ ){
		v1.insert( v1.begin() , i);
	} 
	
	for (int j =0 ; j < 20 ; j++){
		v2.push_back(j);
	}

	for (auto num: v1){
		cout << num << " ";
	}
	
	cout << endl;

	for (int i=0 ; i <v2.size() ; i++ ){
		cout << v2[i] << " ";
	}

	cout << endl << endl << "Displaying the sizes and memory availibiity for the vector" << endl;

	cout << endl << endl;
	cout << "size() gives the total number of elements in the vector" << endl;
	cout << "Size of the Vector1: " << v1.size() << endl;
	cout << "Size of the Vector2: " << v2.size() << endl;
	
	cout << endl << endl;

	cout << "max_size() gives the maximum number of elements the vector can hold" << endl;
	cout << "Max size of the Vector1: " <<v1.max_size() << endl;
	cout << "Max size of the Vector2: " << v2.max_size() << endl;

	cout << endl << endl;

	cout << "capacity() gives the capacity of the vector" << endl;
	cout << "Capacity of the Vector1: " << v1.capacity() << endl;
	cout << "Capacity of the Vector2: " << v1.capacity() << endl;

	cout << endl << endl;

	cout << "Max size of the Vector1: " <<v1.max_size() << endl;
	cout << "Max size of the Vector2: " << v1.max_size() << endl;

	v2.resize(15);

	cout << "Size of Vector2: " << v2.size() << endl;

//	v2.shrink_to_fit();

	for (auto ptr:v2){
		cout << ptr << " ";
	}
	cout << endl;
	
	v1.erase(v1.end()) ;
	

	cout << "Displaying the element from queue" << endl << endl;
	
	cout << "Front of the queue : " << v1.front() << endl << endl ;
	
	cout << "Back of the queue : " << v1.back() << endl << endl ;
	
	cout << "at : v1.at(4) -> " << v1.at(4) << endl;

	v1.push_back(100);

	for (auto ptr:v1)
		cout << ptr << " ";
	cout << endl;


//	v1.swap(v2); // used to swap the contents of one vector with another provided they are of the same type

	
}
