#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char password[6] = {0};
	const char charset[] = "0123456789abcdefghijklmnopqrstuvwxyz";
	const int charset_size = sizeof(charset) - 1;
	srand(time(NULL));

	do {
		for (int i = 0; i < 5; i++)
		{
			password[i] = charset[rand() % charset_size];
		}
	}
	while (system("./101-crackme password") != 0);		        
	printf("The password is: %s\n", password);
	return(0);
}
