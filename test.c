#include "main.h"
#include <stdio.h>
int main()
{
	int len, len2;
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	 printf("%d\n%d\n", len, len2);

	len =  _printf("Character:[%c]\n", 'H');
	len2 = printf("Character:[%c]\n", 'H');

	printf("%d\n%d\n", len, len2);
	len =  _printf("String:[%s]\n", "I am a string !");
	len2 = printf("String:[%s]\n", "I am a string !");

	printf("%d\n%d\n", len, len2);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");


	printf("%d\n%d\n", len, len2);




	return (0);
}
