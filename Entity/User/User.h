#ifndef USER_H
#define USER_H

#include <string>

class User {
private:
    int id;
    std::string login;
    std::string password;

public:
    User(int id, std::string login, std::string password)
        : id(id), login(login), password(password) {}

    int getID() const { return id; }
    std::string getPassword() const { return password; }
    std::string getLogin() const { return login; }

    void setPassword(const std::string& newPassword) { password = newPassword; }
    void setLogin(const std::string& newLogin) { login = newLogin; }

    // Método para converter um objeto User em uma string
    std::string toString() const {
        return std::to_string(id) + ";" + login + ";" + password; // Formato: id;login;password
    }

    // Método para criar um objeto User a partir de uma string
    static User fromString(const std::string& str) {
        size_t firstSeparator = str.find(";");
        size_t secondSeparator = str.find(";", firstSeparator + 1);

        int userId = std::stoi(str.substr(0, firstSeparator));
        std::string userLogin = str.substr(firstSeparator + 1, secondSeparator - firstSeparator - 1);
        std::string userPassword = str.substr(secondSeparator + 1);

        return User(userId, userLogin, userPassword);
    }
};

#endif // USER_H
