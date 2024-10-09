#ifndef INOTIFICATIONSERVICE_H
#define INOTIFICATIONSERVICE_H

#include <string>

class INotificationService {
public:
    virtual void notify(const std::string& message) = 0;
    virtual ~INotificationService() {}
};

#endif // INOTIFICATIONSERVICE_H
