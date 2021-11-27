#include "types.h"
#include "user.h"

int main(int argc, char *argv[]) {
	int a = atoi(argv[1]), b = atoi(argv[2]);
	int c=0;
	int* ptr;
	ptr = &c;
	printf(1, "%d\n", *ptr);
	switch(fork()) {
		case 0:
			*ptr = a+b;
			exit();
		default:
			wait();
			printf(1, "%d\n", c);
	}
	exit();
}

