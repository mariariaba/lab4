#include <iostream>
#include <string>

using namespace std;

class Transport {
protected:
    int speed;

public:
    Transport() : speed(0) {} 

    void turn() {
        cout << "Transport is turning" << endl;
    }

    void drive() {
        cout << "Transport is driving" << endl;
    }

    void stop() {
        cout << "Transport is stopping" << endl;
    }
};

class Bicycle : public Transport {
private:
    string model;
    int year;
    string color;

public:
    Bicycle(string model, int year, string color) : model(model), year(year), color(color) {}

    string getModel() {
        return model;
    }

    void setModel(string model) {
        this->model = model;
    }

    int getYear() {
        return year;
    }

    void setYear(int year) {
        this->year = year;
    }

    string getColor() {
        return color;
    }

    void setColor(string color) {
        this->color = color;
    }
};

int main() {
    Bicycle bike("BMX", 2023, "grey");

    cout << "Model: " << bike.getModel() << endl;
    cout << "Year: " << bike.getYear() << endl;
    cout << "Color: " << bike.getColor() << endl;

    bike.drive();
    bike.turn();
    bike.stop();

    return 0;
}
