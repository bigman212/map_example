#ifndef CITY_H
#define CITY_H
#include <iostream>
using std::pair;
using std::string;
using std::invalid_argument;

class City
{
public:
    City();
    City(const unsigned int &x,
         const unsigned int &y,
         string &name,
         string &description);

    int getX() const;
    int getY() const;

    void setX(const unsigned int &x);
    void setY(const unsigned int &y);
    void setCoord(const unsigned int &x, const unsigned int &y);

    string getName() const;
    void setName(const string name);

    std::string getDescription() const;
    void setDescription(const std::string descr);

    bool equals(const City &other);

    City& operator =(const City &other);

    static int numberOfCities;

private:
    pair <int, int> _coord;
    string _name;
    string _description;
};

#endif // CITY_H
