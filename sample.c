#include <stdio.h>

void l_func(int a)
{
	printf("func test\n");
	
	return;
}

/** test */
void l_func_new_changed(int c)
{
	printf("func_new test\n");
	return;
}

int main(int argc, char *argv[])
{
	int b = 0;
	
	printf("main test b=%d\n", b);
	
	l_func(b);
	
	/** test */
	l_func_new_changed(b);
	
	return 0;
}
