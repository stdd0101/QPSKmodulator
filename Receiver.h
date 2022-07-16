//
// Created by stdd0 on 16.07.2022.
//

#ifndef MODULATOR_RECEIVER_H
#define MODULATOR_RECEIVER_H


#include "Sender.h"

class Receiver : public Sender {
private:
    int filteredData[16];
public:
    int filterData(int noisedData);
    int getFilteredData();
};


#endif //MODULATOR_RECEIVER_H
