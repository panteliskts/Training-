#include <iostream>
int main() {
  
  int weight;
  std::cout<< "Your weight is ";
  std::cin>> weight;


std::cout<< "The planets are: \n 1-Mercury 2-Venus\n 3-Mars 4-Jupiter\n 5-Saturn 6-Uranus\n 7-Neptune\n";

  int planet;
  std::cout<< "The number of the planet you want to fight is  ";
  std::cin>> planet;

  double newweight;

  switch(planet){

    case 1 :
    newweight= weight*0.38;
      std::cout << "You are "<< newweight << "kg\n";
      break;
    case 2 :
      newweight= weight*0.91;
      std::cout << "You are "<< newweight << "kg\n";
      break;
    case 3 :
     newweight= weight*0.38;
      std::cout << "You are "<< newweight << "kg\n";
      break;
    case 4 :
     newweight= weight*2.34;
      std::cout << "You are "<< newweight << "kg\n";
      break;
    case 5 :
  newweight= weight*1.06;
      std::cout << "You are "<< newweight << "kg\n";
      break;
    case 6 :
      newweight= weight*0.92;
      std::cout << "You are "<< newweight << "kg\n";
      break;
    case 7 :
      newweight= weight*1.19;
      std::cout << "You are "<< newweight << "kg\n";
      break;
    default :
      std::cout << "Planets are from 1-7 \n";
      break;
  
  }
  
  
  
  
  
  
  
  
  
  
}
  
  
  
  
  
  
  
  
  
  
  
