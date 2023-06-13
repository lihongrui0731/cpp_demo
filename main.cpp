#include <iostream>
#include <string>
#include "Math.h"
#include "FrequencyDomain/FrequencyDomain.h"
#define LOG(x) std::cout << x << std::endl

int main() {
    auto *values = new float[4800];
    FFT inputData(5, 0, 4800, values);
    FrequencyDomain frequencyDomain{};
    Octave3rd res = frequencyDomain.getOctave3rd(inputData);
    return 0;
}
