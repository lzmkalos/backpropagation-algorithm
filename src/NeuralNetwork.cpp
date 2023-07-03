#include <iostream>

#include "../include/NeuralNetwork.h"

NeuralNetwork::NeuralNetwork(std::vector<int> topology) {
    // Inicializa las capas de la red neuronal basándose en la topología dada
    std::cout << "Hola mano" << std::endl;
    for(auto el : topology) {
        std::cout << el << std::endl;
    };
}

void NeuralNetwork::setCurrentInputLayer(std::vector<double> inputLayer) {
    // Establece la capa de entrada actual a los puntos de entrada dados
    for(auto el : inputLayer) {
        std::cout << el << std::endl;
    };
}

void NeuralNetwork::setCurrentTargetLayer(std::vector<double> targetLayer) {
    // Establece la capa objetivo actual a los puntos objetivo dados
    for(auto el : targetLayer) {
        std::cout << el << std::endl;
    };
}

void NeuralNetwork::feedForward() {
    // Propaga los valores de entrada a través de la red
}

void NeuralNetwork::backPropagation() {
    // Ajusta los pesos de la red basándose en el error entre la salida de la red y los valores objetivo
}