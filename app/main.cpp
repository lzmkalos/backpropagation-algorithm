#include "../include/NeuralNetwork.h"
#include <iostream>

int main(){
    std::cout << "AI -> Backpropagation algorithm" << std::endl;

    // creating a neural network with 3 layers (topology: how many neurons per layer & how many layers)
    std::vector<int> topology = {2, 4, 1};
    NeuralNetwork nn(topology);
    return 0;
};