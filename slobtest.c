#include<studio.h>
#include<linux/kernel.h>
#include<sys/syscall.h>
#include<unistd.h>

int main() {

    long int claimed = syscall(313);
    long int free = syscall(314);
	printf("Free: %ld (bytes)\n", free);
	printf("Claimed: %ld (bytes)\n", claimed);

	return 0;
}