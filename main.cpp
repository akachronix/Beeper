// Name:   Beeper v0.02
// Author: Chronix
// Uses CLI to play tones like a PC speaker
//
// For the user song function,
// use the hertz value for the
// song which can be found in
// notes.h.
//
// Arguments    argv[0]  argv[1]
//  Syntax:     beeper    play
//  Syntax: program name  mode

#include "everything.h"
#include <fstream>
#include <conio.h>
#include "songs.h"

using std::ofstream;
using std::ifstream;

int main(int argc, char* argv[]) {
    try {
        ifstream in("usersong.txt");
        cout << "\nBeeper v0.02\nby Chronix\n";
        string mode = argv[1];
        if(mode == "play" | mode == "Play"){
            cout << "\n1) Mary Had a Little Lamb\n2) Type Your Text Here\n\n";
            char songsel = _getch();
            if(songsel == '1') {
                cout << "Playing Mary Had a Little Lamb...\n";
                Mary();
                cout << "\nFinished!\n";
            } else if(songsel == '2'){
                cout << "Playing Type Your Text Here...\n";
                Type();
                cout << "\nFinished!\n";
            } else if(songsel == '3') {
                cout << "Playing User Made Song...\n";
                int txtLines = io::intinput("\nHow many lines is your file? ");
                string line[txtLines];
                if(in.is_open()) {
                    int j = 0;
                    for(int i = 0; i < txtLines; i++) {
                        getline(in, line[i]);
                    } for(int i = 0; i < txtLines; i++) {
                        if(i == 1) {
                            Beep(atoi(line[i].c_str()), atoi())
                        }
                        if(j % 2 == 0) {
                            j++;
                            Beep(atoi(line[j]))
                        }
                        j = i;
                    }
                } else {
                    cout << "\nError 2: File could not be opened.\n";
                    return -1;
                } cout << "\nFinished!\n";
            } else {
                cout << "\nError 1: invalid syntax\n";
                cout << songsel << "\n";
            }
        } else {
            cout << "\nError 1: invalid syntax\n";
            cout << argv[1] << "\n";
        }
        in.close();
    } catch(...) {
        cout << "\nError 0: Unexpected error occurred...\n";
        return -1;
    } return 0;
}
