#include "fir_cpu.hpp"
#include <stdlib.h> //for size_t

/*
    CPU convolution calculation of x[n] input sampled signal with the FIR coeffs h[k]

    GPU version should match within floating point numerical error
*/

std::vector<float> FIR_cpu_output(const std::vector<float>& x, const std::vector<float>& h)
{
    const size_t X = x.size(); //acquire length of input
    const size_t K = h.size(); //coeffs, num of FIR taps

    std::vector<float> y(X, 0.0f); //output vector y with N elements initialized to 0.0 each

    //Main convolution loop
    for (size_t n = 0; n<X; n++){
        float accumulate = 0.0f; //sum var init

        //accumulate over all taps for each sample
        for (size_t k = 0; k<K; k++){
            //only for nonzero n inputs
            if (n >= k) {
                accumulate += h[k] * x[n-k];
            }
        }

        y[n] = accumulate;
    }
    return y;
}