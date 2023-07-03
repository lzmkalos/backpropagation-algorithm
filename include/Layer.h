#include "../include/Neuron.h"
#include <vector>

class Layer{
public:
    // @constructor
    Layer(int size){
        // initialize the layer with the number of neurons
        for(int i = 0; i < size; i++) {
            neurons.push_back(Neuron(0));
        };
    };

    // @getters
    int getSize() const { return neurons.size(); };

    // @methods
    // return the neuron at the given index
    Neuron &operator[](int index) { return neurons[index]; };
private:
    std::vector<Neuron> neurons;
};