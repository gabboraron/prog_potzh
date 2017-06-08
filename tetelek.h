#ifndef TETELEK_H_INCLUDED
#define TETELEK_H_INCLUDED
#include <vector>
#include <string>
#include <iostream>

// opteldont
bool opteldont(std::vector<int>&);

// linker
bool linker(std::vector< std::vector<int> >&, int&);

//feltmaxker
int feltmaxker(std::vector< std::vector<int> >&, int&,  bool&);

//szamlalas
int szamlalas(std::vector<int>&);

#endif // TETELEK_H_INCLUDED
