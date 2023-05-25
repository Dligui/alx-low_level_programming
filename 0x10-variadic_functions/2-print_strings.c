#include "variadic_functions.h"

/**
 *print_strings : function that print strings 
 *@separator : that seperate between strings
 *@n : number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *str;

	va_start(list,n);
	for(i=0;i<n;i++)
		 {
			 str = va_arg(list, char *);
			 if (!str)
				 str = "nill";
			 if (!separator)
				 printf("%s",str);
			 else if(separator && i==0 )
				printf("%s", str);
				
			 else 
				 printf("%s%s", separator, str); 	
		}

		printf("\n");
		va_end(list);
}
