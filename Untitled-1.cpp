#include <iostream>


int counter = 0;
int main(){
    std::cout << "Podaj słowo: ";
    std::string toFind;
    std::cin >> toFind;
    std::string tekst = "ala ma kota";
    for(int i=0;i<tekst.length();i++){
        for(int j=0;i<toFind.length();j++){
            if(toFind[j]==tekst[i+j]){
                counter++;
                std::cout << toFind[j];
                std::cout << "==";
                std::cout << tekst[i+j];
                std::cout << "; ";
                
                std::cout << counter;
                std::cout << ";;    ";
                if(counter==toFind.length()){
                    std::cout << "Znalezione";
                    break;
                }
            break;
            std::cout << "break";
            }
        }
    }
    return 0;
};