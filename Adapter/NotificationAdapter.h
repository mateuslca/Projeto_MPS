#ifndef NOTIFICATIONADAPTER_H
#define NOTIFICATIONADAPTER_H

#include "INotificationService.h"
#include <iostream>

class NotificationAdapter : public INotificationService {
public:
    void notify(const std::string& message) override {
        // Aqui você pode implementar a lógica para enviar notificações
        std::cout << "Notification sent: " << message << std::endl;
    }
};

#endif // NOTIFICATIONADAPTER_H
