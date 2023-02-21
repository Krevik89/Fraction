#include "Fract.h"

void Fract::fractionAdd(int a, int b, int a1, int b1) {
	if (b != 0 && b1 != 0) {
		if (b == b1) {
			cout << a + a1 << endl
				<< "--" << endl
				<< b;
		}
		else {
			cout << a + a1 << endl
				<< "--" << endl
				<< b * b1;
		}
	}
}

void Fract::fractionSub(int a, int b, int a1, int b1) {
	if (b == b1) {
		cout << a - a1 << endl
			<< "--" << endl
			<< b;
	}
	else {
		cout << a - a1 << endl
			<< "--" << endl
			<< b * b1;
	}
}

void Fract::fractionMult(int a, int b, int a1, int b1) {
	if (b != 0 && b1 != 0) {
	cout << a * a1 << endl
		<< "--" << endl
		<< b * b1;
	}
}

void Fract::fractionDiv(int a, int b, int a1, int b1) {
	if (b != 0 && b1 != 0) {
		cout << a * b1 << endl
			<< "--" << endl
			<< b * a1;
	}
}
