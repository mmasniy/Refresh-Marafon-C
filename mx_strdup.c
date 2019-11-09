#include <stdlib.h>

int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);

char *mx_strdup(const char *str) {
	char *newstr = mx_strnew(mx_strlen(str));
	
	if (newstr == NULL)
		return NULL;
	return newstr ? mx_strcpy(newstr, str) : NULL;
}
