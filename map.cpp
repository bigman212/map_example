#include "map.h"

Map::Map(){}

Map::Map(const unsigned int &rows, const unsigned int &columns){
    _map.resize(columns);

    for(auto &column : _map){
        column.resize(rows);

        for(auto &row : column)
            row = 0;
    }
}

Map::Map(const unsigned int &size){
    Map(size, size);
}

void Map::addCity(const City &c){
    unsigned int x = c.getX();
    unsigned int y = c.getY();

    if (x < this->getColumns() && y < this->getRows() )
        _map[x][y] = City::numberOfCities;
    else
        throw map_exceptions::OutOfMap();

    _cities.push_back(c);
}

unsigned int Map::getColumns() const{
    return this->_map.size();
}

unsigned int Map::getRows() const{
    return this->_map.size();
}

void Map::removeCity(const unsigned int &x, const unsigned int &y){
    if (x < this->getColumns() && y < this->getRows())
    {
        if (_map[x][y] != 0)
            _map[x][y] = 0;
        else
            throw map_exceptions::CityNotOnMap();
    }
    else
        throw map_exceptions::OutOfMap();
}


void Map::showMap() const{
    for(auto column : _map){
        for(auto row : column)
            cout<< row << " ";
        cout<<'\n';
    }
}
