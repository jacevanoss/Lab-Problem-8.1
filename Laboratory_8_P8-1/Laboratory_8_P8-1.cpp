/* Date: 10/24/2024
* Name: Jace Van Oss
* File: Laboratory_8_P8-1.CPP
*
* Description:  program that counts the number of vowels in a string from the command line
*/

#include <iostream>
#include <string>

using namespace std;

int countCharacter(string str);

int main() {
	string test = "test";
	cout << countCharacter(test);

	return 0;
}

int countCharacter(string str) {
	return str.length();
}