#include <iostream>
#include <filesystem>
#include <src/getUserInput.cpp>

int main() {
  UserData userData = getUserInput();

  std::cout << userData.username;
  return 0;
}