#include <iostream>
#include "interface.h"
#include "files.h"

void startUp() {
  bool flag = true;
  while(flag) {
    flag = false;
    std::cout << "\n\n"
               "Выберите число, чтобы продолжить:\n"
               "1. Начать игру\n"
               "2. Помощь\n"
               "3. Выйти\n";
    int choice;
    std::cin >> choice;
    switch(choice) {
      case 1: chooseDrink(); break;
      case 2: getHelp(); break;
      case 3: exit(); break;
      default: std::cout << "Введено неверное число!"; flag = true;
    }
  }
}

void chooseDrink() {
  std::cout << "Функция для выбора напитка";
}

void getHelp() {
  std::cout << "Функция для получения вспомогательной информации";
}

void exit() {
  std::cout << "Надеемся, что ты вернёшься! ;)";
}