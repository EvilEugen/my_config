#include<iostream>
using namespace std;
	int main(){
	cout << "Введите два числа" << endl;
	double Number1,Number2;
	while(cin >> Number1 >> Number2){
	double max = 0, min = 0;
	double smaller, larger;
	if (Number1 == Number2){
		cout << "Числа равны " << endl;
		continue; }
	else if (Number1 > Number2){
		smaller = Number2;
		larger = Number1;
		if ((larger - smaller) < (1.0/100)){
			cout << "числа почти равны" << endl;
			continue; }
		max = Number1;
		min = Number2;
		cout << "Наименьшее значение равно: " << Number2 << endl;
		cout << "Наибольшее значение равно: " << Number1 << endl; }
	else if (Number2 > Number1){
		smaller = Number1;
		larger = Number2;
		if ((larger - smaller) < (1.0/100)){
			cout << "числа почти равны" << endl;
			continue; }
		max = Number2;
		min = Number1;
		cout << "Наименьшее значение равно: " << Number1 << endl;
		cout << "Наибольшее значение равно: " << Number2 << endl; }
	}
	cout << "Цикл остановлен" << endl;
return 0;
}
