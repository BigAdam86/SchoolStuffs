/*
Uppgift 5.
This code takes two strings and combines them into one.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* create_headline(const char *s1, const char *s2) {
	char *result = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	strcpy(result, s1);
	strcat(result, s2);

	return result;
}


int main()
{
	char *headline = "";
	char *title = "Nackademin C/C++";
	char *subtitle = "Year 1";
	headline = create_headline(title, subtitle);

	printf("%s\n", headline);

	return 0;
}
