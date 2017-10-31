/*
 Project: Project 6
 Name: Gabriel Hurtado
 Instructor: Dr. Hwang
 Class: Data Structures 
 
 */
#include <iostream>
#include <cstdlib>


using namespace std;

//void moveDiscs(int, char, char, char, char []);

void moveDiscs (int num, char fromPeg, char toPeg, char tempPeg, 
                char myArray[], int size){
    
    if (num > 0){
        moveDiscs(num - 1, fromPeg, tempPeg, toPeg, myArray, size);
        cout << "Move disc " << num <<  " from peg " << fromPeg << " to peg " 
                << toPeg << ": (";
        myArray[num-1] = toPeg;
        for (int i = 0; i<size; i++){
            cout << myArray[i];
            if (i != (size - 1)){
                cout << ", ";
            }
        }
        cout << ")" << endl;
        moveDiscs(num - 1, tempPeg, toPeg, fromPeg, myArray, size);
    }
}

int main(int argc, char** argv) {
    
    const int NUM_DISCS = 3;
    const char FROM_PEG = 'A';
    const char TO_PEG = 'C';
    const char TEMP_PEG = 'B';
    const int DISC1 = 1;
    const int DISC2 = 2;
    const int DISC3 = 3;
    char myArray[] = {'A', 'A', 'A'};
    char myArray1[] = {'A', 'A', 'A', 'A'};
    char myArray2[] = {'A', 'A', 'A', 'A', 'A'};
    int size = 3;
    
    cout << "Beginning position of three discs: " << "(" << FROM_PEG << ", " 
            << FROM_PEG << ", " << FROM_PEG << ")" << endl;
    moveDiscs(NUM_DISCS, FROM_PEG, TO_PEG, TEMP_PEG, myArray, size);
    cout << "All the pegs are moved!" << endl << endl;
    
    cout << "Beginning position of four discs: " << "(" << FROM_PEG << ", " 
            << FROM_PEG << ", " << FROM_PEG << ", " << FROM_PEG << ")" << endl;
    moveDiscs(4, FROM_PEG, TO_PEG, TEMP_PEG, myArray1, 4);
    cout << "All the pegs are moved!" << endl << endl;
    
    
    cout << "Beginning position of five discs: " << "(" << FROM_PEG << ", " 
            << FROM_PEG << ", " << FROM_PEG << ", " << FROM_PEG << 
            ", " << FROM_PEG << ")" << endl;
     moveDiscs(5, FROM_PEG, TO_PEG, TEMP_PEG, myArray2, 5);
    cout << "All the pegs are moved!" << endl << endl;
    
    
    return 0;
}


