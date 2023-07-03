#include "../include/Neuron.h"
#include <vector>

class Layer{
public:
    // @constructor
    Layer(int size);
    
private:
    std::vector<Neuron> neurons;
};