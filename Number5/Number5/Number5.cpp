// Лабораторная работа №1, задание №5
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <string.h>

void main() {
	using namespace std;
	setlocale(LC_ALL, "Rus");

	int i;

	struct Students {
		char Name[20], Surname[20], Facult[10];
		int NumberOfBook;
	} stud[4];

	for (i = 0; i < 4; i++) {
		cout << "Введите имя студента: ";
		cin >> stud[i].Name;
		cout << "Введите фамилию студента: ";
		cin >> stud[i].Surname;
		cout << "Введите факультет студента: ";
		cin >> stud[i].Facult;
		cout << "Введите номер зачетной книжки: ";
		cin >> stud[i].NumberOfBook;
		cout << endl;
	}

	for (i = 0; i < 4; i++) {
		printf("|%10s|%10s|%5s|%5d|\n", stud[i].Surname, stud[i].Name, stud[i].Facult, stud[i].NumberOfBook);
	}
	Sleep(3000);

	bool running = true;
	char name[20], surname[20], facult[10];
	char choise;
	int number, CounterOfExist;

	while (running){

		system("cls");

		cout << "По какому параметру производить поиск?" << endl;
		cout << " 1. По имени\n 2. По фамилии\n 3. По имени и фамилии\n 4. По имени или фамилии\n 5. По факультету\n 6. По факультету и имени\n 7. По факультету и фамилии\n 8. По номеру зачетной книжки\n" << endl;

		cout << "Для выхода из программы введите 9" << endl;
		cin >> choise;

		switch (choise) {
		case '1':
			CounterOfExist = 0;
			cout << "Введите имя: ";
			cin >> name;

			cout << "\nСтудент/студенты с заданными параметрами: \n";
			for (i = 0; i < 4; i++) {
				if (strcmp(name, stud[i].Name) == 0) {
					printf("|%10s|%10s|%5s|%5d|\n", stud[i].Surname, stud[i].Name, stud[i].Facult, stud[i].NumberOfBook);
					CounterOfExist++;
				}
			} 
			if (CounterOfExist == 0) cout << "Не существует";
			Sleep(3000);
			break;

		case '2':
			CounterOfExist = 0;
			cout << "Введите фамилию: ";
			cin >> surname;

			cout << "\nСтудент/студенты с заданными параметрами: \n";
			for (i = 0; i < 4; i++) {
				if (strcmp(surname, stud[i].Surname) == 0) {
					printf("|%10s|%10s|%5s|%5d|\n", stud[i].Surname, stud[i].Name, stud[i].Facult, stud[i].NumberOfBook);
					CounterOfExist++;
				} 
			} 
			if (CounterOfExist == 0) cout << "Не существует";
			Sleep(3000);
			break;

		case '3':
			CounterOfExist = 0;
			cout << "Введите имя: ";
			cin >> name;
			cout << "Введите фамилию: ";
			cin >> surname;

			cout << "\nСтудент/студенты с заданными параметрами: \n";
			for (i = 0; i < 4; i++) {
				if ((strcmp(name, stud[i].Name) == 0) && (strcmp(surname, stud[i].Surname) == 0)) {
					printf("|%10s|%10s|%5s|%5d|\n", stud[i].Surname, stud[i].Name, stud[i].Facult, stud[i].NumberOfBook);
					CounterOfExist++;
				}
			} 
			if (CounterOfExist == 0) cout << "Не существует";
			Sleep(3000);
			break;

		case '4':
			CounterOfExist = 0;
			cout << "Введите имя: ";
			cin >> name;
			cout << "Введите фамилию: ";
			cin >> surname;

			cout << "\nСтудент/студенты с заданными параметрами: \n";
			for (i = 0; i < 4; i++) {
				if ((strcmp(name, stud[i].Name) == 0) || (strcmp(surname, stud[i].Surname) == 0)) {
					printf("|%10s|%10s|%5s|%5d|\n", stud[i].Surname, stud[i].Name, stud[i].Facult, stud[i].NumberOfBook);
					CounterOfExist++;
				}
			} 
			if (CounterOfExist == 0) cout << "Не существует";
			Sleep(3000);
			break;

		case '5':
			CounterOfExist = 0;
			cout << "Введите факультет: ";
			cin >> facult;

			cout << "\nСтудент/студенты с заданными параметрами: \n";
			for (i = 0; i < 4; i++) {
				if (strcmp(facult, stud[i].Facult) == 0) {
					printf("|%10s|%10s|%5s|%5d|\n", stud[i].Surname, stud[i].Name, stud[i].Facult, stud[i].NumberOfBook);
					CounterOfExist++;
				}
			}
			if (CounterOfExist == 0) cout << "Не существует";
			Sleep(3000);
			break;

		case '6':
			CounterOfExist = 0;
			cout << "Введите факультет: ";
			cin >> facult;
			cout << "Введите имя: ";
			cin >> name;

			cout << "\nСтудент/студенты с заданными параметрами: \n";
			for (i = 0; i < 4; i++) {
				if ((strcmp(facult, stud[i].Facult) == 0) && (strcmp(name, stud[i].Name) == 0)) {
					printf("|%10s|%10s|%5s|%5d|\n", stud[i].Surname, stud[i].Name, stud[i].Facult, stud[i].NumberOfBook);
					CounterOfExist++;
				}
			}
			if (CounterOfExist == 0) cout << "Не существует";
			Sleep(3000);
			break;

		case '7':
			CounterOfExist = 0;
			cout << "Введите факультет: ";
			cin >> facult;
			cout << "Введите фамилию: ";
			cin >> surname;

			cout << "\nСтудент/студенты с заданными параметрами: \n";
			for (i = 0; i < 4; i++) {
				if ((strcmp(facult, stud[i].Facult) == 0) && (strcmp(surname, stud[i].Surname) == 0)) {
					printf("|%10s|%10s|%5s|%5d|\n", stud[i].Surname, stud[i].Name, stud[i].Facult, stud[i].NumberOfBook);
					CounterOfExist++;
				}
			}
			if (CounterOfExist == 0) cout << "Не существует";
			Sleep(3000);
			break;

		case '8':
			CounterOfExist = 0;
			cout << "Введите номер зачетной книжки: ";
			cin >> number;

			cout << "\nСтудент/студенты с заданными параметрами: \n";
			for (i = 0; i < 4; i++) {
				if (number == stud[i].NumberOfBook) {
					printf("|%10s|%10s|%5s|%5d|\n", stud[i].Surname, stud[i].Name, stud[i].Facult, stud[i].NumberOfBook);
					CounterOfExist++;
				}
			} 
			if (CounterOfExist == 0) cout << "Не существует";
			Sleep(3000);
			break;

		case '9':
			running = false; 
			break;

		default:
			cout << "Вы ввели неправильное значение" << endl;
			Sleep(1000);
			break;
		}
	}
}