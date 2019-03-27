#pragma once

#include "Subject&Observer.h"

class Publisher : public Subject {

public:
	std::vector<Observer *> m_subscribers;

	void subscribe(Observer &subscriber) override {
		m_subscribers.push_back(&subscriber);
	};

	void unsubscribe(Observer &subscriber) override {
		for (int i = 0; i < m_subscribers.size(); ++i)
			if (m_subscribers[i] == &subscriber)
				m_subscribers.erase(m_subscribers.begin() + i);
	};

	const void notifySubscribers() const override {
		for (Observer *sb : m_subscribers)
			sb->update(m_news);
	};

	const std::string &get_news() const {
		return m_news;
	}

	void set_news(const std::string &news) {
		m_news = news;
		notifySubscribers();
	}

private:
	std::string m_news;
};
