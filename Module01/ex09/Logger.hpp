#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <chrono>
#include <ctime>

class Logger
{
    std::string filename;
    void logToConsole( const std::string& );
    void logToFile( const std::string& );
    std::string makeLogEntry( const std::string& );
    public:
        Logger( const std::string& );
        Logger( void );
        Logger( const Logger& );
        ~Logger();

        void log(std::string const&, std::string const& );
        Logger& operator=( const Logger& );
};



#endif