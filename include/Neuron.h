#pragma once
#include <vector>

class Neuron{
public:
    // @constructor
    Neuron(double value, int index);
    
    // @getters
    double getOutputValue();
    double getActivatedValue();

    // @setters
    void setOutputValue(double value);
    void setActivatedValue(double value);

    // @methods
    void feedForward(std::vector<Neuron>& previousLayer);
private:
    double value;
    double outputValue; // value before activation function
    double activatedValue; // value after activation function
    static double sigmoid(double x);
    struct Connection { double weight; double deltaWeight; };
    std::vector<Connection> connectionWeights;
    int index;
};