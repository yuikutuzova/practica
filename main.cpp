#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include<iostream>

using namespace std;

long double fact (int N){
	long double res = 1;
	for(int i = 1; i <= N; i++){
		res *= i;
	}
	return res;
}

int main(int argc, char** argv) {
	int N;
	cin >> N;
	cout << "Factorial of:" << N << " = " << fact(N);
	return 0;
}