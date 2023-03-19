#include <iostream>

using namespace std;

class Device
{
private:
    double memorySize;
    double screenSize;
    double price;
    string brand;
    string constantSerial;

protected:
    static int devicesCount;

public:

    Device(double memorySize, double screenSize, double price, const string &brand, const string &constantSerial)
        :
        memorySize(memorySize), screenSize(screenSize), price(price), brand(brand), constantSerial(constantSerial)
    {
        devicesCount++;
        if(memorySize <= 0) throw invalid_argument("Invalid memory size provided!");
        if(screenSize <= 0) throw invalid_argument("Invalid screen size provided!");
        if(price <= 0) throw invalid_argument("Invalid price provided!");
    }

    Device(const Device &other)
        :
        memorySize(other.memorySize), screenSize(other.screenSize), price(other.price), brand(other.brand), constantSerial(other.constantSerial)
    {}

    Device &operator=(const Device &other)
    {
        if(this != &other)
        {
            this->memorySize = other.memorySize;
            this->screenSize = other.screenSize;
            this->price = other.price;
            this->brand = other.brand;
            this->constantSerial = other.constantSerial;
        }
        return *this;
    }

    bool isWorthBuying() const
    {
        if((this->memorySize*this->screenSize / this->price) > 0.1) return true;
        else return false;
    }

    double getMemory() const {return this->memorySize;}

    double getScreenSize() const {return this->screenSize;}

    double getPrice() const {return this->price;}

    string getBrand() const {return this->brand;}

    string getConstantSerial() const {return this->constantSerial;}

    static int getDevicesCount() {return devicesCount;}
};

int Device::devicesCount = 0;

class Phone : public Device
{
private:
    int cameraParameters;
public:

    Phone(double memorySize, double screenSize, double price, const string &brand, const string &constantSerial, int cameraParameters)
        :
        Device(memorySize, screenSize, price, brand, constantSerial), cameraParameters(cameraParameters)
    {
        if(cameraParameters <= 0) throw invalid_argument("Invalid price provided!");
    }
    Phone(const Phone &other)
        :
        Device(other), cameraParameters(other.cameraParameters)
    {}

    Phone &operator=(const Phone &other)
    {
        if (this != &other)
        {
            Device::operator=(other);
            this->cameraParameters = other.cameraParameters;
        }
        return *this;
    }

    bool isWorthBuying() const
    {
        if((Device::getMemory()*Device::getScreenSize() + getMemory()*cameraParameters / Device::getPrice()) > 0.1) return true;
        else return false;
    }

    double getMemory() const {return Device::getMemory();}

    double getScreenSize() const {return Device::getScreenSize();}

    double getPrice() const {return Device::getPrice();}

    string getBrand() const {return Device::getBrand();}

    string getConstantSerial() const {return Device::getConstantSerial();}

    int getCameraParameters() const {return this->cameraParameters;}
};
int main()
{
    // create a Device object
    Device device(4, 5.5, 200, "Apple", "123456");
    cout << "Memory: " << device.getMemory() << endl; // 4
    cout << "Screen size: " << device.getScreenSize() << endl; // 5.5
    cout << "Price: " << device.getPrice() << endl; // 200
    cout << "Brand: " << device.getBrand() << endl; // Apple
    cout << "Constant serial number: " << device.getConstantSerial() << endl; // 123456
    cout << "Number of active devices: " << device.getDevicesCount() << endl; // 1

    // create a Phone object
    Phone phone(4, 5.5, 300, "Samsung", "789012", 16);
    cout << "Memory: " << phone.getMemory() << endl; // 4
    cout << "Screen size: " << phone.getScreenSize() << endl; // 5.5
    cout << "Price: " << phone.getPrice() << endl; // 300
    cout << "Brand: " << phone.getBrand() << endl; // Samsung
    cout << "Constant serial number: " << phone.getConstantSerial() << endl; // 789012
    cout << "Number of active devices: " << phone.getDevicesCount() << endl; // 2
    cout << "Camera parameters: " << phone.getCameraParameters() << endl; // 16

    // test isWorthBuying
    cout << "Is the device worth buying? " << device.isWorthBuying() << endl; // 1
    cout << "Is the phone worth buying? " << phone.isWorthBuying() << endl; // 1

    // test operator=
    Device device2(8, 6.1, 500, "Google", "234567");
    device2 = device;
    cout << "Memory: " << device2.getMemory() << endl; // 4
    cout << "Screen size: " << device2.getScreenSize() << endl; // 5.5
    cout << "Price: " << device2.getPrice() << endl; // 200
    cout << "Brand: " << device2.getBrand() << endl; // Apple
    cout << "Constant serial number: " << device2.getConstantSerial() << endl; // 123456

    Phone phone2(8, 6.1, 600, "OnePlus", "345678", 20);
    phone2 = phone;
    cout << "Memory: " << phone2.getMemory() << endl; // 4
    cout << "Screen size: " << phone2.getScreenSize() << endl; // 5.5
    cout << "Price: " << phone2.getPrice() << endl; // 300
    cout << "Brand: " << phone2.getBrand() << endl; // Samsung
    cout << "Constant serial number: " << phone2.getConstantSerial() << endl; // 789012
    cout << "Camera parameters: " << phone2.getCameraParameters() << endl; // 16
}
