// Layer.cpp
#include "../include/Layer.h"

// @constructor
Layer::Layer(int size, int numOutputs) {
    for (int i = 0; i < size; ++i) {
        neurons.push_back(Neuron(0.0, i, numOutputs));
    }
    // Force the bias node's output value to 1.0. It's the last neuron created above
    neurons.back().setOutputValue(1.0);
}

// @getters
std::vector<double> Layer::getOutputs() const {
    std::vector<double> outputs;
    for (int i = 0; i < neurons.size(); ++i) {
        outputs.push_back(neurons[i].getOutputValue());
    }
    return outputs;
}

Neuron& Layer::operator[](int index) { // add this function
    return neurons[index];
}

int Layer::size() const { // add this function
    return neurons.size();
}

// @methods
void Layer::feedForward(const Layer &prevLayer) {
    for (int i = 0; i < neurons.size(); ++i) {
        neurons[i].feedForward(prevLayer);
    }
}

void Layer::calculateOutputLayerGradients(const std::vector<double> &targetValues) {
    for (int i = 0; i < neurons.size(); ++i) {
        neurons[i].calculateOutputGradients(targetValues[i]);
    }
}

void Layer::calculateHiddenLayerGradients(const Layer &nextLayer) {
    for (int i = 0; i < neurons.size(); ++i) {
        neurons[i].calculateHiddenGradients(nextLayer);
    }
}

void Layer::updateWeights(Layer &prevLayer) {
    for (int i = 0; i < neurons.size(); ++i) {
        neurons[i].updateInputWeights(prevLayer);
    }
}