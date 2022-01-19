#include "Logger.hpp"

int main()
{
    Logger log("logs.log");

    log.log("file", "hello");
    log.log("ccc", "world");
    return 0;
}