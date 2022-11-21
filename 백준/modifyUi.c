#pragma once
#include"header.h"
void modifyUi()
{
	while (1) {
		int modify_tmp;
		char pw[20];
		square(85, 29, 12, 1);
		square_char(40, 2, 34, 2, "사용자 정보 수정");

		square(30, 24, 39, 5);
		goto_xy(46, 8);
		printf("%s", "iededg@naver.com");
		goto_xy(46, 9);
		printf("────────────────");

		goto_xy(48, 10);
		printf("%s", "010-8984-5491");
		goto_xy(47, 11);
		printf("──────────────");

		square(7, 3, 41, 15);
		goto_xy(44, 16);
		printf("☏");
		goto_xy(43, 17);
		printf("변경");

		square(7, 3, 60, 15);
		goto_xy(63, 16);
		printf("PW");
		goto_xy(62, 17);
		printf("변경");

		square_char(21, 2, 43, 25, "회원탈퇴");

		modify_tmp = modify_click();
		// meber[count - ?]를 해야 되는지 확인 해야 됨
		while (1) {
			if (modify_tmp == 1)
			{
				square(85, 29, 12, 1); //스퀘어 윗부분이 짤림 (나중 수정예정)
				square(81, 18, 14, 6);
				square_char(70, 2, 18, 8, "전화번호변경");

				goto_xy(19, 14);
				printf("변경하실 전화번호를 입력해주세요");
				goto_xy(19, 15);
				printf("☞");
			//	printf("%s", member[count - 2].number);  // 일단 -2가 맞음
			//	ExClick();
				scanf("%s%*c", &member[count - 2].number);

				square_char(14, 2, 19, 21, "확인");
				MouseClick(20, 32, 21, 23);


				square(85, 29, 12, 1);
				square(60, 7, 25, 11);
				square_char(19, 2, 46, 13, "변경되었습니다.");

				Member_write();

				countTime(1);
				break;
				//ExClick();

			}
			else if (modify_tmp == 2)
			{
				clearconsole();
				square(85, 29, 12, 1); //스퀘어 윗부분이 짤림 (나중 수정예정)
				square(81, 18, 14, 6);
				square_char(70, 2, 18, 8, "PW변경");
				goto_xy(19, 12);
				printf("현재 비밀번호를 입력하세요");
				goto_xy(19, 13);
				printf("☞");
				scanf("%s%*c", &pw);
				/*printf("%s %s", pw, member[count - 2].pw);
				ExClick();*/
				if (strcmp(pw, member[count - 2].pw) == 0)
				{
					goto_xy(19, 15);
					printf("새로운 비밀번호를 입력하세요");
					goto_xy(19, 16);
					printf("☞");
					scanf("%s%*c", &member[count - 2].pw);

					goto_xy(19, 18);
					printf("새로운 비밀번호를 재입력하세요");
					goto_xy(19, 19);
					printf("☞");
					scanf("%s%*c", &member[count - 2].pw);

					square_char(14, 2, 19, 21, "확인");
					MouseClick(20, 32, 21, 23);

					Member_write();
					countTime(1);
					break;
				}

			}
			else if (modify_tmp == 3)
			{
				square(85, 29, 12, 1);
				square_char(30, 2, 38, 12, "탈퇴 하시겠습니까?");
				square_char(7, 2, 42, 16, "예");
				square_char(11, 2, 52, 16, "아니오");
				MouseClick(43, 48, 16, 18);
				square(85, 29, 12, 1);
				square_char(30, 2, 38, 12, "탈퇴 완료되었습니다...");
				
				strcpy(loginEmail, "NULL");
		//		printf("%s", loginEmail);
				count--;
				num = 0;
				Member_write();
				clearconsole();
				return;
			}
		}
		goto_xy(0, 30);
	}
}