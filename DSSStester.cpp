//
// Created by stdd0 on 16.07.2022.
//
#include "iostream"
#include "DSSStester.h"

using namespace std;
int DSSStester::singleTest(int sourceMessage[16]) {
    sender.modulate(1);
    sender.addNoise(8);
    cout << sender.getNoisedData() << endl;
    receiver.filterData(sender.getNoisedData());
    receiver.demodulate(receiver.getFilteredData());
    if(receiver.getSourceData() != *sourceMessage)
        return -1;
    else
        return 0;

}