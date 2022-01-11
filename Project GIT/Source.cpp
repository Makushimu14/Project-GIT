#include<iostream>
using namespace std;
void combat_noa() {
	int l = 100;
	int n = 100;
	while (l != 0 && n != 0) {
		int e = l;
		int f = n;
		l = l - rand() % 2;
		n = n - rand() % 2;
		cout << "Noa avait " << f << " Vies, il en a perdu " << f - n << " il lui en reste donc " << n << " ste nul" << endl;
		cout << "Lilian avait " << e << " Vies, il en a perdu " << e - l << " il lui en reste donc " << l << " ste chad" << endl;
	}
	if (n = 0) {
		cout << "Noa a perdu xdddd lilian est large meilleur" << endl;
	}
	else {
		cout << "Lilian a lose mais Noa est vraiment éclaté" << endl;
	}
}
int main() {
	cout << "Hello World !";
	combat_noa();
	//non
}