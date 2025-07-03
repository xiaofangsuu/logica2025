#include <stdio.h>

int verif_linha(int matriz[9][9], int linha) {
	int v[10] = {0};

	for (int j = 0; j < 9; j++) {
		int valor = matriz[linha][j];

		if (valor < 1 || valor > 9 || v[valor]) {
			return 0;
		}
		v[valor] = 1;
	}
	return 1;
}

int verif_coluna(int matriz[9][9], int coluna) {
	int v[10] = {0};

	for (int i = 0; i < 9; i++) {
		int valor = matriz[i][coluna];

		if (valor < 1 || valor > 9 || v[valor]) {
			return 0;
		}
		v[valor] = 1;
	}

	return 1;
}
int verif_bloco(int matriz[9][9], int inicio_linha, int inicio_coluna) {
	int v[10] = {0};
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int val = matriz[inicio_linha + i][inicio_coluna + j];
			if (val < 1 || val > 9 || v[val]) {
				return 0;
			}
			v[val] = 1;
		}
	}
	return 1;
}

int valida_sudoku(int matriz[9][9]) {
	for (int i = 0; i < 9; i++) {
		if (!verif_linha(matriz, i) || !verif_coluna(matriz, i)) {
			return 0;
		}
	}

	for (int i = 0; i < 9; i += 3) {
		for (int j = 0; j < 9; j += 3) {
			if (!verif_bloco(matriz, i, j)) {
				return 0;
			}
		}
	}
	return 1;
}
int main() {
	int n;

	scanf("%d", &n);

	for (int k = 1; k <= n; k++) {
		int matriz[9][9];
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				scanf("%d", &matriz[i][j]);
			}
		}
		printf("Instancia %d\n", k);

		if (valida_sudoku(matriz)==1) {
			printf("SIM\n");
		} else {
			printf("NAO\n");
		}

		printf("\n");
	}

	return 0;
}
