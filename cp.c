#include "types.h"
#include "user.h"
#include "stat.h"
#include "fcntl.h"

int main(int argc, char *argv[]) {
	int fd1 = open(argv[1], O_RDONLY), fd2 = open(argv[2], O_WRONLY|O_CREATE);
	int n;
	char buf[1024];
	while((n=read(fd1, buf, sizeof(buf)))>0) {
		write(fd2, buf, strlen(buf));
	}
	exit();
}
