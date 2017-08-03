#include <stdio.h>

void l_func(int a)
{
	printf("func test\n");
	
	return;
}

int main(int argc, char *argv[])
{
	int b = 0;
	
	printf("main test b=%d\n", b);
	
	l_func(b);
	
	return 0;
}
