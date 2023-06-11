#include <iostream>
#include <string>
#include "Math.h"
#include "FrequencyDomain/FrequencyDomain.h"
#define LOG(x) std::cout << x << std::endl

int main() {
    FrequencyDomain frequencyDomain;
    Octave3rd res;
    res = frequencyDomain.getOctave3rd(777);
    LOG(res.freq);
    LOG(res.power);
    return 0;
}
