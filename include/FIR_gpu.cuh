#pragma once
#include <vector>

/*
    GPU FIR filter interface  

    in addition to x input sample and h characteric coeffs, arguments include y output and timing
*/
void FIR_gpu_output(const std::vector<float>& x, const std::vector<float>& h, std::vector<float>& y, float& kernel_ms);
//not a vector type to store array of samples anymore