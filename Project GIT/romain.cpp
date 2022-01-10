#include<iostream>
using namespace std;

int main() {
	
	char c[20];
	cin >> c;

	int a = 0;

	for (int i = 0; i < strlen(c); i++)
		if (c[i] == 'a')
			a++;
	int kk;

	return 0;
}