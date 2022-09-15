#pragma once
#include"header.h"
void MainUi()
{
	while (1)
	{
		int tmp = 0;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); // 글자 색
		goto_xy(43, 13);
		printf("기본 정보 조회중...");
		countTime(1);

		square(17, 4, 78, 2);
		Mouse(); // 마우스 클릭 가능하게 하는 함수
		square(85, 29, 12, 1); //스퀘어 윗부분이 짤림 (나중 수정예정)
		square_char(45, 2, 30, 2, "버스 예약 프로그램"); // [청주↔서울] 넣으면 오류 뜸(나중 수정예정)
		if (num > 0) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); // 흰색
			square_char(45, 2, 30, 5, loginEmail);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		}
		square_char(25, 2, 40, 9, "예약");
		square_char(25, 2, 40, 12, "변경");
		square_char(25, 2, 40, 15, "취소");
		square_char(25, 2, 40, 18, "결제 내역 조회");
		square_char(25, 2, 40, 21, "사용자 정보 수정");
		square_char(13, 2, 23, 26, "로그인");
		square_char(13, 2, 46, 26, "회원가입");
		square_char(13, 2, 69, 26, "pw찾기");

		//ExClick();

		tmp = mainUiClick();
		if (tmp >= 1 && tmp <= 5 && check == 0)
		{
			square(85, 29, 12, 1);
			goto_xy(40, 15);
			printf("로그인을 먼저 해주세요");
			countTime(0.5);
			continue;
		}
		if (tmp == 1) {
			reserveUi();// 예약 ui
		}
		else if (tmp == 2) {
			changeUi();//변경
		}
		else if (tmp == 3) {
			cancleUi();//취소
		}
		else if (tmp == 4) {
			inquiryUi();//결재 내역 조회
		}
		else if (tmp == 5) {
			modifyUi();// 사용자 정보 수정
		}
		else if (tmp == 6) {
			LoginUi();//로그인
		}
		else if (tmp == 7) {
			SignUpUi();//회원가입
		}
		else if (tmp == 8) {
			searchUi();//pw찾기
		}
		/*mainUiClick1(64, 75, 7, 9);
				calender(); // 달력 ui*/
	}
}