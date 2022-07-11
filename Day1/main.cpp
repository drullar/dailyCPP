#include <iostream>
#include <iterator>
#include <cstring>
using namespace std;

void arrayPtrIteration() {
	int exampleArr[9] = {1,2,3,4,5,6,7,8,9};
	int* pbegin = begin(exampleArr), * pend = end(exampleArr);
	// pend is pointer one past the end of the array meaning *pend = exampleArr[10];
	while (pbegin != pend && *pbegin >= 0) {
		cout << pbegin << endl;
		pbegin++;
	}
}

int cStyleString() {
	char c1[] = "A string example";
	char c2[] = "B string example";
	
	char *cp = c1;
	//concat the two arrays;
	char newArr[35];
	//strcpy(newArr, c1);
	//strcat(newArr, " ");
	//strcat(newArr, c2);
	//char* np = newArr;
	//while (*np) {
	//	cout << *np << endl;
	//	np++;
	//}
	return 0;
}

string bratPurger(string input) {
	string output = "";
	const char* str = input.c_str();
	while (*str) {
		if (*str == 'b') {
			if (*(str++) == 'r') {
				if (*(str++) == 'a') {
					if (*(str++) == 't') {
						str += 4;
						continue;
					}
				}
			}
		}
		output += *str;
		str++;
	}
	// EPIC FAIl
	return output;
}

int main() {
	
	cout << bratPurger("brat dai edna mastika");

	return 0;
}