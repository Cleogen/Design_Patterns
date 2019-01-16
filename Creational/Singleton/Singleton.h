#pragma once

class Singleton{
private:
    Singleton() = default;
    ~Singleton() = default;
    
public:
    static Singleton& get_instance(){
        static Singleton singleton = Singleton();
        return singleton;
    }

    Singleton(Singleton&) = delete;
    Singleton&operator=(Singleton&) = delete;
};