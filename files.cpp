#include <iostream>
#include <fstream>

void output(std::string filename) {
  std::ifstream file(filename);
  if (file.is_open()) {
    std::string line;
    while(std::getline(file, line)) {
      std::cout << line << std::endl;
    }
    file.close();
  } else {
    std::cout << "Не удалось прочесть файл " << filename << ".\nОбратитесь к разработчику\n";
  }
}