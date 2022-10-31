/****************************************
 * C-ploration 4 for CS 271
 * 
 * [NAME] $YOUR_NAME$
 * [TERM] FALL $YEAR$
 * 
 ****************************************/
#include "parser.h"

/* Function: strip
 * -------------
 * remove whitespace and comments from a line
 *
 * s: the char* string to strip
 *
 * returns: the stripped char* string
 */
char *strip(char *s){	

	unsigned int x = strlen(s) + 1;

	char s_new[x];

	unsigned int line_num = 0;

	for (char *s2 = s; *s2; s2++) {
		if (*s2 == '/' && *(s2 + 1) == '/') {
			break;
		} else if (!isspace(*s2)) {
			s_new[line_num++] = *s2;
		}		
	}

	s_new[line_num] = '\0';

	strcpy(s, s_new);
	
    return s;	
}

/* Function: parse
 * -------------
 * iterate each line in the file and strip whitespace and comments. 
 *
 * file: pointer to FILE to parse
 *
 * returns: nothing
 */
void parse(FILE * file){
	
	char line[MAX_LINE_LENGTH] = {0};

	unsigned int line_num = 0;

	while (fgets(line, sizeof(line), file)) {

		strip(line);

		if (*line == NULL) {

		} else {

		printf("%s\n", line);
		
		}

		line_num++;
	}
	
}