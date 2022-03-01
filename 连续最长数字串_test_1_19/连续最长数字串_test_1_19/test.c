#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	//char str[] = "abcd1233465674545ed1254272372347841789472ss123456789";
	char str[1000] = { '\0' };
	char num1[1000] = { '\0' };
	char num2[1000] = { '\0' };
	char* rnum = NULL;
	int sz1 = 0;
	int sz2 = 0;
	
	gets(str);
	
	for (int i = 0; i < sizeof(str) / sizeof(str[0]); ++i) {

		if (str[i] <= '9' && str[i] >= '0') {

			if (sz1 >= sz2) {

				while (str[i] <= '9' && str[i] >= '0') {

						num2[sz2++] = str[i++];
				}
			}
			else {

				while (str[i] <= '9' && str[i] >= '0') {

					num1[sz1++] = str[i++];
				}
			}
			

			if (sz2 > sz1) {

				rnum = num2;
			}
			else {

				rnum = num1;
			}

			sz1 = 0;
			sz2 = 0;
		}
	}

//	printf("%s\n", str);
//	printf("%d\n", sizeof(str) / sizeof(str[0]));

	printf("%s\n", rnum);

	return 0;
}