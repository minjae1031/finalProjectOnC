#include<stdio.h>
#include<Windows.h>

int can[9] = { 15, 15, 15, 15, 15, 15, 15, 15, 15 };//����� ����
char* nameofcan[9] = { "��ī�ݶ�","�������" ,"���̼Ҵپ���", "���̼Ҵٿ�����", "������", "�䷹Ÿ", "�Ŀ����̵�", "������", "����Ŭ��" };//����� ����
int price[9] = { 1400, 1400, 1200, 1200, 1000, 1200, 1300, 1500, 1200 };//����� ����
int money = 0;//���� ��
int  total = 0;//�� ����
char selecting;//�Է�



void title();
void body();
void show();

void title() {
	printf("�ܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡ�\n");
	printf("�ܡܡܡܡ�  ����� ���Ǳ�   �ܡܡܡܡ�\n");
	printf("�ܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡ�\n");
	printf("______________________________________\n");
	printf("�ܽý����� �ʱ�ȭ�߽��ϴ�. ��\n");
	printf("______________________________________\n");
}
void body() {
	int i;
	for (i = 0; i < 9; i++) {
		if (can[i] > 0) {
			printf("��%d�� : [%d] %s <%d��>\n", i + 1, can[i], nameofcan[i], price[i]);
		}
		else {
			printf("��%d�� : [������] %s <%d��>\n", i + 1, nameofcan[i], price[i]);
		}
	}
}
void show() {
	printf("______________________________________\n");
	printf(" ������ ���Ե� �� �ݾ�: %d���Դϴ�. ��\n", money);
	printf("          �޴� Ű<Key> �ȳ�           \n");
	printf("______________________________________\n");
	printf("��a(A) : 10��¥�� ���� ���� \n");
	printf("��b(B) : 50��¥�� ���� ���� \n");
	printf("��c(C) : 100��¥�� ���� ���� \n");
	printf("��d(D) : 500��¥�� ���� ���� \n");
	printf("��f(F) : 1000��¥�� ���� ���� \n");
	printf("______________________________________\n");
	printf("��q(Q) : ���� ��ȯ \n");
	printf("��w(W) : ���Ǳ� �Ǹ� ���� ���� \n");
	printf("��e(E) : ���Ǳ� �Ǹ� ���� �ʱ�ȭ \n");
	printf("______________________________________\n");
	printf("��x(X) : ���α׷� ���� \n");
	printf("______________________________________\n");
	printf("______________________________________\n");
	printf(" Ű(key)�� �Է��ϼ��� : \n");
}





void choose(char selecting) {
	if (selecting == 'a' || selecting == 'A') {//a�Ǵ� A�� �Է� ���� �� 10���� ����
		money += 10;
	}
	if (selecting == 'b' || selecting == 'B') {//b �Ǵ� B�� �Է� ���� �� 50���� ����
		money += 50;
	}
	if (selecting == 'c' || selecting == 'C') {//c �Ǵ� C�� �Է� ���� �� 100���� ����
		money += 100;
	}
	if (selecting == 'd' || selecting == 'D') {//d �Ǵ� D�� �Է� ���� �� 500���� ����
		money += 500;
	}
	if (selecting == 'f' || selecting == 'F') {//f �Ǵ� F�� �Է� ���� �� 1000���� ����
		money += 1000;
	}
}

void end(char selecting) {
	if (selecting == 'q' || selecting == 'Q') {//q �Ǵ� Q�� �Է� ���� �� �Ž�����
		printf("�Ž����� : %d��\n ", money);
		Sleep(1000);
		money = 0;
	}
	else if (selecting == 'w' || selecting == 'W') {//w �Ǵ� W�� �Է� ���� �� �� ������� ������
		printf("���Ǳ� �Ǹ� ���� : %d��\n ", total);
		Sleep(1000);
	}
	else if (selecting == 'e' || selecting == 'E') {//e �Ǵ� E�� �Է� ���� �� ���Ǳ��� ��� ������ �ʱ�ȭ ��
		total = 0;
		printf("���Ǳ� �Ǹ� ���� �ʱ�ȭ �Ϸ�.\n");
		Sleep(1000);
	}
}

void buying(char selecting) {
	if (selecting == '1') {
		if (money >= price[0] && can[0] > 0) {
			money = money - price[0];
			can[0] = can[0] - 1;
			total += price[0];
			printf("��ī�ݶ� \n");
			printf("�����Ϸ� \n");
			Sleep(1000);
		}
		else if (can[0] > 0) {
			printf("�����Ͻ� ���� �����մϴ�. \n");
			Sleep(1000);
		}
		else {
			printf("��� �����ϴ�. \n");
			Sleep(1000);
		}
	}
	else if (selecting == '2') {
		if (money >= price[1] && can[1] > 0) {
			money = money - price[1];
			can[1] = can[1] - 1;
			total += price[1];
			printf("������� \n");
			printf("�����Ϸ� \n");
			Sleep(1000);
		}
		else if (can[1] > 0) {
			printf("�����Ͻ� ���� �����մϴ�. \n");
			Sleep(1000);
		}
		else {
			printf("��� �����ϴ�. \n");
			Sleep(1000);
		}
	}
	else if (selecting == '3') {
		if (money >= price[2] && can[2] > 0) {
			money = money - price[2];
			can[2] = can[2] - 1;
			total += price[2];
			printf("���̼Ҵپ��� \n");
			printf("�����Ϸ� \n");
			Sleep(1000);
		}
		else if (can[2] > 0) {
			printf("�����Ͻ� ���� �����մϴ�. \n");
			Sleep(1000);
		}
		else {
			printf("��� �����ϴ�. \n");
			Sleep(1000);
		}
	}
	else if (selecting == '4') {
		if (money >= price[3] && can[3] > 0) {
			money = money - price[0];
			can[3] = can[3] - 1;
			total += price[3];
			printf("���̼Ҵٿ����� \n");
			printf("�����Ϸ� \n");
			Sleep(1000);
		}
		else if (can[3] > 0) {
			printf("�����Ͻ� ���� �����մϴ�. \n");
			Sleep(1000);
		}
		else {
			printf("��� �����ϴ�. \n");
			Sleep(1000);
		}
	}
	else if (selecting == '5') {
		if (money >= price[4] && can[4] > 0) {
			money = money - price[4];
			can[4] = can[4] - 1;
			total += price[4];
			printf("������ \n");
			printf("�����Ϸ� \n");
			Sleep(1000);
		}
		else if (can[4] > 0) {
			printf("�����Ͻ� ���� �����մϴ�. \n");
			Sleep(1000);
		}
		else {
			printf("��� �����ϴ�. \n");
			Sleep(1000);
		}
	}
	else if (selecting == '6') {
		if (money >= price[5] && can[5] > 0) {
			money = money - price[5];
			can[5] = can[5] - 1;
			total += price[5];
			printf("�䷹Ÿ \n");
			printf("�����Ϸ� \n");
			Sleep(1000);
		}
		else if (can[5] > 0) {
			printf("�����Ͻ� ���� �����մϴ�. \n");
			Sleep(1000);
		}
		else {
			printf("��� �����ϴ�. \n");
			Sleep(1000);
		}
	}
	else if (selecting == '7') {
		if (money >= price[6] && can[6] > 0) {
			money = money - price[6];
			can[6] = can[6] - 1;
			total += price[6];
			printf("�Ŀ����̵� \n");
			printf("�����Ϸ� \n");
			Sleep(1000);
		}
		else if (can[6] > 0) {
			printf("�����Ͻ� ���� �����մϴ�. \n");
			Sleep(1000);
		}
		else {
			printf("��� �����ϴ�. \n");
			Sleep(1000);
		}
	}
	else if (selecting == '8') {
		if (money >= price[7] && can[7] > 0) {
			money = money - price[7];
			can[7] = can[7] - 1;
			total += price[7];
			printf("������ \n");
			printf("�����Ϸ� \n");
			Sleep(1000);
		}
		else if (can[7] > 0) {
			printf("�����Ͻ� ���� �����մϴ�. \n");
			Sleep(1000);
		}
		else {
			printf("��� �����ϴ�. \n");
			Sleep(1000);
		}
	}
	else if (selecting == '9') {
		if (money >= price[8] && can[8] > 0) {
			money = money - price[8];
			can[8] = can[8] - 1;
			total += price[8];
			printf("����Ŭ�� \n");
			printf("�����Ϸ� \n");
			Sleep(1000);
		}
		else if (can[8] > 0) {
			printf("�����Ͻ� ���� �����մϴ�. \n");
			Sleep(1000);
		}
		else {
			printf("��� �����ϴ�. \n");
			Sleep(1000);
		}
	}

}
int main() {
	while (1) {
		title();//display�ؾ��� �͵��� �ҷ���
		body();
		show();
		scanf_s("%c", &selecting);

		choose(selecting);
		buying(selecting);
		end(selecting);
		if (selecting == 'x' || selecting == 'X') {//x�Ǵ� X�� �Է� ���� �� ����
			printf("�ý����� �����մϴ�.");
			Sleep(1000);//���� �޽����� Ȯ�� �� �ð��� ��
			break;
		}
	}

	return 0;
}
