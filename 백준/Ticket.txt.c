#pragma once
#include"header.h"
void Ticket_read() {
	FILE* fp = fopen("Ticket.txt", "r");
	while (!feof(fp)) {
		fscanf(fp, "%s %s %s %s %d %s %s %s %s %s", 
			&ticket[ticket_count].email,
			&ticket[ticket_count].hour,
			&ticket[ticket_count].min,
			&ticket[ticket_count].grade,
			&ticket[ticket_count].seat,
			&ticket[ticket_count].money,
			&ticket[ticket_count].month,
			&ticket[ticket_count].day,
			&ticket[ticket_count].start_region,
			&ticket[ticket_count].end_region);
		ticket_count++;
		//시간,분,등급,잔여석,요금,달,일,출발지역,도착지역
	}
	strcpy(ticket[ticket_count - 1].month, "0");
	strcpy(ticket[ticket_count - 1].day, "0");
	strcpy(ticket[ticket_count - 1].grade, "0");
	fclose(fp);
}
void Ticket_write() {
	FILE* fp = fopen("Ticket.txt", "w");

	for (int i = 0; i < ticket_count - 1; i++) {
		fprintf(fp, "%s %s %s %s %d %s %s %s %s %s", ticket[i].email, ticket[i].hour, ticket[i].min, ticket[i].grade, ticket[i].seat, ticket[i].money,
			ticket[i].month, ticket[i].day, ticket[i].start_region, ticket[i].end_region);
		fprintf(fp, "\n");
	}

	fclose(fp);
}
void Ticket_append(Ticket T) {
	FILE* fp = fopen("Ticket.txt", "a");
	
	//strcpy(ticket[ticket_count - 1].email, "0");
	//strcpy(ticket[ticket_count - 1].start_region, "0");
	//strcpy(ticket[ticket_count - 1].end_region, "0");
	//strcpy(ticket[ticket_count - 1].grade, "0");
	
	fprintf(fp, "%s %s %s %s %d %s %s %s %s %s", loginEmail, T.hour, T.min, T.grade, T.seat, T.money,
		T.month, T.day, T.start_region, T.end_region);
	fprintf(fp, "\n");
	fclose(fp);
}