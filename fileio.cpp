//fileio.cpp

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int main(){
  std::ifstream inFile;
  std::string currentLine;
  std::stringstream ss;
  std::stringstream converter;
  int num1;
  int num2;
  int total;
  std::string sCounter;
  std::string text;

  inFile.open("data.csv");
  while (getline(inFile, currentLine)){
    
    ss.clear();
    ss.str("");
    converter.clear();
    converter.str("");

    ss.str(currentLine);

    getline(ss, sCounter, ',');
    converter << sCounter;
    converter >> num1;
    converter.clear();

    getline(ss, sCounter, ',');
    converter << sCounter;
    converter >> num2;

    getline(ss, text);
    total = num1 + num2;

    for (int i = 0; i < total; i++){
    std::cout << text;
    } // end for
    std::cout << std::endl;
  } // end while
  inFile.close();
} //end main
