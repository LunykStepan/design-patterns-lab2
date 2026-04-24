#pragma once
#include <iostream>

class Image {
public:
    virtual void display() = 0;
};

class RealImage : public Image {
public:
    RealImage() {
        std::cout << "Loading image...\n";
    }
    void display() override {
        std::cout << "Displaying image\n";
    }
};

class ProxyImage : public Image {
private:
    RealImage* real = nullptr;
public:
    void display() override {
        if (!real)
            real = new RealImage();
        real->display();
    }
};