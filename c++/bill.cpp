#include <iostream>
#include <string>

const double bill_for_clients = 4.50 ;
const double basic_service_for_clients = 20.50;
const double price_for_premium_channels = 7.50;

const double bill_for_business = 15.00;
const double basic_service_fee_for_businesses = 75.00;
const double price_for_premium_channels_for_businesses = 50.00;
int main() {

  unsigned account_number;
  std::string client_code;
  unsigned premium_channels;
  unsigned premium_channels_for_businesses;

  double final_bill_for_clients;
  double final_bill_for_business;

std::cout <<"Enter account number: ";
std::cin>>account_number; //0.051
std::cout <<"Enter client code: ";
std::cin>>client_code; //0.18
std::cout <<"Enter number of premium channels: ";
std::cin>>premium_channels; //0.27
  
  
  if (client_code == "R" || client_code =="r"){ 
    final_bill_for_clients= (price_for_premium_channels * premium_channels) + bill_for_clients + basic_service_for_clients;
  std::cout<< " Final bill is " << final_bill_for_clients;
    std::cout<< " \n"  ;
  }
   else if(client_code =="B" || client_code == "b"){

    final_bill_for_business= (premium_channels_for_businesses * premium_channels_for_businesses) + bill_for_business + basic_service_fee_for_businesses;

    std::cout<< " Final bill is " << final_bill_for_business; 
    std::cout<< " \n"  ;
    
    
  } else if(client_code == "B" || client_code == "r", premium_channels_for_businesses > 10){

unsigned connections;
std::cout <<"Enter number of connections above 10: ";
std::cin>>connections;
connections = connections * 5;

 final_bill_for_business= (price_for_premium_channels_for_businesses * premium_channels_for_businesses) + bill_for_business + basic_service_fee_for_businesses + connections;
 std::cout<< " \n"  ;
  }
    
  
  
}


//δεν ξερω πως να ξεχωρισω client με business με την μαλακια που λεει με τον αριθμο πελατη και κωδικο γισ να φτιαξω την if