//
// Created by stdd0 on 16.07.2022.
//

#ifndef MODULATOR_SENDER_H
#define MODULATOR_SENDER_H


#include "QPSKmodulator.h"

class Sender : public QPSKmodulator {
private:
    int noisedData[16];
public:
    int addNoise(int modulatedData);
    int getNoisedData();
};


#endif //MODULATOR_SENDER_H
