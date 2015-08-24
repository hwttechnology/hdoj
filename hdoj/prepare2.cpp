#include<stdio.h>
int main()
{
	int line, a, b;
	scanf("%d", &line);
	while (line-- > 0) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
}