#pragma once

struct RouteStrategy {
	virtual ~RouteStrategy() = default;

	virtual void buildRoute() = 0;
};

struct Car : RouteStrategy {
	void buildRoute() override {
		// build the most efficient road for the car
	};
};

struct PublicTransport : RouteStrategy {
	void buildRoute() override {
		// get the most efficient public transport
	}
};

struct Walk : RouteStrategy {
	void buildRoute() override {
		// find the most beautiful road for walking
	}
};