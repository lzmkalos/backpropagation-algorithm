class Neuron{
public:
    // @constructor
    Neuron(double value): value(value), bias(0), activatedValue(0), derivedValue(0){};
    
    // @getters
    double getValue() const { return value; };
    double getBias() const { return bias; };
    double getActivatedValue() const { return activatedValue; };
    double getDerivedValue() const { return derivedValue; };

    // @setters
    void setValue(double value) { this->value = value; };

private:
    double value;
    double bias;
    double activatedValue;
    double derivedValue;
};