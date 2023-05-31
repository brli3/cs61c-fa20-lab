#include <stdio.h>

int fib(int);
 
int main(void) {
    int n;
    printf("Enter a number for Fibonacci: \n");
    scanf("%d", &n);
    printf("Fib(%d) = %d\n", n, fib(n));
}

int fib(int n) {
    int a = 0, b = 1, c = 0;
    while (n-- > 0) {
	c = a + b;
	a = b;
	b = c;
    }
    return a;
}
