
#include <iostream>
#include <string>

using namespace std;

class Transport {
private:
    string color;
    int speed; 

public:
    Transport() : speed(0), color("") {}
    Transport(int speed, string color) : speed(speed), color(color) {}

    int getSpeed() { return speed; } 
    void setSpeed(int speed) { this->speed = speed; }

    string getColor() { return color; }
    void setColor(string color) { this->color = color; }

    void displaySpeed() { cout << "Speed is: " << speed << endl; } 
};


class Bicycle : public Transport {
private:
    string model;
    int year;

public:
    Bicycle() : Transport(), model(""), year(0) {}
    Bicycle(string model, int year, int speed, string color) : Transport(speed, color), model(model), year(year) {}

    string getModel() { return model; }
    void setModel(string model) { this->model = model; }

    int getYear() { return year; }
    void setYear(int year) { this->year = year; }

    void pedal() { cout << "Pedaling..." << endl; }
};

int main() {
    Bicycle myBicycle("Mountain Bike", 2020, 90, "Red");
    myBicycle.displaySpeed(); 
    myBicycle.pedal();

    return 0;
}

