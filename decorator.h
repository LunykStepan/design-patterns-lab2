#pragma once
#include <iostream>

class Coffee {
public:
    virtual int cost() = 0;
};

class SimpleCoffee : public Coffee {
public:
    int cost() override { return 10; }
};

class MilkDecorator : public Coffee {
private:
    Coffee* coffee;
public:
    MilkDecorator(Coffee* c) : coffee(c) {}
    int cost() override {
        return coffee->cost() + 5;
    }
};