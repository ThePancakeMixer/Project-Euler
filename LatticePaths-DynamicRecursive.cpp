#include <iostream>

long long int dictionary[21][21] = {{0}}; //create dictionary to hold all paths at each index


using namespace std;

long long int calculatePaths(int row, int col) { //finds how many paths there are at row/col indexes [0,0] is bottom right [20,20] is top left

    if (row==0 || col==0) //if on the right edge or bottom edge _|
        return 1; //return 1 for 1 path found

    if(dictionary[row][col]!=0) //if the row/col program wants # of paths for has been computed
        return dictionary[row][col]; //return the saved value

    dictionary[row][col] = calculatePaths(row,col-1) + calculatePaths(row-1,col); //finds how many paths are at row/col and stores it at correct index
    //does this by going tru all combos of going either right or down until an edge is hit _|
    return dictionary[row][col]; //return # of paths at row/col
}

int main(){ //returns # of lattice paths in 20x20 grid
    cout<<calculatePaths(20,20); //prints # of paths from the top left to the bottom right of a 20x20 grid
}