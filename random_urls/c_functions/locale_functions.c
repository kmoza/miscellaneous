#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	//set c locale
	setlocale(LC_ALL,"");

	const struct lconv* const current_locale = localeconv();

	printf("In the current locale, the default currency symbol is : %s\n", current_locale->currency_symbol);

	return EXIT_SUCCESS;

}
