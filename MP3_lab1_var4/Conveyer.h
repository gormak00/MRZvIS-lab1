#include <iostream>
#include <thread>
#include <mutex>
#include <vector>

using namespace std;

#ifndef CONVEYER_H
#define CONVEYER_H

class Conveyer {
public:
    void calculate (vector<int> first, vector<int> second);
    static void printBinary(int numInTen);

private:
    // MAX num of digits in binary nums
    static const int MAX_DIGIT_INDEX = 3;
    static const int MAX_RESULT_DIGIT_INDEX = 7;
    
    //imitations for four-digit nums only in decimal nums for input check
    static const int MAX_NUM_TO_CALC = 16;
    static const int MIN_NUM_TO_CALC = 8;

    //Timer and Stage counter to count tacts
    int myTimer;
    int stager;

    vector<int> first;
    vector<int> second;
    vector<pair<int, int>> outputVec;

    //Multiple threads
    mutex corPrint;

    //Input check
    void checkVectors(int index);

    void addToResult(int digit, int index);
    void printStep(int digit, int index);

    //Print funcs
    void printOutput();
    void printInput();

};

#endif //CONVEER_CONVEYER_H
