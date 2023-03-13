int main(void) {
	int row = 8;
	int col = 7;
	printf("현재 위치: %d행 %d행\n", row, col);


	printf("위로 이동\n");
	row = row - 1;
	printf("현재 위치: %d행 %d행\n", row, col);

	printf("오른쪽으로 이동\n");
	col = col + 1;
	printf("현재 위치: %d행 %d행\n", row, col);

	printf("왼쪽으로 이동\n");
	col = col - 1;
	printf("현재 위치: %d행 %d행\n", row, col);
	return 0;
}