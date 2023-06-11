#pragma once

struct FFT {
//    float deltaFreq;
//    float* values;
//    int baseFreq;
//    int frameLength;
    int aaa;
};

struct Octave3rd {
    int m_size;
    float freq;
    float power;
    float dataset[];
    void setSize(int size) {
        m_size = size;
    }
};