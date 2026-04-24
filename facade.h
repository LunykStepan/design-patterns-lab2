#pragma once
#include <iostream>

class CPU {
public:
    void start() { std::cout << "CPU start\n"; }
};

class Memory {
public:
    void load() { std::cout << "Memory load\n"; }
};

class ComputerFacade {
private:
    CPU cpu;
    Memory memory;
public:
    void start() {
        cpu.start();
        memory.load();
    }
};