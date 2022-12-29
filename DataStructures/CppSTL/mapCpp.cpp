#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
	map<int , int> m1;
	string s1 = "a quick brown fox jumped over the sleeping dog" ;
	
	for (int i =0 ; i<s1.size() ; i++ )
		m1[s1[i]] = 0 ;
	
	cout << m1.size() << endl << endl ;

	for (int i =0 ; i<s1.size() ; i++ ){
		m1[s1[i]] ++ ;
	}

	map<int , int> :: iterator it;
	
	for (it = m1.begin() ; it != m1.end() ; ++it)
		cout << it -> first << "\t" << it -> second >> endl;
	cout << endl ;


}
