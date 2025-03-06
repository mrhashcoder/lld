#include<iostream>
using namespace std;

class Singleton {
private:
    int data = 0;// Static instance

    Singleton() {  // Private constructor
        cout << "Constructor Singleton " << data << endl;
        data++;
    }

public:
    // Delete copy constructor and assignment operator to prevent duplication
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    static Singleton& getInstance() {
        // Return reference to the static instance
        // The static Singleton instance; inside getInstance() ensures that the object is created only once.
        static Singleton instance; 
        return instance;
    }

    void printStatus() {
        cout << data << "\n";
    }

    void increment() {
        data++;
    }
};