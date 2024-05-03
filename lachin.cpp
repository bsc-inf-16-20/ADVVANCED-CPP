#include <iostream>
#include <string>

int main(){
 std::string name ;
 std::int phoneNumber ;
 std:: int Age;
 std::string Program ;
 std::char sex ;

    std::cout<<"your are welcome to chanco "<<endl;
     //string name;
     std::cout<<"enter your name :" <<endl;
      std::getline(std::cin,name);


     //int phoneNumber;
     std::cout<<"enter your number :"<<endl;
     std::getline(std::cin,phoneNumber);
    

    //int Age ;
     std::cout<<"enter your age :"<<endl;
     std::getline(std::cin,Age) ;
    

    
    std::cout<<"enter your program :"<<endl;
    std::getline(std::cin,Program) ;
    

   //char sex ;
   std::cout<<"enter your sex:"<<endl;
   std::getline(std::cin,sex) ;

std:: cout<<"name:"<<name<<std::endl;
std:: cout<<"phoneNumber:" <<phoneNumber<<std::endl;
std:: cout<<"program:"<<Program<<std::endl;
std:: cout<<"Age:"<<Age<<std::endl;
std:: cout<<"sex:"<<sex<<std::endl;
std::cout<<"welcome to chanco";
   return 0;
}
