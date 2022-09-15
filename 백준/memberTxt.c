#pragma once
#include"header.h"
void Member_read() { 
	FILE* fp = fopen("Member.txt", "r");

	while (!feof(fp)) {
		fscanf(fp, "%s %s %s %s %s %d %d", member[count].email, member[count].pw, member[count].number, member[count].start_region, member[count].end_region, &member[count].month, &member[count].day);
		count++;
	}
	fclose(fp);
}
void Member_write() {
	FILE* fp = fopen("Member.txt", "w");

	for (int i = 0; i < count - 1; i++) {
		fprintf(fp, "%s %s %s %s %s %d %d", member[i].email, member[i].pw, member[i].number, member[i].start_region, member[i].end_region, member[i].month, member[i].day);
		fprintf(fp, "\n");
	}
	fclose(fp);
}
void Member_append(Book member) {
	FILE* fp = fopen("Member.txt", "a");

	fprintf(fp, "%s %s %s %s %s %d %d", member.email, member.pw, member.number, member.start_region, member.end_region, member.month, member.day);
	fprintf(fp, "\n");
	fclose(fp);
}