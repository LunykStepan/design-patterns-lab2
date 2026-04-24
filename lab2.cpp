#include <iostream>
#include "Adapter.h"
#include "Bridge.h"
#include "Composite.h"
#include "Decorator.h"
#include "Facade.h"
#include "Flyweight.h"
#include "Proxy.h"

int main() {    

    std::cout << "=== Adapter ===\n";
    IPrinter* printer = new PrinterAdapter();
    printer->print();

    std::cout << "\n=== Bridge ===\n";
    Device* tv = new TV();
    Remote remote(tv);
    remote.pressPower();

    std::cout << "\n=== Composite ===\n";
    Composite comp;
    comp.add(new Leaf());
    comp.add(new Leaf());
    comp.operation();

    std::cout << "\n=== Decorator ===\n";
    Coffee* coffee = new MilkDecorator(new SimpleCoffee());
    std::cout << "Cost: " << coffee->cost() << "\n";

    std::cout << "\n=== Facade ===\n";
    ComputerFacade pc;
    pc.start();

    std::cout << "\n=== Flyweight ===\n";
    FlyweightFactory factory;
    auto f1 = factory.get("A");
    auto f2 = factory.get("A");
    f1->operation();
    f2->operation();

    std::cout << "\n=== Proxy ===\n";
    Image* img = new ProxyImage();
    img->display();
    img->display();

    return 0;
}