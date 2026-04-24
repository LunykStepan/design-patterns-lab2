#pragma once
#include <iostream>

class OldPrinter {
public:
    void printOld() {
        std::cout << "Old printer\n";
    }
};

class IPrinter {
public:
    virtual void print() = 0;
};

class PrinterAdapter : public IPrinter {
private:
    OldPrinter oldPrinter;
public:
    void print() override {
        oldPrinter.printOld();
    }
};