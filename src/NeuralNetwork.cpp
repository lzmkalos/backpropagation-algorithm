#include "../include/NeuralNetwork.h"

#include <iostream>
#include <cmath>

NeuralNetwork::NeuralNetwork(std::vector<int> topology) {
    // initialize the topology of the network based on the given topology
    for(int i = 0; i < topology.size(); i++) {
        layers.push_back(Layer(topology[i]));
    };
};

void NeuralNetwork::setCurrentInputLayer(std::vector<double> inputLayer) { this->inputLayer = inputLayer; };

void NeuralNetwork::setCurrentTargetLayer(std::vector<double> targetLayer) { this->targetLayer = targetLayer; };

void NeuralNetwork::feedForward() {

};

void NeuralNetwork::backPropagation() {
    // Ajusta los pesos de la red basándose en el error entre la salida de la red y los valores objetivo
}