#ifndef USER_DAO_H
#define USER_DAO_H

#include "..\Entity\User\User.h"
#include <fstream>
#include <vector>

class UserDAO {
public:
    void save(const User& user, const std::string& filename);
    User load(int userId, const std::string& filename);
};

#endif