nclude <stdio.h>
/**
 * 
 */
char *_strcat(char *dest, const char *src) {
	char *result = dest;    
	while (*dest != '\0') {
		dest++;
	}
	while (*src != '\0') {
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return result;
}
