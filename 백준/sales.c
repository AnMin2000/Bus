#pragma once
#include"header.h"
void salesUi()
{
	int cnt = 0;
	int* arrScore = 0;

	printf("학생 수를 입력하세요 : ");
	scanf_s("%d", &cnt);

	arrScore = (int*)malloc(sizeof(int) * cnt);  //메모리 동적할당 받기

	for (int i = 0; i < cnt; i++) {
		printf("%d번 학생 점수 입력 : ", i + 1);
		scanf_s("%d", arrScore + i);
	}

	system("cls");

	for (int i = 0; i < cnt; i++) {
		printf("%d번 학생 점수 : %d점\n", i + 1, arrScore[i]);
	}

	for (int i = 10; i > 0; i--) {
		printf("%3d │", i * 10);  //3d 자릿수 맞추기 최대 100점 세자리이므로 3d
		//i를 10부터 시작, i에 10을 곱하여 점수를 표현 
		for (int j = 0; j < cnt; j++) {
			int  num = arrScore[j] / 10;  //i와 값을 비교하기 위해 점수를 10으로 나눠줌
			if (num >= i) {  //점수를 10으로 나눈 값이 i보다 크거나 같을 때
				if (num == i) { printf("  ┌┐ "); }  //같으면 시작을 표시하는 ┌┐ 기호 출력
				else { printf("  ││ "); }  //0점을 만나기 전까지 ││ 기호 출력
			}
			else {
				printf("     ");
			}
		}
		printf("\n");
	}

	printf("%3d └─", 0);  //0점 표시
	for (int i = 0; i < cnt; i++) {
		if (arrScore[i] != 0) {  //0점이 아닌 점수가 입력된 부분에만 ─┴┴─ 기호로 출력
			printf("─┴┴─ ");
		}
		else {
			printf("─────");  //0점이 입력된 부분에는 ───── 기호로 출력
		}
	}

	printf("\n");
	printf("      ");
	for (int i = 0; i < cnt; i++) {
		printf(" %d번 ", i + 1);
	}
	printf("\n");

	printf("==>   ");
	for (int i = 0; i < cnt; i++) {
		printf(" %d점", arrScore[i]);
	}
	printf("\n");
	free(arrScore);  //메모리 해제 

	return 0;
}