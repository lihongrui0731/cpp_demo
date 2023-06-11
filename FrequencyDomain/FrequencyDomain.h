#pragma once
#include "../DataStruct.h"

class FrequencyDomain {
public:
    float Octave3rdRes[];
public:
    Octave3rd getOctave3rd(int inputData);
    void setSize(int size);
};