#include "../include/NeuralNetwork.h"
#include <iostream>

int main(){
    std::cout << "AI -> Backpropagation algorithm" << std::endl;

    // creating a neural network with 3 layers (topology: how many neurons per layer & how many layers)
    std::vector<int> topology = {2, 4, 1};
    NeuralNetwork nn(topology);

    // setting the input and target layers
    std::vector<double> inputLayer = {0.5, 0.8};
    std::vector<double> targetLayer = {0.3, 0.9};
    nn.setCurrentInputLayer(inputLayer);
    nn.setCurrentTargetLayer(targetLayer);

    // execute the feedforward algorithm
    nn.feedForward();

    return 0;
};