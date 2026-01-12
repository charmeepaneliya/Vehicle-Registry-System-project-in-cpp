#include <iostream>
#include <string>
using namespace std;
class Vehicle
{
protected:
    int vehicleID;
    string manufacturer;
    string model;
    int year;

    static int totalVehicles;

public:
    Vehicle()
    {
        vehicleID = 0;
        manufacturer = " not set";
        model = " not set";
        year = 0;
    }
    Vehicle(int v_id, string manu, string model, int year)
    {
        vehicleID = v_id;
        manufacturer = manu;
        this->model = model;
        this->year = year;
        totalVehicles++;
    }
    virtual ~Vehicle()
    {
        totalVehicles--;
    }

    // setter methods

    void setvehicleid(int v_id, string manu, string model, int year)
    {
        vehicleID = v_id;
        manufacturer = manu;
        this->model = model;
        this->year = year;
    }

    // Getter Methods

    int getvehicleID() const
    {
        return vehicleID;
    }
    string getManufacturer() const
    {
        return manufacturer;
    }
    string getModel() const
    {
        return model;
    }
    int getYear() const
    {
        return year;
    }
    static int getTotalVehicles()
    {
        return totalVehicles;
    }

    virtual void display() const
    {
        cout << "Vehicle ID: " << vehicleID << endl;
        cout << "ManuFacturer: " << manufacturer << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
    virtual string vehicleType() const
    {
        return "Vehicle";
    }
};

int Vehicle::totalVehicles = 0;

// single Inheritance(car from vehicle)

class Car : public Vehicle
{
protected:
    string fuelType;

public:
    Car() : Vehicle()
    {
        fuelType = "not set";
    }
    Car(int v_id, string manu, string model, int year, string fuelType)
        : Vehicle(v_id, manu, model, year)
    {
        this->fuelType = fuelType;
    }

    // getter and setter

    void setFuelType(string fuel)
    {
        fuelType = fuel;
    }

    string getFuelType() const
    {
        return fuelType;
    }

    void display() const override
    {
        Vehicle::display();
        cout << "Fuel Type: " << fuelType << endl;
    }

    string vehicleType() const override
    {
        return "Car";
    }
};

// Multilevel inheritance(ElectricCar from Car)

class ElectricCar : public Car
{
protected:
    double batteryCapacity;

public:
    ElectricCar() : Car()
    {
        batteryCapacity = 0.0;
    }

    ElectricCar(int v_id, string manu, string model, int year, double battery)
        : Car(v_id, manu, model, year, "Electric")
    { // ✅ FIXED
        batteryCapacity = battery;
    }

    // getter and setter

    void setBatteryCapacity(double battery)
    {
        batteryCapacity = battery;
    }
    double getBatteryCapacity() const
    {
        return batteryCapacity;
    }

    void display() const override
    {
        Vehicle::display();
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }
    string vehicleType() const override
    {
        return "Electric Car";
    }
};

// Base class for multiple inheritance(Aircraft)
class Aircraft
{
protected:
    double flightRange;

public:
    Aircraft()
    {
        flightRange = 0.0;
    }
    Aircraft(double range)
    {
        flightRange = range;
    }

    // getter and setter

    void setFlightRange(double range)
    {
        flightRange = range;
    }

    double getFlightRange() const
    {
        return flightRange;
    }

    virtual void displayAircraft() const
    {
        cout << "Flight Range: " << flightRange << " km" << endl;
    }
};
// Multiple Inheritance(FlyingCar from Car and Aircraft)
class FlyingCar : public Car, public Aircraft
{
protected:
    double range;

public:
    FlyingCar() : Car(), Aircraft() {}

    FlyingCar(int v_id, string manu, string model, int year, string fuel, double range)
        : Car(v_id, manu, model, year, fuel), Aircraft(range)
    {
    }

    void display() const override
    {
        Car::display();
        cout << "Flight Range: " << flightRange << " km" << endl;
    }
    string vehicleType() const override
    {
        return "Flying Car";
    }
};
// Multilevel Inheritance (3 levels): SportsCar from ElectricCar
class SportsCar : public ElectricCar
{
private:
    double topSpeed;

public:
    SportsCar() : ElectricCar()
    {
        topSpeed = 0.0;
    }
    SportsCar(int v_id, string manu, string model, int year, double battery, double speed)
    {
        ElectricCar(v_id, manu, model, year, battery);
        topSpeed = speed;
    }

    // Getter and Setter

    void setTopSpeed(double speed)
    {
        topSpeed = speed;
    }
    double getTopSpeed() const
    {
        return topSpeed;
    }

    void display() const override
    {
        ElectricCar::display();
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
        cout << "Top Speed: " << topSpeed << " km/h" << endl;
    }
    string vehicleType() const override
    {
        return "Sports Car";
    }
};
// Hierarchical Inheritance: Sedan from Car
class Sedan : public Car
{
public:
    Sedan() : Car()
    {
    }

    Sedan(int v_id, string manu, string model, int year, string fuleType)
    {
        Car(v_id, manu, model, year, fuleType);
    }
    void display() const override
    {
        Car::display();
    }
    string vehicleType() const override
    {
        return "Sedan";
    }
};

// Hierarchical Inheritance: SUV from Car
class SUV : public Car
{
public:
    SUV() : Car()
    {
    }
    SUV(int v_id, string manu, string model, int year, string fuleType)
    {
        Car(v_id, manu, model, year, fuleType);
    }
    void display() const override
    {
        Car::display();
    }
    string vehicleType() const override
    {
        return "SUV";
    }
};

// VehicleRegistry Class

class VehicleRegistry
{
private:
    Vehicle *vehicles[100];
    int count;

public:
    VehicleRegistry()
    {
        count = 0;
        for (int i = 0; i < 100; i++)
        {
            vehicles[i] = nullptr;
        }
    }
    ~VehicleRegistry()
    {
        for (int i = 0; i < count; i++)
        {
            delete vehicles[i];
        }
    }
    void addVehicle(Vehicle *v)
    {
        if (count < 100)
        {
            vehicles[count++] = v;
            cout << "vehicle added successfully!" << endl;
        }
        else
        {
            cout << "Registry is full!" << endl;
        }
    }

    void displayAll() const
    {
        if (count == 0)
        {
            cout << "\nNo vehicles in the registry.\n"
                 << endl;
            return;
        }
        cout << "...........ALL VEHICLES..........." << endl;

        for (int i = 0; i < count; i++)
        {
            cout << "\n--- Vehicle " << (i + 1) << " ---" << endl;
            cout << "Type: " << vehicles[i]->vehicleType() << endl;
            vehicles[i]->display();
            cout << "--------------------------------" << endl;
        }
        cout << "\nTotal Vehicles in Registry: " << count << endl;
    }

    void searchById(int id) const
    {
        bool found = false;
        for (int i = 0; i < count; i++)
        {
            if (vehicles[i]->getvehicleID() == id)
            {
                cout << "\nVehicle Found....." << endl;
                cout << "--- " << vehicles[i]->vehicleType() << " ---" << endl;
                vehicles[i]->display();
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "\nVehicle with ID " << id << " not found." << endl;
        }
    }
};

int main()
{
    VehicleRegistry regi;
    int choice;

    do
    {
        cout << "\n.......... VEHICLE REGISTRY SYSTEM.........." << endl;
        cout << "\n1. Add a Vehicle" << endl;
        cout << "\n2.View All Vehicles" << endl;
        cout << "\n3.Search by ID" << endl;
        cout << "\n4.Exit" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            int type;
            cout << "\nSelect Vehicle Type:" << endl;
            cout << "1. Car" << endl;
            cout << "2. Electric Car" << endl;
            cout << "3. Flying Car" << endl;
            cout << "4. Sports Car" << endl;
            cout << "5. Sedan" << endl;
            cout << "6. SUV" << endl;
            cout << "Enter type: ";
            cin >> type;

            int id, year;
            string manu, model;

            cout << "Enter Vehicle ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter Manufacturer: ";
            getline(cin, manu);
            cout << "Enter Model: ";
            getline(cin, model);
            cout << "Enter Year: ";
            cin >> year;
            if (type == 1)
            {
                string fuel;
                cin.ignore();
                cout << "Enter Fuel Type: ";
                getline(cin, fuel);
                regi.addVehicle(new Car(id, manu, model, year, fuel));
            }
            else if (type == 2)
            {
                double battery;
                cout << "Enter Battery Capacity (kWh): ";
                cin >> battery;
                regi.addVehicle(new ElectricCar(id, manu, model, year, battery));
            }
            else if (type == 3)
            {
                string fuel;
                double range;
                cin.ignore();
                cout << "Enter Fuel Type: ";
                getline(cin, fuel);
                cout << "Enter Flight Range (km): ";
                cin >> range;
                regi.addVehicle(new FlyingCar(id, manu, model, year, fuel, range));
            }
            else if (type == 4)
            {
                double battery, speed;
                cout << "Enter Battery Capacity (kWh): ";
                cin >> battery;
                cout << "Enter Top Speed (km/h): ";
                cin >> speed;
                regi.addVehicle(new SportsCar(id, manu, model, year, battery, speed));
            }
            else if (type == 5)
            {
                string fuel;
                cin.ignore();
                cout << "Enter Fuel Type: ";
                getline(cin, fuel);
                regi.addVehicle(new Sedan(id, manu, model, year, fuel));
            }
            else if (type == 6)
            {
                string fuel;
                cin.ignore();
                cout << "Enter Fuel Type: ";
                getline(cin, fuel);
                regi.addVehicle(new SUV(id, manu, model, year, fuel));
            }
            else
            {
                cout << "\nInvalid vehicle type!" << endl;
            }
        }
        else if (choice == 2)
        {
            regi.displayAll();
        }
        else if (choice == 3)
        {
            int id;
            cout << "\nEnter Vehicle ID to search: ";
            cin >> id;
            regi.searchById(id);
        }
        else if (choice == 4)
        {
            cout << "\nTotal Vehicles Created: " << Vehicle::getTotalVehicles() << endl;
            cout << "Exiting system. Thank you!" << endl;
        }
        else
        {
            cout << "\nInvalid choice! Please try again." << endl;
        }

    } while (choice != 4);

    return 0;
}
