#pragma once
#include"header.h"
int main()
{

	//Mouse();

	//Ticket_read();
	
	//Member_read();

	char doc[100000];
	strcpy(doc, Bus_read("Bus.txt"));
	char* token = NULL;
	char tmp2[] = " ,\t\n";
	char tmp[1000];

	strcpy(tmp, strtok(doc, tmp2));

	token = strtok(tmp, tmp2);

	//printf("%s ", tmp[0]);
	while (token != NULL)
	{
		printf("token = %s", token);
		putchar('\n');
		token = strtok(NULL, tmp2);
	}
	//printf("%s ", tmp[0]);
	//printf("%s ", tmp[1]);

	
	//LoginUi();

	//modifyUi();
	//changeUi();
	//inquiryUi();
	//ExClick();
}