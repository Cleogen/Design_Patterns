#pragma once

#include <vector>
#include <string>

struct Observer {
	virtual void update(const std::string &) = 0;

	virtual ~Observer() = default;
};

struct Subject {
	std::vector<Observer *> m_subscribers;

	virtual ~Subject() = default;

	virtual void subscribe(Observer &) = 0;

	virtual void unsubscribe(Observer &) = 0;

	virtual const void notifySubscribers() const = 0;
};
