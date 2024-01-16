#include <iostream>
using namespace std;
void swap(int &a, int &b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}
int main() {
	int m = 10, n= 20;
	cout<< "Before exchange m=" << m << " and n=" << n <<endl;
	swap(m, n);
	cout<< "After exchange m=" << m << " and n=" << n <<endl;
	return 0;
}

