#include <iostream>
#include <string>

#include "mongocxx/instance.hpp"

#include "mongodb_handler.h"


int main() {
  mongocxx::instance instance;
  learning::MongoDbHandler mhandler;
  mhandler.AddCharacterToDb("Donkey Kong",
			    learning::CharacterSize::kLarge, 0);
  std::cout << "Hello monkey! \n";
  return 0;
}
