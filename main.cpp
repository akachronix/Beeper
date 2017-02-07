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
        if(argc == 1) {
            cout << "\nError 22: User did not enter any arguments.\n";
            cout << "\nProper Usage:\n1) beeper play    - lets you select a song\n";
            cout << "2) beeper playall - plays all songs\n";
        } else {
            cout << "\nBeeper v0.02\nby Chronix\n";
            string mode = argv[1];
            if(mode == "play" | mode == "Play"){
                cout << "\n1) Mary Had a Little Lamb\n2) Type Your Text Here\n3) Harry Potter Theme\n\n";
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
                    cout < "Playing Harry Potter Theme...\n";
                    Harry();
                    cout << "Finished!\n";
                } else {
                    cout << "\nError 1: invalid syntax\n";
                    cout << songsel << "\n";
                }
            } else if(mode == "playall" | mode == "PlayAll" | mode == "Playall" | mode == "playAll") {
                cout << "\nPlaying Mary Had a Little Lamb...\n";
                Mary();
                cout << "\nFinished!\n";
                Sleep(2000);
                cout << "\nPlaying Type Your Text Here...\n";
                Type();
                cout << "\nFinished!\n";
                Sleep(2000);
                cout << "\nPlaying Harry Potter Theme...\n";
                Harry();
                cout << "\nFinished!\n";
            } else {
                cout << "\nError 1: invalid syntax\n";
                cout << argv[1] << "\n";
            }
        }
    } catch(...) {
        cout << "\nError 0: Unexpected error occurred...\n";
        return -1;
    } return 0;
}
