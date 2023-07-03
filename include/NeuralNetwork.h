#include "../include/Layer.h"
#include <vector>

class NeuralNetwork{
public:
    // @constructor
    NeuralNetwork(std::vector<int> topology);

    // @setters
    void setCurrentInputLayer(std::vector<double> inputLayer);
    void setCurrentTargetLayer(std::vector<double> targetLayer);
    double setErrors();

    // @getters
    double getTotalError();

    // @methods    
    void feedForward();
    void backPropagation();

private:
    std::vector<Layer> layers;
    std::vector<double> inputLayer;
    std::vector<double> targetLayer;
    double error;
    double recentAverageError;
};