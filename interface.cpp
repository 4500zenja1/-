#include <iostream>
#include <vector>
#include "interface.h"
#include "files.h"

using std::cin;
using std::cout;
using std::vector;
using std::string;

void startUp() {
  bool flag = true;
  while(flag) {
    flag = false;
    cout << "\n\n"
               "Выберите число, чтобы продолжить:\n"
               "1. Начать игру\n"
               "2. Помощь\n"
               "3. Выйти\n";
    int choice;
    try {
      cin >> choice;
      switch(choice) {
        case 1: chooseDrink(); break;
        case 2: getHelp(); break;
        case 3: exit(); break;
        default: cout << "Введено неверное число!\n"; flag = true;
      }
    }
    catch (...) {
      cout << "Введено не число!"; flag = true;
    }
  }
}

void chooseDrink() {
  cout << "Функция для выбора напитка";
}

void getHelp() {
  bool flag_out = true;
  vector<string> files = {"help/how_to_play.txt",
                          "help/skill_stamina_luck.txt",
                          "help/battle.txt",
                          "help/retreat.txt",
                          "help/several_opponents.txt",
                          "help/luck.txt",
                          "help/luck_in_battles.txt",
                          "",
                          "help/advice.txt"
                         };
  vector<string> item_files = {"help/items/skill.txt",
                               "help/items/stamina_and_food.txt",
                               "help/items/luck.txt",
                               "help/items/stuff_and_drink.txt"
                              };
  int choice;
  while(true) {
    cout << "\n\n"
               "Выберите пункт для чтения или любое другое число для выхода:\n"
               "1. Как сражаться с чудовищами Лабиринта страха?\n"
               "2. Мастерство, Выносливость и Удачливость\n"
               "3. Битвы\n"
               "4. Отступление\n"
               "5. Битва с несколькими противниками\n"
               "6. Удачливость\n"
               "7. Использование удачи в битвах\n"
               "8. Восстановление Мастерства, Выносливости и Удачливости\n"
               "9. Советы игроку\n";
    try {
      cin >> choice;
      if (choice > 10 || choice < 1) break;
      else if (choice != 8) output(files[choice-1]);
      else {
        while(true) {
          cout << "\n\n"
               "Выберите подпункт для чтения или любое другое число для выхода:\n"
               "1. Мастерство\n"
               "2. Выносливость и запасы Провизии\n"
               "3. Удачливость\n"
               "4. Снаряжение\n";
          try {
            cin >> choice;
            if (choice > 4 || choice < 1) break;
            else output(files[choice-1]);
          } catch (...) {
            cout << "Введено не число!\n";
          }
        }
      }
    } catch (...) {
      cout << "Введено не число!\n";
    }
  }
  chooseDrink();
}

void exit() {
  cout << "Надеемся, что ты вернёшься! ;)";
}