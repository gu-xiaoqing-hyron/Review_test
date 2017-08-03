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
	/** remove old line */
	int test = 0;
	
	printf("main test b=%d\n", test);
	
	l_func(test);
	
	/** test */
	l_func_new_changed(test);
	
	return 0;
}
