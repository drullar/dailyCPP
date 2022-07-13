#include <iostream>
#include <vector>
using namespace std;

void arrays() {
	
	int arr[] = { 1,2,3,4 };
	vector<int> vec (begin(arr), end(arr));//Initialize vector from array
	int newArr[4];
	std::copy(vec.begin(), vec.end(), newArr);
}


int main() {
	

	return 0;
}