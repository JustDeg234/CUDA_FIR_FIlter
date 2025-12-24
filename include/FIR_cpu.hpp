//Diego Davalos - 12/7/25
#pragma once //NVCC cuda compiler driver supports this preprocessor directive, ensures header file only included once in a single compilation
#include <vector> //array

/*
Goal: Compute the general formula for FIR filters

    y[n] = sum{k=0}^{M} h[k] * x[n-k] , Order M (num of delays; exclu first sample aka now), M+1 - tap filter (num of coeffs; incl first sample)

*/

std::vector<float> FIR_cpu_output(const std::vector<float>& x, const std::vector<float>& h); //Note: Pass in reference to avoid duplicate storing of sample array within memory

