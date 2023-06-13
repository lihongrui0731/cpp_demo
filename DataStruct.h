#pragma once

class FFT {
public:
    float deltaFreq;
    float* values;
    int valuesLen;
    int baseFreq;
    int frameLength;
public:
    FFT(float deltaFreq_, int baseFreq_, int frameLength_, float* values_) {
        deltaFreq = deltaFreq_;
        baseFreq = baseFreq_;
        frameLength = frameLength_;
        values = values_;
        valuesLen = sizeof(values) / sizeof(float);
    };
};

class Octave3rd {
private:
    int m_size;
    float* freq;
    int freqLen;
    float power;
    float dataset[];
public:
    void setSize(int size) {
        m_size = size;
    }
    void setFreq(float* freq_, int len_) {
        freq = freq_;
    }
    void setPower() {}
};