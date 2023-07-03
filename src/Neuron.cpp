#include <cmath>
#include <random>
#include "../include/Neuron.h"

// @constructor
Neuron::Neuron(double value, int index, int numOutputNeurons){
    this->setOutputValue(0);
    this->setActivatedValue(0);
    this->index = index;

    // initialize the connection weights with random values
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(-1, 1);

    for(int i = 0; i < numOutputNeurons; i++){
        Connection conn;
        conn.weight = dis(gen);
        conn.deltaWeight = 0;
        this->connectionWeights.push_back(conn);
    };
};

// @setters
void Neuron::setOutputValue(double outValue){ this->outputValue = outValue; };
void Neuron::setActivatedValue(double actValue){ this->activatedValue = actValue; };

// @getters
double Neuron::getOutputValue(){ return this->outputValue; };
double Neuron::getActivatedValue(){ return this->activatedValue; };

// @methods
// feed forward allows the neuron to calculate its output value
void Neuron::feedForward(std::vector<Neuron>& previousLayer){
    double sum = 0.0;
    // for each neuron in the previous layer multiply its output value by the weight of the connection
    // apply sigmoid activation function
    for(int i = 0; i < previousLayer.size(); i++){
        sum +=  previousLayer[i].getOutputValue() *
                previousLayer[i].connectionWeights[this->index].weight;
    };
    this->setOutputValue(sum);
};

// sigmoid activation function
double Neuron::sigmoid(double x){ return 1.0 / (1.0 + std::exp(-x)); };