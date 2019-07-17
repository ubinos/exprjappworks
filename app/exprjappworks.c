#include <ubinos.h>
#include <exprjlib.h>

#if (INCLUDE__APP__exprjappworks == 1)

#include <stdio.h>

int appmain(int argc, char * argv[]) {
	int r;

	(void) r;

	printf("\n\n\n\r");
	printf("================================================================================\n\r");
	printf("exprjappworks (build time: %s %s)\n\r", __TIME__, __DATE__);
	printf("================================================================================\n\r");
	printf("\n\r");
	printf("\n\r");

	int a = 7;
	int b = 3;

	for (unsigned int i = 0;; i++) {
		printf("exprjappworks ! (%u)\n\r", i);

#if !(EXPRJLIB__EXCLUDE_MYADD == 1)
		printf("   %8d myadd      %8d = %8d\n\r", a, b, myadd(a, b));
#endif /* !(EXPRJLIB__EXCLUDE_MYADD == 1) */

#if !(EXPRJLIB__EXCLUDE_MYSUBTRACT == 1)
		printf("   %8d mysubtract %8d = %8d\n\r", a, b, mysubtract(a, b));
#endif /* !(EXPRJLIB__EXCLUDE_MYSUBTRACT == 1) */

		printf("\n\r");

		a++;
		b++;

		bsp_busywaitms(1000);
	}

	return 0;
}

#endif /* (INCLUDE__APP__exprjappworks == 1) */

