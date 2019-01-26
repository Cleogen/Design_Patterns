#pragma once

#include <iostream>
#include "Subject&Observer.h"

class Subscriber : public Observer {
public:
    Subscriber(const std::string &name)
            : m_name(name) {}

    void update(const std::string &data) override {
        // do something on update
    }

private:
    std::string m_name;
};