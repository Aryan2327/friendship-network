#ifndef Song_H
#define Song_H
#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;
class Song{ 
public:
  void setTitle(string);
  string getTitle();
  void addListen();
  void resetListens();
  int getListens();

private:
  string title;
  unsigned int listens;
};

#endif