/* ������� */
#define SQUARES 64 /* ����� ������ �� ��������� ����� */
#define CROP 7E14 /* ������ ������� � ���, ���������� � ����� ����� */
main() {
	double current, total, int count = 1;
	printf(" ������ ����� ����� ����� ����� ����\n");
	printf("�� ������ � ���\n"),
		total = current = 1.0; /* �������� � ������ ����� */
	printf("%4d %15.2� %13.2� %12.2e\n", count, current, total, total / CROP);
	while (count < SQUARES) {
		count = count + 1;
		current = 2.0 * current; /* � ������� ����� ����� �� ��������� ������*/
		total = total + current; /* ��������� ����� */
		printf(" %4d %15.2� %13.2� %12 2e\n", count, current, total, total / CROP);
	}
}