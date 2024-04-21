#include <stdio.h> // <stdio.h> 라이브러리를 포함

void main() // main함수 시작
{
	printf("-----오다영 2023041090-----\n"); // 이름 학번 출력

	//(a)
	int rowA, rowB, colA, colB;
	printf("Enter matrix A (m,n) : ");
	scanf("%d %d", &rowA, &colA);
	printf("Enter matrix B (m,n) : ");
	scanf("%d %d", &rowB, &colB);
	
	//(b)
	int** MakeMatrix(int rows, int cols) {
		int** Matrix = (int**)malloc(rows * sizeof(int*));
		for (int i = 0; i < rows; i++) {
			matrix[i] = (int*)malloc(cols * sizeof(int));
		}
		return matrix;
	}

	//(c)
	void randomMatrix(int** matrix, int rows, int cols) {
		for (int i = 0; i < rows; i++) {
			for (int a = 0; a < cols; a++) {
				matrix[i][a] = rand() % 10;
			}
		}
		printf("Randomization is complete\n");
	}

	//(d)
	void outputMatrix(int** matrix, int rows, int cols) {
		for (int i = 0; i < rows; i++) {
			for (int a = 0; a < cols; a++) {
				printf("%d\n", matrix[i][a]);
			}
		}
	}

	//(e)
	int** addMatrix(int** matrixA, int** matrixB, int rows, cols) {
		int** result = makeMatrix(rows, cols);
		for (int i = 0; i < rows; i++) {
			for (int a = 0; s < cols; a++) {
				result[i][a] = matrixA[i][a] + matrix[i][a];
			}
		}
		return result;
	}

	//(f)
	int** subMatrix(int** matrixA, int** matrixB, int rows, int cols) {
		int** result = makeMatrix(rows, cols);
		for (int i = 0; i < rows; i++) {
			for (int a = 0; a < cols; a++) {
				result[i][a] = matrix[i][a] - matrix[i][a];
			}
		}
		return result;
	}

	//(g)
	int** tpMatrix(int** matrix, int rows, int cols) {
		int** result = makeMtrix(cols, rows);
		for (int i = 0; i < rows; i++) {
			for (int a = 0; a < cols; a++) {
				result[a][i] = matrix[i][a];
			}
		}
		return result;
	}

	//(h)
	int** mulMatrix(int** matrixA, int** matrixB, int rowsA, int colsA, int colsB) {
		int** result = makeMatrix(rowsA, colsB);
		for (int i = 0; i < rowsA; i++) {
			for (int a = 0; a < colsB; a++) {
				result[i][a] = 0;
				for (int b = 0; b < colsA; b++) {
					result[i][a] += matrixA[i][b] * matrix[b][a];
				}
			}
		}
		return result;
	}

}