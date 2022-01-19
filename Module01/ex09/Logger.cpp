#include "Logger.hpp"

Logger::Logger( void )
    : filename("logger.log")
{}

Logger::Logger( const std::string& filename )
    : filename(filename)
{}

Logger::Logger( const Logger& log )
{
    *this = log;
}

void Logger::logToConsole( const std::string& msg )
{
    std::cout << msg << std::endl;
}

void Logger::logToFile( const std::string& msg )
{
    std::fstream file;

    file.open(filename, std::fstream::out | std::fstream::app);
    file << msg << std::endl;

    file.close();
}

std::string Logger::makeLogEntry( const std::string& msg )
{
    std::stringstream formatted;
	std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
	std::time_t time_now = std::chrono::system_clock::to_time_t(now);

	tm utc_tm = *localtime(&time_now);
	formatted << std::setfill('0') << (utc_tm.tm_year + 1900) << "-"
			<< std::setw(2) << utc_tm.tm_mon + 1 << "-"
			<< std::setw(2) << utc_tm.tm_mday << " "
			<< std::setw(2) << utc_tm.tm_hour << ":"
			<< std::setw(2) << utc_tm.tm_min << ":"
			<< std::setw(2) << utc_tm.tm_sec << " ";
	formatted << msg;
    return formatted.str();
}

void Logger::log(std::string const& dest, std::string const& msg )
{
    void (Logger::* logs[2])( const std::string& ) = {
        &Logger::logToConsole,
        &Logger::logToFile
    };
    std::string formatted = makeLogEntry(msg);
    int index = ("file" == dest) ? 1 : 0;

    (this->*logs[index])(formatted);

}

Logger& Logger::operator=( const Logger& log )
{
    if (this != &log)
        filename = log.filename;
    return *this;
}

Logger::~Logger() {}