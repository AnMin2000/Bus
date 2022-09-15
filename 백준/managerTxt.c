#pragma once
#include"header.h"

void Manager_read()
{
	FILE* fp = fopen("Manager.txt", "r");

	while (!feof(fp)) {
		fscanf(fp, "%s %s", manager[managerCount].email, manager[managerCount].pw);
		managerCount++;
	}
	fclose(fp);
}
void Manager_write() {
	FILE* fp = fopen("Manager.txt", "w");

	for (int i = 0; i < managerCount; i++) {
		fprintf(fp, "%s %s", manager[i].email, manager[i].pw);
		fprintf(fp, "\n");
	}
	fclose(fp);
}
void Manager_append(Manager manager)
{
	FILE* fp = fopen("Manager.txt", "a");

	fprintf(fp, "%s %s", manager.email, manager.pw);
	fprintf(fp, "\n");
	fclose(fp);
}