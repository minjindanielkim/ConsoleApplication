#include <iostream>
#include <cstring>
#include <windows.h>
#define max_len 100
using namespace std;

class Com {
    char name[30];
    char graphics[30];
    char cpu[30];
    char memory[30];
public: 
    Com(const char* name, const char* graphics, const char* cpu, const char* memory);
    char* getName() { return name; }
    char* getGraphics() { return graphics; }
    char* getCpu() { return cpu; }
    char* getMemory() { return memory; }
    void display();
    void condition();
    void function();
        
};

Com::Com(const char* name, const char* graphics, const char* cpu, const char* memory) {
    strcpy(this -> name, name);
    strcpy(this -> graphics, graphics);
    strcpy(this -> cpu, cpu);
    strcpy(this -> memory, memory);
}

void Com::condition() {
    system("cls");
    cout << "brand: " << name << endl;
    cout << "current status: ON " << getGraphics() << endl;
    cout << "CPU: " << getCpu() << endl;
    cout << "memory: " << memory << endl;
}

void Com::function() {
    int i;
    system("cls");
    while(true) {
        system("cls");
        cout << "1. calculator" << endl;
        cout << "2. notepad" << endl;
        cout << "3. paint" << endl;
        cout << "4. return" << endl;
        cin >> i;
        switch(i) {
            case 1: 
                system("calc");
                break;
            case 2:
                system("notepad");
                break;
            case 3: 
                system("mspaint");
                break;
            default: 
                return;
        }        
    }
}   

void Com::display()  {
    int select;
    cout << "program on\n";
    Sleep(3000);
    system("cls");
    while(true) {    
        cout << "==== welcome ==== \n";
        cout << "1. computer systems\n";
        cout << "2. capacity\n";
        cout << "3. exit\n"; 
        cin >> select;
        switch (select)
        {
        case 1:
            condition();
            break;
        case 2:
            function();
            break;
        case 3:
            int i = 5;
            while(i > -1) {
                cout << "off" << i << endl;
                --i;
                Sleep(1000);
            }
            return;
        }
        system("pause");
        system("cls");
    }
}

int main()
{
    Com com("samsung", "top condition", "core I7", "until full");
    com.display();
    
}