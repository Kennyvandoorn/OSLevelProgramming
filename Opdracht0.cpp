#include <iostream>
#include <string>
using namespace std;
std::string translate(std::string line, std::string argument)
{
  if (argument == "draai")
  {
    char karakter_1 = 0;
    int len = line.size() - 1;
    int aantalswaps = (line.size() / 2);
  
    for(int i = 0; i < aantalswaps; i++)
    {
      karakter_1 = line[i];
      line[i] = line[len - i];
      line[len - i] = karakter_1;
    }
  
  std::string result = line;
  return result; 
  }
  else
  {
    std::cerr << "Geef het argument 'draai' om de invoer te reversen!" << endl;
  }
}

int main(int argc, char *argv[])
{ std::string line;

  if(argc != 2)
  { std::cerr << "Deze functie heeft exact 1 argument nodig" << std::endl;
    return -1; }

  while(std::getline(std::cin, line))
  { std::cout << translate(line, argv[1]) << std::endl; } 

  return 0; }