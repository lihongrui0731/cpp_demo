#pragma once
#include "../DataStruct.h"

class FrequencyDomain {
public:
    Octave3rd octave3rdRes;
public:
    Octave3rd getOctave3rd(FFT inputData);
    void setSize(int size);
};