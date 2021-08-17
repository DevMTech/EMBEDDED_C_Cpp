/*	

strstr	
	char * strstr ( const char * firstStr, const char * secondStr );
			firstStr is the string to scanned
			secondStr is the string to search in firstStr.
	It returns the pointer to the first occurrence place in firstStr of secondStr. 
	If secondStr is not found in firstStr, it returns one null pointer (NULL = 0).
	https://www.codevscolor.com/c-strstr-example


strtok	
	char * strtok ( char * str, const char * delimiters );
	str
		C string to truncate. Notice that this string is modified 
		by being broken into smaller strings (tokens).
		Alternativelly, a null pointer may be specified, in which case the function 
		continues scanning where a previous successful call to the function ended.
	delimiters
		C string containing the delimiter characters.
		These can be different from one call to another. 
	If a token is found, it returns a pointer to the beginning of the token.
	Otherwise, it returns a null pointer.
	A null pointer is always returned when the end of the string 
	(i.e., a null character) is reached in the string being scanned.
	https://www.cplusplus.com/reference/cstring/strtok/
	https://www.codevscolor.com/c-split-string-strtok
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char* str1 = "Hello World!!";
	char str2[] = "World";
	char* str3 = "Universe";
	printf("\n \'%s\' in \'%s\' is located in %u memory address", str2, str1, strstr(str1, str2));
	printf("\n \'%s\' in \'%s\' is located in %u memory address\n\n", str3, str1, strstr(str1, str3));
	
	
/*************************************************************************************************************************/	
	
    // char* str = "one,two,three"; // ALSO WORKS
    // char* delim = ","; // ALSO WORKS
    
    char str[] = "one,two-three:four+five";
    char* delim = ",-:+";
    char* tokenPtr = strtok(str, delim);

    while (tokenPtr != NULL)
    {   printf("\n\t%s\n", tokenPtr);
        tokenPtr = strtok(NULL, delim);
    }

/*************************************************************************************************************************/	

	
	return 0;
}
