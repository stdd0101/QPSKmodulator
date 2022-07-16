//
// Created by stdd0 on 16.07.2022.
//

#ifndef MODULATOR_DSSSTESTER_H
#define MODULATOR_DSSSTESTER_H


#include "Receiver.h"
#include "Sender.h"

class DSSStester {
public:
    Sender sender;
    Receiver receiver;
public:
    int singleTest(int sourceMessage[16]);


};


#endif //MODULATOR_DSSSTESTER_H
