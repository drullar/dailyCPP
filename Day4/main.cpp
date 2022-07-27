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
	return 0;
}