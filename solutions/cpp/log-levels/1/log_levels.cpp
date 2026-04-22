#include <string>

namespace log_line {
std::string message(std::string line) {
    // return the message
    int tag_end = line.find("]: ");
    int message_start = tag_end + 3;
    std::string message = line.substr(message_start);

    return message;
}

std::string log_level(std::string line) {
    // return the log level
    int tag_end = line.find("]: ");
    std::string log_level = line.substr(1,tag_end);

    return log_level;
}

std::string reformat(std::string line) {
    // return the reformatted message
    return log_line::message(line) + " (" + log_line::log_level(line) + ")";
}
}  // namespace log_line
