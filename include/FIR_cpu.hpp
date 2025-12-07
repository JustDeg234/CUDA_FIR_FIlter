//Diego Davalos - 12/7/25
#pragma once //NVCC cuda compiler driver supports this preprocessor directive
#include <vector> //array

/*
Goal: Compute the general formula for FIR filters

    y[n] = sum{k=0}^{M} h[k] * x[n-k] , Order M-1 (num of delays; exclu first sample aka now), M - tap filter (num of coeffs; incl first sample)

*/

std::vector<float> FIR_output(const std::vector<float>& x, const std::vector<float>& h); //Note: Pass in reference to avoid duplicate storing of sample array within memory