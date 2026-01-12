🚗 Vehicle Registry System
----------------------------
A comprehensive C++ project demonstrating Object-Oriented Programming concepts including all types of inheritance and encapsulation through a vehicle management system.
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------

📋 Table of Contents
-----------------------

Project Overview
Features
OOP Concepts Demonstrated
Class Structure
Installation & Usage
Sample Output
Project Requirements
Author
--------------------------------------------------------------------------------------------------------------------------------------------------------

🎯 Project Overview
-----------------------
The Vehicle Registry System is a menu-driven C++ application that allows users to manage a registry of different types of vehicles. This project showcases advanced OOP principles and inheritance hierarchies.
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

✨ Features
--------------

✅ Add multiple vehicle types (Car, Electric Car, Flying Car, Sports Car, Sedan, SUV)
✅ View all registered vehicles
✅ Search vehicles by ID
✅ Track total vehicles using static members
✅ Dynamic memory management with polymorphism
✅ Clean menu-driven interface
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------

🧩 OOP Concepts Demonstrated
--------------------------------
1️⃣ Single Inheritance

Vehicle → Car
---------------------------------------
2️⃣ Multilevel Inheritance

Vehicle → Car → ElectricCar → SportsCar
-------------------------------------------
3️⃣ Multiple Inheritance

Car + Aircraft → FlyingCar
-----------------------------------------
4️⃣ Hierarchical Inheritance
       Car
      /   \
  Sedan   SUV
  ------------------------------------------

  🏗️ Class Structure
  ------------------------
📌 Base Class: Vehicle
Attributes:
-----------

vehicleID (int)
manufacturer (string)
model (string)
year (int)
totalVehicles (static int)

Methods:
-------------

Constructors (Default & Parameterized)
Virtual Destructor
Getters & Setters
display() - Virtual method
vehicleType() - Virtual method

---------------------------------------------------------------------------------------------------------------------

🚙 Derived Class: Car (Single Inheritance)
--------------------------------------------
Inherits from: Vehicle
Additional Attribute: fuelType (string)
-----------------------------------------------------------------------------------

🔋 Derived Class: ElectricCar (Multilevel Inheritance)
-----------------------------------------------------
Inherits from: Car
Additional Attribute: batteryCapacity (double)
---------------------------------------------------------------

✈️ Base Class: Aircraft (For Multiple Inheritance)
----------------------------
Attribute: flightRange (double)
---------------------------------------------------------

🚁 Derived Class: FlyingCar (Multiple Inheritance)
----------------------------------------------
Inherits from: Car + Aircraft
Combines: Road and air travel capabilities
---------------------------------------------------------------------------------------------------------------------------------------


capabilities
----------------

🏎️ Derived Class: SportsCar (Multilevel - 3 Levels)
--------------------------
Inherits from: ElectricCar
Additional Attribute: topSpeed (double)
-------------------------------------------------------------------------------------------

🚗 Derived Class: Sedan (Hierarchical Inheritance)
-------------------------------------
Inherits from: Car
Purpose: Family/Comfort vehicles
----------------------------------------------------------------------------------------------

🚙 Derived Class: SUV (Hierarchical Inheritance)
---------------------------------------------
Inherits from: Car
Purpose: Sport Utility Vehicles
---------------------------------------------------------------------------------------------------------------

📚 Utility Class: VehicleRegistry
--------------------------------
Purpose: Manages collection of vehicles
Methods:
----------

addVehicle() - Add new vehicle
displayAll() - Show all vehicles
searchById() - Find vehicle by ID
---------------------------------------------------------------------------------------------------

🚀 Installation & Usage
----------------------------
Prerequisites
---------------

C++ Compiler (GCC, MinGW, Visual Studio, etc.)
Basic knowledge of C++
-------------------------------------------------------------------------------------------------

3️⃣ Run the Program
------------------------

./vehicle_registry
```

---

## 📸 Sample Output

### Main Menu
```
.......... VEHICLE REGISTRY SYSTEM..........
1. Add a Vehicle
2. View All Vehicles
3. Search by ID
4. Exit

Enter your choice: 1
```

### Adding a Vehicle
```
Select Vehicle Type:
1. Car
2. Electric Car
3. Flying Car
4. Sports Car
5. Sedan
6. SUV
Enter type: 2

Enter Vehicle ID: 101
Enter Manufacturer: Tesla
Enter Model: Model S
Enter Year: 2024
Enter Battery Capacity (kWh): 100

Vehicle added successfully!
```

### Viewing All Vehicles
```
...........ALL VEHICLES...........

--- Vehicle 1 ---
Type: Electric Car
Vehicle ID: 101
Manufacturer: Tesla
Model: Model S
Year: 2024
Fuel Type: Electric
Battery Capacity: 100 kWh
--------------------------------

Total Vehicles in Registry: 1
```

### Search by ID
```
Enter Vehicle ID to search: 101

Vehicle Found.....
--- Electric Car ---
Vehicle ID: 101
Manufacturer: Tesla
Model: Model S
Year: 2024
Fuel Type: Electric
Battery Capacity: 100 kWh

----------------------------------------------------------------------------------------------------------------------------------

📋 Project Requirements
---------------------
✅ Implemented Features
---------------------------

Class & Object
-----------------------
Static Member
----------------------
Constructors
-----------------------
Destructor
---------------------------
Array of Objects
----------------------
Getters & Setters
---------------------------
Encapsulation
--------------------------
Single Inheritance
---------------------------
Multiple Inheritance
-----------------------
Multilevel Inheritance
------------------------------
Hierarchical Inheritance
-------------------------------------------------------------------------------------------------------------------------------------------------

🎓 Key Learning Outcomes
----------------------------------

📚 Understanding of inheritance hierarchies
🔐 Proper use of access modifiers (private, protected, public)
🎯 Implementation of polymorphism with virtual functions
💾 Dynamic memory management (new/delete)
🏗️ Constructor initialization lists
📊 Static member management
🎨 Clean code structure and organization

-----------------------------------------------------------------------------------------------------------------------------------------------

🛠️ Technologies Used
-----------------------------

Language: C++
---------------------------------------------------
Paradigm: Object-Oriented Programming
------------------------------------------------------
Concepts: Inheritance, Polymorphism, Encapsulation
-----------------------------------------------------------------------------------------

📝 Fuel Types Supported
------------------------

⛽ Petrol---- Gasoline-powered vehicles
------------------------------------------------
🛢️ Diesel---Diesel-powered vehicles
-----------------------------------------------------
🔋 Electric---Battery-powered vehicles
-----------------------------------------------------
♻️ Hybrid---Petrol + Electric combination
----------------------------------------------------
💨 CNG---Compressed Natural Gas
----------------------------------------------
🛩️ Jet Fuel---For flying vehicles
----------------------------------------------------------------------------------------------------------------------------

🐛 Known Issues
-------------------------

None reported yet! 🎉
-----------------------------------------------------------------------------------------------------------------------


🔮 Future Enhancements
----------------------------------

 Add file storage (save/load from file)
 ----------------------------------------------
 Implement delete vehicle functionality
 ----------------------------------------------
 Add more vehicle types (Motorcycle, Truck, Bus)
 ---------------------------------------------------------------
 Advanced search filters (by manufacturer, year, type)
 --------------------------------------------------------------
 GUI implementation
 ---------------------------------------
 Database integration
 ----------------------------------------------------------------------------------------------------------------------------

 👨‍💻 Author
 ----------------
Charmee Paneliya

----------------------------------------------------------------------------------------------------

📜 License
--------------------
This project is created for educational purposes as part of academic coursework.
--------------------------------------------------------------------------------------------------------------

🙏 Acknowledgments
------------------

Thanks to my instructor for project guidance
---------------------------------------------------------------
C++ documentation and community resources
----------------------------------------------------
Object-Oriented Programming principles
--------------------------------------------------------------------------------------------------------------------------
