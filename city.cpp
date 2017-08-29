#include "city.h"

int City::numberOfCities = 0;

City::City(): _name(""), _description(""){
    this->_coord.first = 0;
    this->_coord.second = 0;
}

City::City(const unsigned int &x,
           const unsigned int &y,
           std::string &name,
           std::string &description)
{
    this->setCoord(x, y);
    this->_name = name;
    this->_description = description;
    numberOfCities++;
}

int City::getX() const{
    return this->_coord.first;
}

int City::getY() const{
    return this->_coord.second;
}

void City::setX(const unsigned int &x){
    this->_coord.first = x;
}

void City::setY(const unsigned int &y){
    this->_coord.second = y;
}

void City::setCoord(const unsigned int &x, const unsigned int &y){
    try{
        this->setX(x);
        this->setY(y);
    } catch(invalid_argument err){
        throw err;
    }
}

string City::getName() const{
    return this->_name;
}

void City::setName(const std::string name){
    this->_name = name;
}

string City::getDescription() const{
    return this->_description;
}

void City::setDescription(const std::string descr){
    this->_description = descr;
}

bool City::equals(const City &other){
    return (this->_name == other._name)
            || (this->getX() == other.getX() && this->getY() == other.getY());
}

City& City::operator=(const City &other){
    if (!this->equals(other)){
        this->setCoord(other.getX(), other.getY());
        this->setName(other._name);
        this->setDescription(other._description);
    }
    return *this;
}
