#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

void clearScreen() {
    system("clear");
}

int main() {
    string name, choice;
    int age;

    cout << "Welcome to Adventure Game!\n";
    cout << "What is your name\n";
    getline(cin, name);
    cout << "What is your age\n";
    cin >> age;

    if (age >= 18) {
        cout << "Do you want to play? (yes/no)\n";
        cin >> choice;

        if (choice == "yes") {
            cout << "Let's Play!\n";
            cout << "Do you want to go left or right? (left/right)\n";
            cin >> choice;

            if (choice == "left") {
                cout << "You saw train tracks and woods... which one you choose? (track/wood)\n";
                cin >> choice;

                if (choice == "track") {
                    cout << "You go along that train tracks it takes 1 hour walk...\n";
                    cout << "You saw bridge and lake... Which one you choose? (bridge/lake)\n";
                    cin >> choice;

                    if (choice == "lake") {
                        cout << "Do you want to swim or go around (swim/around)\n";
                        cin >> choice;

                        if (choice == "around") {
                            cout << "To Be Continue\n";
                        } else if (choice == "swim") {
                            cout << "You drown and DIE!!!\n";
                        } else {
                            cout << "Invalid Command!\n";
                        }

                    } else if (choice == "bridge") {
                        cout << "You got hit by train in the bridge and DIE!!!\n";
                    } else {
                        cout << "Invalid Command!";
                    }

                } else if (choice == "wood") {
                    cout << "You went into deep woods. Suddenly, you came across abandon bus.\n";
                    cout << "The bus looks so old. It's look like from 90s\n";
                    cout << "Suddenly, You felt the water drop on your skin. Before you could react.\n";
                    cout << "The rain pouring so heavily...\n";
                    cout << "Which one you choose? (bus/stay)\n";
                    cin >> choice;

                    if (choice == "bus") {
                        cout << "To Be Continue\n";
                    } else if (choice == "stay") {
                        cout << "You got eaten by wolf pack in the woods...DIE!!!\n";
                    } else {
                        cout << "Invalid Command!\n";
                    }

                } else {
                    cout << "Invalid Command!\n";
                }

            } else if (choice == "right") {
                cout << "You saw a lake... You swim or go around? (swim/around)\n";
                cin >> choice;

                if (choice == "around") {
                    cout << "You go around and saw house and barn.\n";
                    cout << "Which one you choose? (house/barn)\n";
                    cin >> choice;

                    if (choice == "barn") {
                        cout << "You arrived at the barn at night.\n";
                        cout << "You was looking around and you found a path to the woods\n";
                        cout << "Which one you choose? (stay/woods)\n";
                        cin >> choice;

                        if (choice == "stay") {
                            cout << "You woke up early and saw path to the woods very clearly\n";
                            cout << "Which one you choose? (stay/woods)\n";
                            cin >> choice;

                            if (choice == "woods") {
                                cout << "You've been walking an hour into the woods.\n";
                                cout << "Then you found abandon house. You wanna go inside or stay away from it? (inside/stay)\n";
                                cin >> choice;

                                if (choice == "inside") {
                                    cout << "To Be Continue\n";
                                } else if (choice == "stay") {
                                    cout << "You got eaten by wolf pack in the woods...DIE!!!\n";
                                } else {
                                    cout << "Invalid Command!\n";
                                }

                            } else if (choice == "stay") { 
                                cout << "You got killed by crazy man...DIE!!!\n";
                            } else {
                                cout << "Invalid Command!\n";
                            }
                
                        } else if (choice == "woods") { 
                            cout << "You got eaten by wolf pack in the woods...DIE!!!\n";
                        } else {
                            cout << "Invalid Command!\n";
                        }
                        
                    } else if (choice == "house") {
                        cout << "You got killed by crazy man...DIE!!!\n";
                    } else {
                        cout << "Invalid Command!\n";
                    }

                } else if (choice == "swim") {
                    cout << "You drown and DIE!!!\n";
                } else {
                    cout << "Invalid Command!\n";
                }

            } else {
                cout << "Invalid Command!\n";
            }

        } else if (choice == "no") {
            cout << "See You Later...\n";
        } else {
            cout << "Invalid Command!\n";
        }

    } else {
        cout << "You are not old enough to Play!\n";
    }
}