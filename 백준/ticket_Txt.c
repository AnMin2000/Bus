#pragma once
#include"header.h"
//void Ticket_read() {
//	FILE* fp = fopen("Ticket.txt", "r");
//
//	while (!feof(fp)) {
//		fscanf(fp, "", );
//		
//	}
//	fclose(fp);
//}
//void Ticket_write() {
//	FILE* fp = fopen("Ticket.txt", "w");
//
//	for (int i = 0; i < count - 1; i++) {
//		fprintf(fp, "%s %s %s %s %s %d %d", member[i].email, member[i].pw, member[i].number, member[i].start_region, member[i].end_region, member[i].month, member[i].day);
//		fprintf(fp, "\n");
//	}
//	fclose(fp);
//}
//void Ticket_append(Book member) {
//	FILE* fp = fopen("Ticket.txt", "a");
//
//	fprintf(fp, "%s %s %s %s %s %d %d", member.email, member.pw, member.number, member.start_region, member.end_region, member.month, member.day);
//	fprintf(fp, "\n");
//	fclose(fp);
//}