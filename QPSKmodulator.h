//
// Created by stdd0 on 16.07.2022.
//

#ifndef MODULATOR_QPSKMODULATOR_H
#define MODULATOR_QPSKMODULATOR_H


class QPSKmodulator {
private:
    int sourceData[16];
    int modulatedData[16];
public:
    int modulate(int sourceData);
    int demodulate(int modulatedData);
    int getSourceData();
    int getModulatedData();
};


#endif //MODULATOR_QPSKMODULATOR_H
