// Name:   Beeper v0.02
// Author: Chronix
// Uses CLI to play tones like a PC speaker
//
// Arguments    argv[0]  argv[1]
//  Syntax:     beeper    play
//  Syntax: program name  mode

#include "everything.h"
#include <conio.h>
#include "songs.h"

int main(int argc, char* argv[]) {
    try {
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
            } else {
                cout << "\nError 1: invalid syntax\n";
                cout << songsel << "\n";
            }
        } else {
            cout << "\nError 1: invalid syntax\n";
            cout << argv[1] << "\n";
        }
    } catch(...) {
        cout << "\nUnexpected error occurred...\n";
        return -1;
    } return 0;
}
