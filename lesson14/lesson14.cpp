#include <iostream>

using namespace std;


int kub(int num)
{
	return num * num * num;
}

int quvvet(int num1, int derece)
{
	int hasil = 1;
	for (int i = 0; i < derece; i++)
	{
		hasil *= num1;
	}
	return hasil;
}

int boyuk(int numm1, int numm2) {
	if (numm1 > numm2) {
		return  numm1;
	}
	else {
		return numm2;
	}
}
int menfiMusbet(int x) {
	if (x < 0) {
		return 1;
	}
	else {
		return 0;
	}
}
void kvadrat(int teref, char d) {
	for (int i = 0; i < teref; i++)
	{
		for (int j = 0; j < teref; j++)
		{
			cout << d;
		}
		cout << endl;
	}
}

int ededlerarasindacem(int q, int w) {
	int cem = 0;
	for (int i = q; i < w + 1; i++)
	{
		cem += i;

	}return cem;
}
int sade(int e) {
	    if (e == 2) {
		return 0;
			}
		for (int i = 2; i < e; i++)
		{
			
			if (e%i!=0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
}
int faktorial(int a) {
	int hasil = 1;
	for (int i = 1; i < a+1; i++)
	{
		hasil *= i;
	}
	return hasil;
}
double toplama(double b, double c) {
	return b + c;
}

double cixma(double b, double c) {
	return b - c;
}

double vurma(double b, double c) {
	return b * c;
}

double bolme(double b, double c) {
	return b / c;
}
void kalkulyator(double b, double c, int secim) {
	if (secim == 1) {
		cout << toplama(b, c) << endl;
	}
	else if (secim == 2) {
		cout << cixma(b, c) << endl;
	}
	else if (secim == 3) {
		cout << vurma(b, c) << endl;
	}
	else if (secim == 4) {
		cout << bolme(b, c) << endl;
	}
}
int enboyuk(int massiv[],int size) {
	int enboyuk = massiv[0];
	for (int i = 1; i < size; i++) {
		if (massiv[i] > enboyuk) {
			enboyuk = massiv[i];
		}
	}
	return enboyuk;
}

int main()
{
	cout << "\ntask1" << endl;
	int num;
	cin >> num;
	int kubf = kub(num);
	cout << kubf;

	cout << "\ntask2" << endl;
	int numm1, numm2;
	cin >> numm1 >> numm2;
	int boyukf = boyuk(numm1, numm2);
	cout << boyukf;

	cout << "\ntask3" << endl;
	int x;
	cin >> x;
	int menfiMusbetf = menfiMusbet(x);
	cout << menfiMusbetf;

	cout << "\ntask4" << endl;
	double b, c;
	int secim;
	cin >> b;
	cin >> c;
	cout << "1-toplama,2-cixma,3-vurma,4-bolme ";
	cin >> secim;
	kalkulyator(b, c, secim);

	cout << "\ntask5" << endl;
	int teref;
	cin >> teref;
	char d;
	cin >> d;
	kvadrat(teref, d);

	cout << "\ntask6" << endl;
	int e;
	cin >> e;
	int sadef = sade(e);
	cout << sadef;

	cout << "\ntask7" << endl;
	int a;
	cin >> a;
	int faktorialf = faktorial(a);
	cout << faktorialf;

	cout << "\ntask8" << endl;
	int num1, derece;
	cin >> num1 >> derece;
	int quvvetf = quvvet(num1, derece);
	cout << quvvetf;


	cout << "\ntask9" << endl;
	int q, w;
	cin >> q >> w;
	int ededlerarasindacemf = ededlerarasindacem(q, w);
	cout << ededlerarasindacemf;

	cout << "\ntask10" << endl;
	int massiv[5] = {};
	int size;
	cin >> size;
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		massiv[i] = rand() % 10;
		cout << massiv[i];
	}
	int enboyukf = enboyuk(massiv,size);
	cout << enboyukf;



}