#include <iostream>
#include <string>

class UserData {
  public: 
    std::string username;
    std::string password;
};

UserData getUserInput() {
  UserData userData;

  /* 
    User input
  */
 
  std::cout << "The username: ";
  std::cin >> userData.username;
  std::cout << "The password: ";
  std::cin >> userData.password;

  return userData;
}