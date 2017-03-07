// changeCasse.cpp
// g++ -std=c++11 -Wall -Wextra -o changeCasse.out changeCasse.cpp
#include <cctype>
#include <iostream>
int main(int argc, char ** argv)
{
  //std::string texte = "Toto, Tata";
    // change les minuscules par des majuscules et réciproquement
  char *tmp; 
  for(int j=1; j<argc; j++)
    {
      tmp = argv[j];
      
      for (int i =0; i<sizeof(tmp); i++)
      {
          if (std::islower(tmp[i]))
              std::cout << char(std::toupper(tmp[i]));
          else if (std::isupper(tmp[i]))
              std::cout << char(std::tolower(tmp[i]));
          else 
              std::cout << tmp[i];
      }
    }
  

    return 0;
}
