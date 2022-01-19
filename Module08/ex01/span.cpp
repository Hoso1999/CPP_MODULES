#include "span.hpp"

Span::Span( unsigned int N )
    : max(N), arr(0)
{}

void Span::addNumber( int num )
{
    if (arr.size() == max)
        throw AlreadyFull();
    arr.push_back(num);
}

const char* Span::NoNumberException::what( void ) const throw()
{
    return "SpanException: no enough numbers";
}

const char* Span::AlreadyFull::what( void ) const throw()
{
    return "SpanException: span is full";
}

size_t Span::shortestSpan( void )
{
    if (arr.size() <= 1)
        throw NoNumberException();
    std::vector<int>::iterator it = arr.begin();
    std::vector<int>::iterator next = arr.begin() + 1;
    size_t spanDiff = std::abs(*next - *it);
    ++next;
    ++it;
    while (next != arr.end())
    {
        size_t diff = std::abs(*next - *it);
        if (diff < spanDiff)
            spanDiff = diff;
        ++next;
        ++it;
    }
    return spanDiff;
}

size_t Span::longestSpan( void )
{
    if (arr.size() <= 1)
        throw NoNumberException();
    std::vector<int>::iterator it = std::min_element(arr.begin(), arr.end());
    std::vector<int>::iterator it2 = std::max_element(arr.begin(), arr.end());
    return std::abs(*it - *it2);
}

Span::~Span() {}
