//AWXYHE
#include <iostream>
#include <vector>
#include <string>
#include "matrix.h"
#include "tetelek.h"


using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    string filename;
    std::vector< std::vector<int> > x;
    bool l;
    int ind;
    int db = 0;

    cout<<"Filename: ";
    cin>>filename;
    FillMatrixFromFile(x,filename);

    cout<<"\na)\n";
    l = linker(x,ind);
    if(l)
    {
        cout<<" Van ilyen: "<<ind + 1<<" sorban "<<x[ind][0]<<" az.\n";
    }else
    {
        cout<<" Nincs ilyen!";
    }


    cout<<"\nb)\n";
    int sor = feltmaxker(x,db,l);
    if(l)
    {
        cout<<" A "<< sor +1<<".edik sorban van a legtobb paros."; cout<<db<<" darab";
    }   else
    {
        cout<<"nincs ilyen";
    }

    return 0;
}
