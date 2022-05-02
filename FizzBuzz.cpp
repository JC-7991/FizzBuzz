#include <iostream>

int main(){

  int size;

  std::cout << "Enter the range of numbers: ";

  while(!(std::cin >> size) || (size <= 0)){

    std::cout << "Enter a valid number: ";
    std::cin.clear();
    std::cin.ignore(123, '\n');

  }

  for(int i = 1; i <= size; i++){

    if((i % 3 == 0) && (i % 5 == 0)){
      std::cout << "FizzBuzz\n";
    }

    else if(i % 3 == 0){
      std::cout << "Fizz\n";
    }

    else if(i % 5 == 0){
      std::cout << "Buzz\n";
    }

    else{
      std::cout << i << "\n";
    }

  }

  return 0;

} 