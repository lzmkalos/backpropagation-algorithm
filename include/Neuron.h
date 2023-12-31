#pragma once
#include "../include/Layer.h"
#include <vector>

class Neuron{
private:
    double value;
    double outputValue; // value before activation function
    double activatedValue; // value after activation function
    double gradient;
    
    static double sigmoid(double x);
    static double sigmoidDerivative(double x);

    struct Connection { double weight; double deltaWeight; };
    std::vector<Connection> connectionWeights;
    int index;
public:
    // @constructor
    Neuron(double value, int index, int numOutputNeurons);
    
    // @getters
    double getOutputValue();
    double getActivatedValue();
    double getGradient();

    // @setters
    void setOutputValue(double value);
    void setActivatedValue(double value);
    void setGradient(double gradient);

    // @methods
    void feedForward(std::vector<Neuron>& previousLayer);
    void calculateOutputGradients(double targetVal);
    void calculateHiddenGradients(std::vector<Neuron>& nextLayer);
    void updateInputWeights(std::vector<Neuron>& previousLayer);
    double sumDOW(std::vector<Neuron>& nextLayer);
};