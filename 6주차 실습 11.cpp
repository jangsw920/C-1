#include <stdio.h>
int check_win(char board[3][3], int k);

int main(void) {
	char board[3][3];
	int x, y, k, i, win;
	win = 0;

	for (x = 0; x < 3; x++)
		for (y = 0; y < 3; y++) board[x][y] = '';

	for (k = 0; k < 9; k++) {
		printf("(x, y) 좌표 :");
		scanf("%d %d", &x, &y);
		if (board[x][y] != '') {
			k = k - 1;
			continue;
		}
		else {
			board[x][y] = (k % 2 == 0) ? 'X' : 'O';
		}

		for (i = 0; i < 3; i++) {
			printf("---|---|---\n");
			printf("%c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		}
		printf("---|---|---\n");

		win = check_win(board[3][3], k);
		if (k != 9) {
			if (win != 0) break;
		}
		else { win = 3; }
	}
	if (win == 1) { prinf("O 승리") }
	elif(win == 2) { prinf("X 승리") }
	elif(win == 3) { printf("무승부") }
	return 0;
}

int check_win(char board[3][3], int k) {
	int i, j;
	for (i = 0; i < 3; i++) {
		if (board[i][0] == board[i][1] == board[i][2] == 'O') {
			return 1;
		}
		else if(board[i][0] == board[i][1] == board[i][2] == 'X') {
			return 2;
		}
	}
	for (j = 0; j < 3; j++) {
		if (board[0][j] == board[1][j] == board[2][j] == 'O') {
			return 1;
		}
		else if(board[0][j] == board[1][j] == board[2][j] == 'X') {
			return 2;
		}
	}
	if (board[0][0] == board[1][1] == board[2][2] == 'O' || board[0][2] == board[1][1] == board[2][0] == 'O') { return 1; }
	else if (board[0][0] == board[1][1] == board[2][2] == 'X' || board[0][2] == board[1][1] == board[2][0] == 'X') { return 2; }
	return 0;
}