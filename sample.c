#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	int bufferSize = 15;
	char buff[bufferSize];
	int pass = 0;

	printf("\n Enter the password : \n");
	fgets(buff, bufferSize, stdin);

	if(strncmp(buff, "thegeekstuff", bufferSize))
	{
		printf ("\n Wrong Password \n");
	}
	else
	{
		printf ("\n Correct Password \n");
		pass = 1;
	}

	if(pass)
	{
		/* Now Give root or admin rights to user*/
		printf ("\n Root privileges given to the user \n");
	}

	return 0;
}
