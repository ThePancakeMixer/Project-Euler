#include <iostream>
#include <math.h>
using namespace std;



int sumSquareDifference(){
    int sumS=0;//int to store sum of squares
    int sqS=0;//int to store square of sum
    int answer; //variable to store answer

    for(int i=1;i<=100;i++){//loop through 1-100
        sqS+=i;//add i to sqS
        sumS+= (i*i);//add square of i to sum of Squares
    }

    sqS*=sqS;//square squareofSums
    answer = sumS-sqS; //store answer in variable
    if(answer<0) //flip sign if negative
        answer*=-1;
    return answer;//return |sumofSquares - squareofSums|
}

int main(){
    cout<<sumSquareDifference();
}


