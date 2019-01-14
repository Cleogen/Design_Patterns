#pragma once

#include <iostream>

class Singleton{
private:
    Singleton(){
        std::cout << "Created\n";
    };

public:
    static Singleton& get_instance(){
        static Singleton singleton = Singleton();
        return singleton;
    }
    ~Singleton(){
        std::cout << "Killed\n";
    };

    void function(){
        std::cout << "Functioning\n";
    };

    Singleton(Singleton&) = delete;
    Singleton&operator=(Singleton&) = delete;
};