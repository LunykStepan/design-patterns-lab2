#pragma once
#include <iostream>

class Device {
public:
    virtual void turnOn() = 0;
};

class TV : public Device {
public:
    void turnOn() override {
        std::cout << "TV ON\n";
    }
};

class Remote {
protected:
    Device* device;
public:
    Remote(Device* d) : device(d) {}
    virtual void pressPower() {
        device->turnOn();
    }
};