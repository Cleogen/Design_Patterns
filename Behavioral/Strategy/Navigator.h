#pragma once

#include "RouteStrategy.h"

class Navigator {
protected:
	RouteStrategy *m_routeStrategy;

public:
	explicit Navigator(RouteStrategy *routeStrategy)
			: m_routeStrategy(routeStrategy) {}

	~Navigator() = default;

	void buildRoute() {
		m_routeStrategy->buildRoute();
	}

	void setStrategy(RouteStrategy *strategy) {
		m_routeStrategy = strategy;
	}
};
