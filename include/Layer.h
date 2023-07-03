#pragma once
#include "Neuron.h"
#include <vector>

class Layer {
public:
    // @constructor
    Layer(int size, int numOutputs);

    // @getters
    std::vector<double> getOutputs() const;

    // @methods
    void feedForward(const Layer &prevLayer);
    void calculateOutputLayerGradients(const std::vector<double> &targetValues);
    void calculateHiddenLayerGradients(const Layer &nextLayer);
    void updateWeights(Layer &prevLayer);

private:
    std::vector<Neuron> neurons;
};
