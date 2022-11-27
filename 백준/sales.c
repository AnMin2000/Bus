#pragma once
#include"header.h"
void salesUi()
{
	Mouse();
	square(85, 29, 12, 1);
	int cnt = 0;
	int num;
	
	int arrScore[12] = { 91,68,74,76,54,52,57,70,64,60,79,84 };
					//   1  7  5  4  11 12 10 6  8  9  3  2 								

	cnt = 12;

	//system("cls");
	int k = 0;
	//27,5
	goto_xy(21, 5);
	for (int i = 10; i > 0; i--) {
		printf("    │");  //3d 자릿수 맞추기 최대 100점 세자리이므로 3d
		//i를 10부터 시작, i에 10을 곱하여 점수를 표현 
		for (int j = 0; j < cnt; j++) {
			num = arrScore[j] / 10;  //i와 값을 비교하기 위해 점수를 10으로 나눠줌
			if (num >= i) {  //점수를 10으로 나눈 값이 i보다 크거나 같을 때
				if (num == i) { printf("  ┌┐ "); }  //같으면 시작을 표시하는 ┌┐ 기호 출력
				else { printf("  ││ "); }  //0점을 만나기 전까지 ││ 기호 출력
			}
			else {
				printf("     ");
			}
		}
		printf("\n");
		k++;
		goto_xy(21, 5 + k);
	}

	int m = 2;
	int n = 0;
	printf("    └─");  //0점 표시
	for (int i = 0; i < cnt; i++) {
		if (arrScore[i] != 0) {  //0점이 아닌 점수가 입력된 부분에만 ─┴┴─ 기호로 출력
			goto_xy(21+3*m + 2*n, 5 + k);
			printf("─┴┴─ ");
			m++;
			n++;
		}
		else {
			printf("─────");  //0점이 입력된 부분에는 ───── 기호로 출력
		}
	}
	for (int i = 0; i < 12; i++) {
		goto_xy(28 + 5 * i, 16);
		printf("%d월", i + 1);
	}
	//24,20
	char* arr[24] = {"1월","2월","3월","4월","5월","6월","3540만원","2600만원","2700만원","2800만원","2200만원","2100만원","7월","8월","9월","10월","11월","12월","2320만원","2610만원","2460만원","2360만원","2840만원","3450만원" };
	original_table(14, 2, 6, 4, 15, 19, arr);
	square_char(15, 2, 46, 3, "매출");
	goto_xy(17, 14);
	printf("1000만원");
	goto_xy(17, 11);
	printf("2000만원");
	goto_xy(17, 8);
	printf("3000만원");
	//printf("%d", m);
	ExClick();
	//printf("\n");
	//printf("      ");
	//for (int i = 0; i < cnt; i++) {
	//	printf(" %d월 ", i + 1);
	//}
	//printf("\n");

	//printf("==>   ");
	//for (int i = 0; i < cnt; i++) {
	////	printf(" %d점", arrScore[i]);
	//}
	//printf("\n");
	//free(arrScore);  //메모리 해제 

	//return 0;
}