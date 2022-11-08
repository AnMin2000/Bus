#pragma once
#include"header.h"
void Member_read() { 
	FILE* fp = fopen("Member.txt", "r");

	while (!feof(fp)) {
		fscanf(fp, "%s %s %s", member[count].email, member[count].pw, member[count].number);
		count++;
	}
	fclose(fp);
}
void Member_write() {
	FILE* fp = fopen("Member.txt", "w");

	for (int i = 0; i < count - 1; i++) {
		fprintf(fp, "%s %s %s", member[i].email, member[i].pw, member[i].number);
		fprintf(fp, "\n");
	}
	fclose(fp);
}
void Member_append(Book member) {
	FILE* fp = fopen("Member.txt", "a");

	fprintf(fp, "%s %s %s", member.email, member.pw, member.number);
	fprintf(fp, "\n");
	fclose(fp);
}