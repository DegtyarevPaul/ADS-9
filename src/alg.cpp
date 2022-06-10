// Copyright 2021 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "bst.h"

BST<std::string> makeTree(const char* filename) {
  BST<std::string> Tree;
  char ch;
  std::ifstream file(name);
  std::string temp = "";
  std::string word = temp;
  while (!file.eof()) {
    ch = file.get();
    if ((ch >= 'A') && (ch <= 'Z')) ch += 32;
    if ((ch >= 'a') && (ch <= 'z')) {
      word += ch;
    } else {
      Tree.add(word);
      word = temp;
    }
  }
  file.close();
  return Tree;
}
