#include <stdio.h>
int fac(int);
int fib(int);

int main() {
	printf("factorial= %d\n", fac(5));
	printf("fibonanci= %d", fib(7));
}

int fac(int n){
	int facnum;
	//base case
	if(n==0) return 1; //0!=1
	//recursive
	facnum=fac(n-1);
	//combine
	return n*facnum;
}
int fib(int n){
	int t;
	//base case
	if(n==1) return 1;
	if(n==2) return 1;
	//recursive
	t = fib(n-1) + fib(n-2);
	return t;
}
