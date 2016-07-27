#include <iostream>
using namespace std;


int* doExponent(int base,int exponent) { //returns 350 digit array of base^exponent


    int* temp1 = new int[350]; //array to store the end product
    for (int i = 0; i < 350; i++) //set all indexies to 0
        temp1[i] = 0;

    temp1[349] = 1; //end of temp1 is least sig digits. set last one to 1 cuz 1=2^0

    for (int i = 0; i < exponent; i++) {  //for loop to keep going until desired exponent is reached
        for (int j = 349; j >= 5; j--) {
            temp1[j] = temp1[j] * base; //multiply each digit in temp1 by base
        }
        for(int x = 349; x>=5; x--){ //make sure no digit on the arary exceeds 9
            temp1[x-1] += temp1[x]/10; //shift all digits but the ones place to the left
            temp1[x]%=10; //strip all digits but the ones place
        }
    }

    return temp1; //returns array with product
}


int sumDigits(int* a){ //sums up digits in array a
    int total = 0; //var to hold sum of all digits
    for(int i=0;i<350;i++){
        total+=a[i]; //sum up all digits
    }
    return total; //return sum of all digits in array a
}


int main(){ //returns sum of each digit in 2^1000
    int* a = doExponent(2,1000); //does 2^1000 and saves it in int* a
    cout<<sumDigits(a); //prints out the sum of all digits of 2^1000

}