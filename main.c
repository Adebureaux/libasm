#include <stdio.h>
#include <inttypes.h>

char *writer(void);

int		main(void)
{
	int i = 0;
	printf("i = %d\n", i++);
	char *dst = writer();

	// printf("%p\n", dst);
	// printf("%s\n", dst);
	return 0;
}
