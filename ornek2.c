#include <stdio.h>
/* gcc ornek2.c -o ornek2 -fno-stack-protector */

int main(int argc, char **argv)
{
	char *name;
	char *command;
	name=(char *)malloc(10);
	command=(char *)malloc(128);
	printf("Enter your name:");
	gets(name);
	printf("Hello %s\n",name);
	system(command);
	return 0;
}
