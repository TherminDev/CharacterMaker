#include <iostream>

class Character {
  public:
    std::string name;
    unsigned short age;
    unsigned int weight;
    std::string haircolor;
    std::string eyecolor;
    std::string skincolor;
};

int main() {
  Character character;

  std::cout << "Welcome, user to character creator!" << std::endl << "Please enter a name for your character: ";
  std::string name;
  std::cin >> character.name;

  std::cout << "Please enter the age of " << character.name << ": ";
  std::cin >> character.age;

  std::cout << "Please enter the weight of " << character.name << " (in lbs): ";
  std::cin >> character.weight;

  std::cout << "Please enter the hair color of " << character.name << ": ";
  std::cin >> character.haircolor;

  std::cout << "Please enter the eye color of " << character.name << ": ";
  std::cin >> character.eyecolor;

  std::cout << "Please enter the skin color of " << character.name << ": ";
  std::cin >> character.skincolor;

  std::cout << character.name << ", who is " << character.age << " and " <<character.skincolor;
  std::cout << " , weights " << character.weight << " lbs, has " << character.haircolor << " hair and " << character.eyecolor << " eyes, now exists but only in your head." << std::endl;
}
