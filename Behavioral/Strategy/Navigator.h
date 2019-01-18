#pragma once

#include "RouteStrategy.h"

class Navigator {
protected:
    RouteStrategy *m_routeStrategy;

public:
    explicit Navigator(RouteStrategy *routeStrategy)
            : m_routeStrategy(routeStrategy) {}

    ~Navigator() {
        delete m_routeStrategy;
    }

    void buildRoute() {
        m_routeStrategy->buildRoute();
    }

    void setStrategy(RouteStrategy *strategy) {
        delete m_routeStrategy;
        m_routeStrategy = strategy;
    }
};
