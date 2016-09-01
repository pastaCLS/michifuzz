#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char line[50];
char execline[150];

int main(int argc, char **argv) {
	int i=1;
	for(i; i<argc; i++) {
		strcat(line, argv[i]);
		strcat(line, " ");
	}
	
	sprintf(execline, "zzuf %s 2>&1 | sed '{s/zzuf/michifuzz/g;s/Sam.Hocevar/pastaCLS/g;}'", line);
	system(execline);
}
