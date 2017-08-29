#ifndef OUTOFMAPEXCEPTION_H
#define OUTOFMAPEXCEPTION_H
#include <exception>
using std::exception;

namespace map_exceptions
{
    class OutOfMap : public exception{
    public:
        virtual const char* what() const throw(){
            return "Coordinates out of map!";
        }
    };

    class CityNotOnMap : public exception{
    public:
        virtual const char* what() const throw(){
            return "City is not on the map!";
        }
    };
}


#endif // OUTOFMAPEXCEPTION_H
