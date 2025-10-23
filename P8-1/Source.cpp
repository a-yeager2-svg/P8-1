#include <iostream>
#include <string>

using namespace std;

int countCharacter(string str);
char input;

int main() {
	string str;
	cout << "Enter a string: " << endl;

	getline(cin, str); 
	int count = countCharacter(str);
	cout << "Number of characters in this string: " << count << endl;
	return 0;
}


int countCharacter(string str) {
	return str.length();
}