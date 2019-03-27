#pragma once

#include <string>

struct Notifier {
	virtual ~Notifier() = default;

	virtual void send(const std::string &) = 0;
};

struct NotificationApp : Notifier {
	~NotificationApp() override = default;

	void send(const std::string &message) override {
		// send notification to email
	}
};

struct NotificationType : Notifier {
	Notifier *m_notifier;

	~NotificationType() override = default;

	NotificationType(Notifier *notifier)
			: m_notifier(notifier) {}
};

struct FacebookNotifier : NotificationType {
	FacebookNotifier(Notifier *notifier)
			: NotificationType(notifier) {};

	void send(const std::string &message) override {
		m_notifier->send(message);
		// send notification to facebook
	}
};

struct SlackNotifier : NotificationType {
	SlackNotifier(Notifier *notifier)
			: NotificationType(notifier) {};

	void send(const std::string &message) override {
		m_notifier->send(message);
		// send notification to slack
	}
};

struct SMS : NotificationType {
    SMS(Notifier *notifier)
            : NotificationType(notifier) {};

    void send(const std::string &message) override {
	    m_notifier->send(message);
	    // send notification to phone number
    }
};