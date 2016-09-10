#include <stdio.h>
#include <string.h>

// this function is used to judge pointer is null or not
int func(char* pStr)
{
	if (NULL == pStr)
		return 0;
	else
		return 1;
}

int main() 
{
	printf("output is: %d\n", func(NULL));
	return 0;
}
