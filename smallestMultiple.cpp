#include <iostream>
#include <math.h>
using namespace std;



int smallestPositive(){
    bool isDivisible=false; //flag to see if input is evenly divisible
    int smallestPositive = 20;//var to hold smallest positive divisible by 1-20

    loopback:

    smallestPositive++; //check next number
    while(!isDivisible){ //while no number is found
        isDivisible=true; //innocent until proven guilty
        for(int i =1; i<=20; i++){ //loop through 1-20
            if(smallestPositive % i != 0){ //if the input is not evenly divisible by 1-20
                isDivisible=false; //set isDivisible to false;
                goto loopback; //try again
            }
        }
    }
    return smallestPositive; //return smallest positive divisible by 1-20
}

int main(){
    cout<<smallestPositive(); //returns smallestPositive divisible 1-20
}


