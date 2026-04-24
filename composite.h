#pragma once
#include <iostream>
#include <vector>

class Component {
public:
    virtual void operation() = 0;
};

class Leaf : public Component {
public:
    void operation() override {
        std::cout << "Leaf\n";
    }
};

class Composite : public Component {
private:
    std::vector<Component*> children;
public:
    void add(Component* c) {
        children.push_back(c);
    }
    void operation() override {
        for (auto c : children)
            c->operation();
    }
};