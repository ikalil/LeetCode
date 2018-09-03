
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char*
toLower(char *str)
{
	char *tmp = str;
	unsigned int strLength = strlen(str);
	for(int i = 0; i < strLength; i ++){
		if(*(tmp + i ) > 64 && *(tmp + i) < 91)
			*(tmp + i) = *(tmp + i) + 32;
	}
	return str;
}

int
main(void)
{
	char *string = (char *)malloc(6 * sizeof(char));
	strncpy(string, "HELlo\0", 6);
	char *tmp = toLower(string);
	
	printf("%s\n", tmp);

	free(string);

	return 0;
}
