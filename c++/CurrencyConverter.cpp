#include <iostream>

int main() {
  double Pesos;
  double Reais;
  double Soles;
  double dollars;

std::cout <<"Enter number of Colombian Pesos: ";
std::cin>>Pesos; //0.051
std::cout <<"Enter number of Reais: ";
std::cin>>Reais; //0.18
std::cout <<"Enter number of Soles: ";
std::cin>>Soles; //0.27
  
  dollars= (0.051 * Pesos) + (0.18 * Reais) + (0.27 * Soles);
  std::cout<< "US Dollars = $ " << dollars; //converts and sums everything 
}
