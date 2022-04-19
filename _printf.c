#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h> 
#include "main.h"

int _printf(const char * str, ...)
{
	va_list vl;
	int i = 0, j=0;
	char buff[100]={0}, tmp[20];
	char * str_arg;
		  
	va_start( vl, str );
	while (str && str[i])
	{
		if(str[i] == '%'){
			i++;
			switch (str[i]) {
				/* Convert char */
				case 'c': {
					buff[j] = (char)va_arg( vl, int );
					j++;
					break;
					  }
				
				/* copy string */
				case 's': {
					str_arg = va_arg( vl, char* );
					strcpy(&buff[j], str_arg);
					j += strlen(str_arg);
					break;
					  }
			}
		}
		else {
			buff[j] =str[i];
			j++;
		}
		i++;
	}
	fwrite(buff, j, 1, stdout);
	va_end(vl);
	return j;
}
