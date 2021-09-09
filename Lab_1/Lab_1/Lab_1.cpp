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

	int *a;
	int i, n;
	int minimum, maximum;

	printf("Введите минимальный элемент массива: ");
	scanf_s("%d", &minimum);
	printf("Введите максимальный элемент массива: ");
	scanf_s("%d", &maximum);
	printf("Введите размер массива: ");
	scanf_s("%d", &n);

	a = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++) {
		a[i] = minimum + rand() % (maximum - minimum + 1);
	}

	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	free(a);
}