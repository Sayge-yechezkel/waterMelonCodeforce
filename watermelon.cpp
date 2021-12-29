#include <iostream>
using namespace std;


int main(){
    //asign variable
    int num = 0;
    int d = 2;
    float w ;
    //asking to put in a number
    std::cout << "Enter The amount of watermelon" << std::endl;
    //take the number input and store it to the variable num
    std::cin >> num;
    // (/) for divide and show the number aftre divide (%)show the remainder after divide 
  
    //if it can be divided by 2 it a even number if it can't it will always have a remaider

    w = num % d;

    

    //this checks to see if it's equal to 0 and print Yes
    if ( w == 0){
      std::cout << "Yes" << std::endl;
      //if it not equal to 0 default to No regardless
    }
    else{
       std::cout << "No" << std::endl;
    
        
   }
}
