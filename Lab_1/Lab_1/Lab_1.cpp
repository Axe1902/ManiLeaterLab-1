//Лабораторная №1, задание №3
#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS

void main() {
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int** a;
	int i, j, n;
	int minimum, maximum;

	printf("Введите минимальный элемент массива: ");
	scanf_s("%d", &minimum);
	printf("Введите максимальный элемент массива: ");
	scanf_s("%d", &maximum);
	printf("Введите размер массива: ");
	scanf_s("%d", &n);

	a = (int**)malloc(n * sizeof(int));

	for (i = 0; i < n; i++) {
		int* b = (int*)malloc(n * sizeof(int));
		for (j = 0; j < n; j++) {
			b[j] = minimum + rand() % (maximum - minimum + 1);
		}
		a[i] = b;
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%4d ", a[i][j]);
		}
		printf("\n");
	}

	free(a);
}