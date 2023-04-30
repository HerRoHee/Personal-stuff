/* Create a programme that will find smallest number m, that is greater or equal to number n 
that can be written as m = k^l using reccursive function. Number n is entered by user.
note: (k >= 2 && l >= 2) */
#include<iostream>

int reccurPower(int, int);
void reccur(int, int, int);

int main() {
	int n; while (std::cout << "Enter n: ", std::cin >> n, n < 0);

	reccur(2, 2, n);

	system("pause>nul");
	return 1;
}

int reccurPower(int k, int l) {
	if (l == 1) return k;
	return k * reccurPower(k, l - 1);
}

void reccur(int k, int l, int m) {
	int power = reccurPower(k, l);

	if (power < m) reccur(k, l + 1, m);
	else if (sqrt(m) + 1 < k) reccur(2, 2, m + 1);
	else if (power > m) reccur(k + 1, 2, m);
	else {
		std::cout << "The smallest natural number is: ";
		std::cout << k << "^" << l << " = " << m;
		return;
	}
}