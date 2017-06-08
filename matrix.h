#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED
#include <vector>
#include <string>

//beolvasas
void FillMatrixFromFile(std::vector< std::vector<int> >&, std::string&);

//teszt
void MatrixTest(std::vector< std::vector<int> >&, const int&, const int&);

#endif // MATRIX_H_INCLUDED
