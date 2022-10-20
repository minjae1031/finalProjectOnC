#include<stdio.h>
#include<Windows.h>

int can[9] = { 15, 15, 15, 15, 15, 15, 15, 15, 15 };//음료수 개수
char* nameofcan[9] = { "코카콜라","펩시제로" ,"데미소다애플", "데미소다오렌지", "코코팜", "토레타", "파워에이드", "수염차", "스파클링" };//음료수 종류
int price[9] = { 1400, 1400, 1200, 1200, 1000, 1200, 1300, 1500, 1200 };//음료수 가격
int money = 0;//넣은 돈
int  total = 0;//총 매출
char selecting;//입력



void title();
void body();
void show();

void title() {
	printf("●●●●●●●●●●●●●●●●●●●\n");
	printf("●●●●●  음료수 자판기   ●●●●●\n");
	printf("●●●●●●●●●●●●●●●●●●●\n");
	printf("______________________________________\n");
	printf("●시스템을 초기화했습니다. ●\n");
	printf("______________________________________\n");
}
void body() {
	int i;
	for (i = 0; i < 9; i++) {
		if (can[i] > 0) {
			printf("→%d번 : [%d] %s <%d원>\n", i + 1, can[i], nameofcan[i], price[i]);
		}
		else {
			printf("→%d번 : [재고없음] %s <%d원>\n", i + 1, nameofcan[i], price[i]);
		}
	}
}
void show() {
	printf("______________________________________\n");
	printf(" ●현재 투입된 총 금액: %d원입니다. ●\n", money);
	printf("          메뉴 키<Key> 안내           \n");
	printf("______________________________________\n");
	printf("→a(A) : 10원짜리 동전 투입 \n");
	printf("→b(B) : 50원짜리 동전 투입 \n");
	printf("→c(C) : 100원짜리 동전 투입 \n");
	printf("→d(D) : 500원짜리 동전 투입 \n");
	printf("→f(F) : 1000원짜리 지폐 투입 \n");
	printf("______________________________________\n");
	printf("→q(Q) : 동전 반환 \n");
	printf("→w(W) : 자판기 판매 매출 보기 \n");
	printf("→e(E) : 자판기 판매 매출 초기화 \n");
	printf("______________________________________\n");
	printf("→x(X) : 프로그램 종료 \n");
	printf("______________________________________\n");
	printf("______________________________________\n");
	printf(" 키(key)를 입력하세요 : \n");
}





void choose(char selecting) {
	if (selecting == 'a' || selecting == 'A') {//a또는 A를 입력 받을 시 10원을 넣음
		money += 10;
	}
	if (selecting == 'b' || selecting == 'B') {//b 또는 B를 입력 받을 시 50원을 넣음
		money += 50;
	}
	if (selecting == 'c' || selecting == 'C') {//c 또는 C를 입력 받을 시 100원을 넣음
		money += 100;
	}
	if (selecting == 'd' || selecting == 'D') {//d 또는 D를 입력 받을 시 500원을 넣음
		money += 500;
	}
	if (selecting == 'f' || selecting == 'F') {//f 또는 F를 입력 받을 시 1000원을 넣음
		money += 1000;
	}
}

void end(char selecting) {
	if (selecting == 'q' || selecting == 'Q') {//q 또는 Q를 입력 받을 시 거스름돈
		printf("거스름돈 : %d원\n ", money);
		Sleep(1000);
		money = 0;
	}
	else if (selecting == 'w' || selecting == 'W') {//w 또는 W를 입력 받을 시 총 매출액을 보여줌
		printf("자판기 판매 매출 : %d원\n ", total);
		Sleep(1000);
	}
	else if (selecting == 'e' || selecting == 'E') {//e 또는 E를 입력 받을 시 자판기의 모든 매출을 초기화 함
		total = 0;
		printf("자판기 판매 매출 초기화 완료.\n");
		Sleep(1000);
	}
}

void buying(char selecting) {
	if (selecting == '1') {
		if (money >= price[0] && can[0] > 0) {
			money = money - price[0];
			can[0] = can[0] - 1;
			total += price[0];
			printf("코카콜라 \n");
			printf("결제완료 \n");
			Sleep(1000);
		}
		else if (can[0] > 0) {
			printf("투입하신 돈이 부족합니다. \n");
			Sleep(1000);
		}
		else {
			printf("재고가 없습니다. \n");
			Sleep(1000);
		}
	}
	else if (selecting == '2') {
		if (money >= price[1] && can[1] > 0) {
			money = money - price[1];
			can[1] = can[1] - 1;
			total += price[1];
			printf("펩시제로 \n");
			printf("결제완료 \n");
			Sleep(1000);
		}
		else if (can[1] > 0) {
			printf("투입하신 돈이 부족합니다. \n");
			Sleep(1000);
		}
		else {
			printf("재고가 없습니다. \n");
			Sleep(1000);
		}
	}
	else if (selecting == '3') {
		if (money >= price[2] && can[2] > 0) {
			money = money - price[2];
			can[2] = can[2] - 1;
			total += price[2];
			printf("데미소다애플 \n");
			printf("결제완료 \n");
			Sleep(1000);
		}
		else if (can[2] > 0) {
			printf("투입하신 돈이 부족합니다. \n");
			Sleep(1000);
		}
		else {
			printf("재고가 없습니다. \n");
			Sleep(1000);
		}
	}
	else if (selecting == '4') {
		if (money >= price[3] && can[3] > 0) {
			money = money - price[0];
			can[3] = can[3] - 1;
			total += price[3];
			printf("데미소다오렌지 \n");
			printf("결제완료 \n");
			Sleep(1000);
		}
		else if (can[3] > 0) {
			printf("투입하신 돈이 부족합니다. \n");
			Sleep(1000);
		}
		else {
			printf("재고가 없습니다. \n");
			Sleep(1000);
		}
	}
	else if (selecting == '5') {
		if (money >= price[4] && can[4] > 0) {
			money = money - price[4];
			can[4] = can[4] - 1;
			total += price[4];
			printf("코코팜 \n");
			printf("결제완료 \n");
			Sleep(1000);
		}
		else if (can[4] > 0) {
			printf("투입하신 돈이 부족합니다. \n");
			Sleep(1000);
		}
		else {
			printf("재고가 없습니다. \n");
			Sleep(1000);
		}
	}
	else if (selecting == '6') {
		if (money >= price[5] && can[5] > 0) {
			money = money - price[5];
			can[5] = can[5] - 1;
			total += price[5];
			printf("토레타 \n");
			printf("결제완료 \n");
			Sleep(1000);
		}
		else if (can[5] > 0) {
			printf("투입하신 돈이 부족합니다. \n");
			Sleep(1000);
		}
		else {
			printf("재고가 없습니다. \n");
			Sleep(1000);
		}
	}
	else if (selecting == '7') {
		if (money >= price[6] && can[6] > 0) {
			money = money - price[6];
			can[6] = can[6] - 1;
			total += price[6];
			printf("파워에이드 \n");
			printf("결제완료 \n");
			Sleep(1000);
		}
		else if (can[6] > 0) {
			printf("투입하신 돈이 부족합니다. \n");
			Sleep(1000);
		}
		else {
			printf("재고가 없습니다. \n");
			Sleep(1000);
		}
	}
	else if (selecting == '8') {
		if (money >= price[7] && can[7] > 0) {
			money = money - price[7];
			can[7] = can[7] - 1;
			total += price[7];
			printf("수염차 \n");
			printf("결제완료 \n");
			Sleep(1000);
		}
		else if (can[7] > 0) {
			printf("투입하신 돈이 부족합니다. \n");
			Sleep(1000);
		}
		else {
			printf("재고가 없습니다. \n");
			Sleep(1000);
		}
	}
	else if (selecting == '9') {
		if (money >= price[8] && can[8] > 0) {
			money = money - price[8];
			can[8] = can[8] - 1;
			total += price[8];
			printf("스파클링 \n");
			printf("결제완료 \n");
			Sleep(1000);
		}
		else if (can[8] > 0) {
			printf("투입하신 돈이 부족합니다. \n");
			Sleep(1000);
		}
		else {
			printf("재고가 없습니다. \n");
			Sleep(1000);
		}
	}

}
int main() {
	while (1) {
		title();//display해야할 것들을 불러옴
		body();
		show();
		scanf_s("%c", &selecting);

		choose(selecting);
		buying(selecting);
		end(selecting);
		if (selecting == 'x' || selecting == 'X') {//x또는 X를 입력 받을 시 종료
			printf("시스템을 종료합니다.");
			Sleep(1000);//종료 메시지를 확인 할 시간을 줌
			break;
		}
	}

	return 0;
}
