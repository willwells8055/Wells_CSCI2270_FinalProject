#ifndef FOREST_H
#define FOREST_H
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;


class Forest
{
    public:
        Forest();
        ~Forest();
        vector<string>inventory;
        vector<string>notes;
        int position=0;
        void readNotes(vector<string>notes);
        void displayInventory(vector<string>inventory);
        void displayPosition();
        void pickUpObject(vector<string>inventory, string object);
        void writeMessage(string message);
        void play();
        void options1();
        void opt1();
        void options2();
        void opt2();
        void op2();
        void opp2();
        void options3();
        void options4();
        void options5();
        void endGame1();
        void endGame2();
    protected:
    private:

};

#endif // FOREST_H
