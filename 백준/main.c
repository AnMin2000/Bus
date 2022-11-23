#pragma once
#include"header.h"
int main()
{
	Mouse();
	Member_read();
	Ticket_read();
	//LoginUi();
    int counter = 0; // Used for counting
    const char s[2] = "\n"; // Used for tokenization

    // ............
    char* doc = Bus_read("Bus.txt");
    char* tmp[1000] = { 0 };
    char* token;
    token = strtok(doc, s);
    while (token != NULL) {
        fprintf(doc, "%d ", counter);
        fprintf(doc, "%s\n", token); // Add the new line character here since it is removed from the tokenization process
        counter++;
        token = strtok(NULL, s);
    }
}