#include <stdio.h>

// https://stackoverflow.com/questions/2085302/printing-all-environment-variables-in-c-c
int main(int argc, char** argv, char** envp)
{
	char** env;
	for (env = envp; *env != 0; env++) {
		char* thisEnv = *env;
		printf("%s\n", thisEnv);
	}
	return 0;
}
