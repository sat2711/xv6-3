#include "types.h"
#include "user.h"
#include "proc.h"

int main(int argc, char *argv[]) {
	int pid, i=0;
	struct proc *p;
	switch(pid=fork()) {
		case 0:
			p = myproc();
			exec("ls", argv);	
			while(i>=0) {
				i++;
			}
			printf(1, "CHILD COMPLETE");
			exit();
		default:
			if(kill(pid)>=0)
			printf(1, "CHILD KILLED!\n");
	}
	exit();
}
