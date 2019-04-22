#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream ct1, ct2;
	ofstream x;
	char c1[302], c2[302], c3[302];

	ct1.open("plaintext1");
	ct1.read(c1, 300);
	ct1.close();

	ct2.open("xor");
	ct2.read(c2, 300);
	ct2.close();
	
	for (int i = 0; i < 300; ++i) {
		c3[i] = c1[i] ^ c2[i];
	}

	x.open("plaintext2");
	x.write(c3, 300);
	x.close();
	
	return 0;
}