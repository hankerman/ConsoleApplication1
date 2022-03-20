#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;


void main() 
{
	const int size = 10;
	string files[size];

	for (int i = 0; i < size; i++) {
		if (i < 4) {
			files[i] = "file" + to_string(i);
			files[i] += ".txt";
		}
		else if (i < 8) {
			files[i] = "file" + to_string(i);
			files[i] += ".png";
		}
		else {
			files[i] = "file" + to_string(i);
			files[i] += ".docx";
		}
	}
	
	for (string s : files) {
		cout << s << endl;
	}
	
	cout << ".txt"<< endl;
	for (string& s : files) {

		if (s.substr(s.find(".")) == ".txt") {
			cout << s << endl;
		}
	}
	cout << endl;
	for (string& s : files) {

		if (s.substr(s.find(".")) == ".txt") {
			s.erase(s.find("."));
			s += ".docx";
		}
	}

	for (string s : files) {
		cout << s << endl;
	}
	
}