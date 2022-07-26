#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> populateVector() {
	vector<int> vec;
	for (int i = 0; i < rand() % 10; i++) {
		vec.push_back(rand() % 100);
	}
	return vec;
}

void conditionalOperatorOddNum(vector<int>* ptr) {
	for (int& i : *ptr) {
		if (i % 2 == 1) {
			cout << "before " << i << endl;
			i *= 2;
			cout << "after " << i << endl;
		}
		else
			cout << "normal " << i << endl;
	}
}

void outPassOrNotConOperator(vector<int>* ptr) {
	// I find this way too complicated for such a simple task
	for (int& i: *ptr) {
		cout << ((i < 60) ? "fail" : (i > 90) ? "high pass" : (i >= 60 && i <= 75) ? "low pass" : "pass") << " : " << i << endl;
	}
	//alternative and more readable way to do it
	for (int& i: *ptr) {
		if (i > 90)
			cout << "High pass :" << i << endl;
		else if (i >= 60 && i <= 75)
			cout << "Low pass : " << i << endl;
		else if (i < 60)
			cout << "Fail : " << i << endl;
		else
			cout << "Pass: " << i << endl;
	}
}

int main() {
	vector<int> vec = populateVector();
	vector<int>* ptr = &vec;
	outPassOrNotConOperator(ptr);

	//conditionalOperatorOddNum(ptr);
	//cout << endl;
	//for (int i : vec) {
	//	cout << i << endl;
	//	}
	return 0;
}