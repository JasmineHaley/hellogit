#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
//strings
//declarations

string greeting="Hello";
string fname="Skye";


string fullname= fname + " Haley";
//output
cout << fullname;

//vectors

vector <char> alphabet;
vector <int> numbers= {1,2,3,4,5,6,7,8,9,10};

alphabet.push_back ('A');
numbers.pop_back ();

alphabet.push_back ('B');
numbers.pop_back ();

	for(int i=0;i < 5;i++) {
		numbers.push_back (910);
	}

// Auto


for (auto i : numbers){
	cout << i << " ";
}
return 0;
}
