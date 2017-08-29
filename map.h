#ifndef MAP_H
#define MAP_H
#include <vector>
#include "city.h"
#include "mapexceptions.h"

using std::vector;
using namespace map_exceptions;
using std::cout;

class Map
{
public:
    Map();
    Map(const unsigned int &size);
    Map(const unsigned int &rows, const unsigned int &columns);

    void addCity(const City &c);

    void removeCity(const unsigned int &x, const unsigned int &y);

    void showMap() const;

private:
    unsigned int getRows() const;
    unsigned int getColumns() const;

    vector <vector <int> > _map;
    vector <City> _cities;
};

#endif // MAP_H
