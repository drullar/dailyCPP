#include <iostream>
using namespace std;

int main() {

	//Bit shift operators << and >>. Bitshifts the lefthand variable's bits by the right hand var
	unsigned char bits = 0233;
	cout << int(bits) << endl;
	cout << int(bits << 8) << endl; //Bitshift left by 8 bits;
	cout << int(bits >> 3) << endl; //Bitshift right by 3 bits;
	//Bitwise invertion, a.k.a NOR - ~ 
	unsigned char bits2 = 0227;
	cout << int(bits2) << endl;
	cout << ~bits2 << endl;
	//bitwise AND, OR, XOR - &, | , ^;
	cout << char(~'q' << 6) << endl;
	unsigned long ul1 = 3, ul2 = 7;
	cout << (ul1 | ul2) << endl;
	//sizeof
	//Note size of returns the value of the type in bytes;
	cout << "sizeof" << endl;
	long i = 5, *iPtr = &i;
	cout << (sizeof i) << endl << (sizeof iPtr) << endl << (sizeof * iPtr) << endl;;
	int arr[3] = { 16,15,21 };
	cout << (sizeof arr) << endl << (sizeof * arr) << endl << (sizeof "string") << endl << (sizeof 's');
	/*
	
	*/

	int x[10]; int* p = x;
	cout << sizeof(x) << " " << (sizeof(x) / sizeof(*x)) << endl;
	cout << sizeof(p) << " " << (sizeof(p) / sizeof(*p)) << endl;
	return 0;
}