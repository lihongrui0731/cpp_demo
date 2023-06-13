#include <iostream>
#include <cmath>
#include "../DataStruct.h"
#include "FrequencyDomain.h"
#define LOG(x) std::cout << x << std::endl


Octave3rd FrequencyDomain::getOctave3rd(FFT inputData) {
    std::cout << "inputData.values length: " << (inputData.valuesLen) << std::endl;
    for (int i = 0; i < inputData.valuesLen; i++) {
        LOG(inputData.values[i]);
    }
    return octave3rdRes;
}

void FrequencyDomain::setSize(int size) {
    float arr[size];

}