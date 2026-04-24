#pragma once
#include <iostream>
#include <map>

class Flyweight {
private:
    std::string state;
public:
    Flyweight(std::string s) : state(s) {}
    void operation() {
        std::cout << "State: " << state << "\n";
    }
};

class FlyweightFactory {
private:
    std::map<std::string, Flyweight*> pool;
public:
    Flyweight* get(std::string key) {
        if (pool.find(key) == pool.end())
            pool[key] = new Flyweight(key);
        return pool[key];
    }
};