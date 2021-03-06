//
// Created by zelenyy on 01.03.18.
//

#ifndef GEANT4_SUPPORT_CXX_FILEUTILS_HH
#define GEANT4_SUPPORT_CXX_FILEUTILS_HH

#include <fstream>
#include <string>
using namespace std;

inline string checkFileName(string filename, int i = 0, string postfix =".bin") {
    ifstream fin;
    if (i == 0) {
        fin.open("data/" +filename + postfix);
        if (fin) {
            return checkFileName(filename, i + 1, postfix);
        } else {
            return filename;
        }
    } else
        fin.open("data/" +filename + to_string(i) + postfix);
    if (fin) {
        return checkFileName(filename, i + 1, postfix);
    } else {
        return filename + to_string(i);
    }

}


#endif //GEANT4_SUPPORT_CXX_FILEUTILS_HH
