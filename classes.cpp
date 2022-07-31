#include <iostream>
#include <vector>
#include <algorithm>
#include "classes.h"
#include "generation.h"

using std::cin;
using std::cout;
using std::string;
using std::min;
using std::find;

Player::Player() {
  int skill = generate();
  setSkill(skill);
  int stamina = generate(2);
  setStamina(stamina);
  int luck = generate();
  setLuck(luck);
  wasDrinkUsed = false;
}

int
Player::getSkill() {
  return skill;
}

void
Player::setSkill(int skill) {
  this->skill = skill;
}

int
Player::getStamina() {
  return stamina;
}

void
Player::setStamina(int stamina) {
  this->stamina = stamina;
}

int
Player::getLuck() {
  return luck;
}

void
Player::setLuck(int luck) {
  this->luck = luck;
}

string
Player::getDrinkType() {
  return "Напиток " + drinkType;
}

void
Player::setDrinkType(int type) {
  drinkType = m[type - 1];
}

void
Player::useDrink() {
  if (wasDrinkUsed) {
    cout << "\nТы уже использовал напиток в своём приключении!";
  } else {
    wasDrinkUsed = false;
    if (drinkType == "Мастерства") skill = max_skill;
    else if (drinkType == "Выносливости") stamina = max_stamina;
    else if (drinkType == "Удачливости") {
      luck = max_luck;
      max_luck++;
    }
    else cout << "\nНе удалось использовать напиток " << drinkType << ". Обратитесь к разработчику";
  }
}

int
Player::getMoney() {
  return money;
}

void
Player::setMoney(int money) {
  this->money = money;
}

int
Player::getProvisions() {
  return provisions;
}

void
Player::setProvisions(int provisions) {
  this->provisions = provisions;
}

void
Player::useProvisions() {
  if (provisions <= 0) {
    cout << "\nУ тебя не осталось провизии!";
  } else {
    stamina = min(max_stamina, stamina + 4);
    provisions--;
  }
}

bool
Player::checkBag(string thing) {
  return find(bag.begin(), bag.end(), thing) != bag.end();
}

void
Player::putIntoBag(string thing) {
  bag.push_back(thing);
}

void
Player::getFromBag(string thing) {
  bag.erase(find(bag.begin(), bag.end(), thing));
}