#define _USE_MATH_DEFINES
#include <fstream>
#include <iostream>
#include <math.h>
#include <string>
using namespace std;
ifstream f("in.in");
ofstream g("out.out");

float mu, m, ang, a, N; int sol;
string question;

float calcA(float x, float y, float z) {
	int A;
	A = (x * 10 * sin(y * M_PI / 180) * z - (x * 10) * cos(y * M_PI / 180)) / x;
	A = fabsf(A);
	return A;
}

float calcMU(float x,float y, float z) {
	int MU;
	MU = (z * x - (10 * x) * cos(y * M_PI / 180)) / (-x * 10) * sin(y * M_PI / 180);
	MU = fabsf(MU);
	return MU;
}

float calcM(float x,float y, float z) {
	int M;
	M = (x);
	M = fabsf(M);
	return M;
}

float clacN(float x, float y, float z) {
	int N;
	N = (x);
	N = fabsf(N);
	return N;
}

float calcAng(float x, float y,float z) {
	int Ang;
	Ang = (x);
	return Ang;
}

int main() {
	typedef enum {
		szog,
		gyorsulas,
		surlodas,
		tomeg,
		nyomoero,
	} questions;

	cout << "Add meg mit akarsz kiszamolni";
	cin >> sol;

	switch (sol) {
	case szog:
		cout << "a szoget valasztottad. Add meg a kovetkezo adatokat a megoldashoz: " << endl;
		cout << "A test tomege: ";
		cin >> m;
		cout << "A gyorsulast: ";
		cin >> a;
		cout << "Es a surlodasi egyutthatot: ";
		cin >> mu;
		cout << "A megoldas: " << calcAng(m, ang, mu);
		break;
	case gyorsulas:
		cout << "a gyorsulast valasztottad. Add meg a kovetkezo adatokat a megoldashoz: " << endl;
		cout << "A test tomege: ";
		cin >> m;
		cout << "A szoget: ";
		cin >> ang;
		cout << "Es a surlodasi egyutthatot: ";
		cin >> mu;
		cout << "A megoldas: " << calcA(m, ang, mu);
		break;
	case surlodas:
		cout << "a surlodast valasztottad. Add meg a kovetkezo adatokat a megoldashoz: " << endl;
		cout << "A test tomege: ";
		cin >> m;
		cout << "A szoget: ";
		cin >> ang;
		cout << "Es a gyorsulast: ";
		cin >> a;
		cout << "A megoldas: " << calcMU(m, ang, a);
		break;
	case tomeg:
		cout << "a tomeget valasztottad. Add meg a kovetkezo adatokat a megoldashoz: " << endl;
		cout << "A test tomege: ";
		cin >> m;
		cout << "A szoget: ";
		cin >> ang;
		cout << "Es a surlodasi egyutthatot: ";
		cin >> mu;
		cout << "A megoldas: " << calcM(m, ang, mu);
		break;
	case nyomoero:
		cout << "a nyomoerot valasztottad. Add meg a kovetkezo adatokat a megoldashoz: " << endl;
		cout << "A test tomege: ";
		cin >> m;
		cout << "A szoget: ";
		cin >> ang;
		cout << "Es a surlodasi egyutthatot: ";
		cin >> mu;
		cout << "A megoldas: " << calcA(m, ang, mu);
		break;

	}

}