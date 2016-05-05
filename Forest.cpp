#include "Forest.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

Forest::Forest()
{
    //ctor
}

Forest::~Forest()
{
    //dtor
}

void Forest::play(){
    string input;
    cout<<"Would you like to play a game?"<<endl;
    cout<<"Y or N"<<endl;
    cin>>input;
    if(input=="Y"){
        options1();
    }
    if(input=="N"){
        cout<<"Maybe next time... Goodbye."<<endl;
        return;
    }
    else{
        cout<<"Please enter a valid input"<<endl;
        play();
    }
}

void Forest::options1(){
    string input;
    cout<<"Welcome to the beginning of a strange journey."<<endl;
    cout<<"You find yourself in dense, misty forest. A clear night sky provides you with enough light to make out the terrain within a small radius of your feet."<<endl;
    cout<<"What's your first move?"<<endl;
    cout<<"A. Start walking"<<endl;
    cout<<"B. Sit down and ask 'How did I get here?'"<<endl;
    cout<<"C. Check your pockets."<<endl;
    cout<<"D. Look around."<<endl;
    cin>>input;
    if(input=="A"){
        options2();
    }
    if(input=="B"){
        cout<<"The last thing you remember is heading out for a camping trip with your friends. Someone mentioned something about a series of murders in the area..."<<endl;
        cout<<"You begin walking at a brisk pace."<<endl;
        options2();
    }
    if(input=="C"){
        displayInventory(inventory);
        opt1();
    }
    if(input=="D"){
        displayPosition();
        opt1();
    }
    else{
        cout<<"Please enter a valid input"<<endl;
        options1();
    }

}

void Forest::opt1(){
    string input;
    cout<<"A. Start walking"<<endl;
    cout<<"B. Sit down and ask 'How did I get here?'"<<endl;
    cout<<"C. Look around."<<endl;
    cin>>input;
     if(input=="A"){
        options2();
    }
    if(input=="B"){
        cout<<"The last thing you remember is heading out for a camping trip with your friends. Someone mentioned something about a series of murders in the area..."<<endl;
        cout<<"You begin walking at a brisk pace."<<endl;
        options2();
    }
    if(input=="C"){
        string inp;
        displayPosition();
        cout<<"A. Start walking"<<endl;
        cout<<"B. Sit down and ask 'How did I get here?'"<<endl;
        cin>>inp;
        if(inp=="A"){
            options2();
        }
        if(inp=="B"){
            cout<<"The last thing you remember is heading out for a camping trip with your friends. Someone mentioned something about a series of murders in the area..."<<endl;
            cout<<"You begin walking at a brisk pace."<<endl;
            options2();
        }
    }

}

void Forest::options2(){
    string input;
    position++;
    cout<<"Your first clue lies at the base of a tall pine tree."<<endl;
    cout<<"A bloodied meat cleaver"<<endl;
    cout<<"A. Pick it up"<<endl;
    cout<<"B. Keep walking"<<endl;
    cout<<"C. Where am I?"<<endl;
    cin>>input;
    if(input=="A"){
        string inp;
        pickUpObject(inventory,"meat cleaver");
        cout<<"You took the cleaver."<<endl;
        cout<<"A. Keep walking"<<endl;
        cout<<"B. Cleave the nearest tree out of frustration."<<endl;
        cout<<"C. Where am I?"<<endl;
        cin>>inp;
        if(inp=="A"){
            options3();
        }
        if(inp=="B"){
            endGame1();
        }
        if(inp=="C"){
            displayPosition();
            opt2();
        }

    }
    if(input=="B"){
        options3();
    }
    if(input=="C"){
        displayPosition();
    }
}

void Forest::opt2(){
    string input;
    cout<<"A. Pick it up"<<endl;
    cout<<"B. Keep walking"<<endl;
    cin>>input;
    if(input=="A"){
        string inp;
        pickUpObject(inventory,"meat cleaver");
        cout<<"You took the cleaver."<<endl;
        cout<<"A. Keep walking"<<endl;
        cout<<"B. Cleave the nearest tree out of frustration."<<endl;
        cout<<"C. Where am I?"<<endl;
        cin>>inp;
        if(inp=="A"){
            options3();
        }
        if(inp=="B"){
            endGame1();
        }
        if(inp=="C"){
            displayPosition();
            opp2();

        }
    }
}

void Forest::op2(){
    string input;
    cout<<"A. Pick it up"<<endl;
    cout<<"B. Keep walking"<<endl;
    cin>>input;
    if(input=="A"){
        string inp;
        pickUpObject(inventory,"meat cleaver");
        cout<<"You took the cleaver."<<endl;
        cout<<"A. Keep walking"<<endl;
        cout<<"B. Cleave the nearest tree out of frustration."<<endl;
        cin>>inp;
        if(inp=="A"){
            options3();
        }
        if(inp=="B"){
            endGame1();
        }
    }
}

void Forest::opp2(){
    string input;
    cout<<"A. Keep walking"<<endl;
    cout<<"B. Cleave the nearest tree out of frustration"<<endl;
    cin>>input;
    if(input=="A"){
        options3();
    }
    if(input=="B"){
        endGame1();
    }
}

void Forest::options3(){
    string input;
    position++;
    cout<<"You begin to smell smoke, but also something rancid."<<endl;
    cout<<"There is a note stuck under a rock nearby. You pick it up"<<endl;
    notes.push_back("It's too late my friend. Turn back now and save yourself.");
    cout<<"A. Read note."<<endl;
    cout<<"B. Keep walking"<<endl;
    cin>>input;
    if(input=="A"){
        string inp;
        readNotes(notes);
        cout<<"A. Turn around."<<endl;
        cout<<"B. Keep walking."<<endl;
        if(inp=="A"){
            cout<<"Ignorance is bliss. Sleep well tonight."<<endl;
        }
        if(inp=="B"){
            options4();
        }
    }
    if(input=="B"){
        options4();
    }
    else{
        cout<<"Please enter a valid input"<<endl;
        options3();
    }

}

void Forest::options4(){
    string input;
    position++;
    cout<<"You approach a campfire. What you see next is greatly disturbing."<<endl;
    cout<<"All four of your friends lie on the ground around the flame, each one with a crushed neck and mouths agape."<<endl;
    cout<<"How do you handle this?"<<endl;
    cout<<"A. Scream into the heavens."<<endl;
    cout<<"B. Run. Run far away."<<endl;
    cout<<"C. Whip the cleaver into the shadows."<<endl;
    if(input=="A"){
        cout<<"The killer heard you. He quickly moves behind you and finishes his job."<<endl;
        cout<<"'Good game.'"<<endl;
        cout<<"One last breath and you collapse to the dirt. It's over."<<endl;
        play();
    }
    if(input=="B"){
        cout<<"You barely escape, but you won't sleep for months."<<endl;
        play();
    }
    if(input=="C"){
        endGame2();
    }
}

void Forest::options5(){
    string input;
    position++;
}

void Forest::endGame1(){
    cout<<"You woke up an angry mother bear. You never stood a chance. The bear tore into you before you could react."<<endl;
    play();
}

void Forest::endGame2(){
    cout<<"By some stroke of luck , the cleaver landed directly in the killer's chest, killing him on impact."<<endl;
    play();
}

void Forest::displayInventory(vector<string>inventory){
    cout<<"You have: ";
    for(int i=0; i<inventory.size();i++){
        cout<<inventory[i]<<", "<<endl;
    }
}

void Forest::pickUpObject(vector<string>inventory, string object){
    inventory.push_back(object);
}

void Forest::displayPosition(){
    if(position==0){
        cout<<"You see nothing but trees and a few stars peaking out above them."<<endl;
    }
    if(position==1){
        cout<<"You're 5 minutes from where you started. Still nothing but trees around you."<<endl;
    }
    if(position==2){
        cout<<"You're a little more lost now, but there appears to be a light in the distance."<<endl;
    }
    if(position==3){
        cout<<"It's been 20 minutes since you first started. You smell and see what is definitely a fire."<<endl;
    }
    if(position==4){
        cout<<"You found your friends. Dead around a fire."<<endl;
    }
}

void Forest::readNotes(vector<string>notes){
    for(int i=0; i<notes.size();i++){
        cout<<notes[i]<<" . . . "<<endl;
    }

}
