
#include <iostream>
#include <cstdlib> 
#include <ctime>   

    int main() {

        system("chcp 1251");
        system("cls");
        const int arraySize = 5;  
        int myArray[arraySize];    
        int* ptr = myArray;        
        int sum = 0;               

        
        std::srand(static_cast<unsigned int>(std::time(nullptr)));

        
        for (int i = 0; i < arraySize; i++) {
            *ptr = std::rand() % 100;  
            sum += *ptr;
            ptr++;
        }

        std::cout << "Масив з випадковими значеннями:" << std::endl;
        for (int i = 0; i < arraySize; i++) {
            std::cout << myArray[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "Сума елементів масиву: " << sum << std::endl;

        return 0;
    }
