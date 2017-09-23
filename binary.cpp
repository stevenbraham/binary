#include <iostream>
#include <cmath>

using namespace std;

int getNumberOfBits(long number);

int main (int argc, char* argv[]){
        //cancel if not enough arguments
        if(argc < 2){
                cout << "Please provide a number" << endl;
                return -1;
        }
        //read number from arguments
        long number =  atoi(argv[1]);
        //check if valid input
        if(number < 0){
                cout << "Only positive integers are accepted" << endl;
                return -1;
        }


        int numberOfBits = getNumberOfBits(number);

        for(int i = numberOfBits; i >= 0; i--){
                int result = pow(2,i);
                if(result > number){
                        cout << 0;
                }else{
                        cout << 1;
                        number-= result;
                }
        }
        cout << endl;
        return 0;
}

int getNumberOfBits(long number){
        switch(number){
                case 1:
                        return 1;
                case 0:
                        return 0;
                default:
                        return  ceil(log2(number)) + 1;

        }
}
