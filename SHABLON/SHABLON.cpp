#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
#define N 10

template <class tipMASS> class MASSIV
{
	tipMASS mas[N];
	int K;
public:
	void init() { K = 0; }
	void push(tipMASS ob) {
		if (K == N)
		{
			cout << "MASSIV is full" << endl;
			return;
		}
		mas[K] = ob;
		cout << mas[K] << " ";


		K++;
	};

	void POISK(int i, int j) { if (i < j) cout << "искомое: " << mas[i - 1] << endl; else  cout << "ОШИБКА ВВОДА ИНДЕКСА" << endl; };
};

int main()
{
	setlocale(0, "");
	int I, S, D;
	I = rand() % 10;
	S = rand() % 10;
	D = rand() % 10;
	// INT
	MASSIV <int> ING;
	ING.init();
	for (int i = 0; i < I; i++) ING.push(rand() % 100);
	cout << endl;

	// СИМОЛ
	MASSIV <char> STK;
	STK.init();
	for (int i = 0; i < 4; i++)STK.push(rand() % 100);

	cout << endl;

	// double
	MASSIV <double> PLAV;
	PLAV.init();
	for (int i = 0; i < 7; i++) PLAV.push(rand() % 100 * 0.9);
	cout << endl;

	//поиск
	int i;
	cin >> i;
	cout << endl << "INT:" << endl;
	ING.POISK(i, I);
	cout << endl << "CHAR:" << endl;
	STK.POISK(i, S);
	cout << endl << "DOUBLE:" << endl;
	PLAV.POISK(i, D);
}
