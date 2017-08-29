#include "city.h"
#include "map.h"
using std::cout;
using std::cin;
int main()
{
    Map map(3,3);
    map.showMap();
    int choice=0;
    unsigned int x,y;
    string description;
    string name;

    while (true)
    {
        cout<<"1. Add city\n"
              "2. Remove city\n"
              "3. Show map\n";
        cin>>choice;
            switch (choice) {
            case 1:
                cout<<"Enter x, y, name, discription for city.\n";
                cout<<"X, Y: ";

                cin>>x>>y;

                cout<<"Name:";

                cin>>name;

                cout<<"Description:";
                cin>>description;
                try{
                    City newCity(x, y, name, description);
                    map.addCity(newCity);
                    cout<<"CITY CREATED!\n";
                } catch(invalid_argument e){
                    cout<<e.what();
                } catch(OutOfMap e){
                    cout<<e.what();
                }
                break;

            case 2:
                cout<<"Enter x, y:";
                cin>>x>>y;
                try{
                    map.removeCity(x,y);
                } catch(OutOfMap e){
                    cout<<e.what();
                } catch(CityNotOnMap e){
                    cout<<e.what();
                }
                break;

            case 3:
                map.showMap();
                break;

            default:
                cout<<"Choose something better\n";
                break;
            }
    }
    return 0;
}
