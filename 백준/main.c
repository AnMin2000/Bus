#pragma once
#include"header.h"
int main()
{
	/*Mouse();
	Member_read();
	Ticket_read();*/
	//LoginUi();

	char* doc = Bus_read("Bus.txt");

	char inforLine[9][10];
	char s[10];

	int i = 0;
	int stringCount = 0;
	int LineCount = 0;

	while (doc[i] != NULL)
	{
		if ( doc[i] == 32) {
			strcpy(inforLine[LineCount], s);
			stringCount = 0;
			LineCount += 1;
		}
		else if (doc[i] == 10) {
			strcpy(inforLine[LineCount], s);
			stringCount = 0;
			LineCount = 0;
		}
		else if (doc[i] == 13) {}
		else {
			s[stringCount] = doc[i];
			stringCount += 1;
			s[stringCount] = '\0';
		}
		i++;
	}
}