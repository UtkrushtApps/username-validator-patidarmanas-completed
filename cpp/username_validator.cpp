#include "username_validator.h"
#include <cctype>

bool UsernameValidator::isValid(const std::string& username) {
    if (username.empty()) {
        return false;
    }
    std::size_t len = username.size();
    if (len < 3 || len > 20) {
        return false;
    }
    if (!std::isalpha(static_cast<unsigned char>(username[0]))) {
        return false;
    }
    for (std::size_t i = 1; i < len; ++i) {
        unsigned char ch = static_cast<unsigned char>(username[i]);
        if (!std::isalpha(ch) && !std::isdigit(ch) && ch != '_') {
            return false;
        }
    }
    return true;
}
