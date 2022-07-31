#pragma once

#include <vector>

std::vector<std::string> m = {"Мастерства", "Выносливости", "Удачливости"};

class Player {
  private:
    int skill; // Мастерство
    int max_skill; // Максимальное мастерство
    int stamina; // Выносливость
    int max_stamina; // Максимальная выносливость
    int luck; // Удачливость
    int max_luck; // Максимальная удачливость
    std::string drinkType; // Напиток
    bool wasDrinkUsed; // был ли использован напиток
    int money; // Деньги
    int provisions; // Запасы провианта
    std::vector<std::string> bag; // Мешок
  public:
    Player();
    ~Player();
    int getSkill();
    void setSkill(int);
    int getStamina();
    void setStamina(int);
    int getLuck();
    void setLuck(int);
    std::string getDrinkType();
    void setDrinkType(int);
    void useDrink();
    int getMoney();
    void setMoney(int);
    int getProvisions();
    void setProvisions(int);
    void useProvisions();
    bool checkBag(std::string);
    void putIntoBag(std::string);
    void getFromBag(std::string);
};