#include <iostream>
#include <fstream>

using std::string;
using std::ifstream;
using std::cout;
using std::endl;
using std::getline;

void output(string filename) {
  ifstream file(filename);
  if (file.is_open()) {
    for (int i = 0; i < 35; i++) cout << "=";
    string line;
    while(getline(file, line)) {
      cout << line << endl;
    }
    for (int i = 0; i < 35; i++) cout << "=";
    cout << endl;
    file.close();
  } else {
    cout << "Не удалось прочесть файл " << filename << ".\nОбратитесь к разработчику\n";
  }
}