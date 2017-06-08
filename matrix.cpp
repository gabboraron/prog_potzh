#include "matrix.h"
#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

using namespace std;


//1) fele beolvasas
void FillMatrixFromFile(std::vector< std::vector<int> >& x, std::string& filename)
{
    cout<<"Filename: "<<filename<<"\n";
    std::ifstream f(filename.c_str());
    if(f.fail()){
        cout<< "\nNincs meg a file!\n";
        exit(1);
    }
    cout<<"\n A file tartalma: \n";
    int m,n;
    f>>m>>n;
    if(m<0 || n<0)
    {
        cout<<"\nHibas meret!";
    } else
    {
        x.resize(m);
        for(int i=0; i<m; ++i)
        {
            x[i].resize(n);
            for(int j=0; j<n; ++j)
            {
                f>>x[i][j];
                if(f.fail())
                    cout<<"\n***\n Hibas vagy nincs adat!\n***\n";
                cout<<x[i][j];
            }
            cout<<endl;
        }
    }
    f.close();
    cout<<"\n \n Beolvasas vege \n \n";
    //MatrixTest(x,n,m);
}

void MatrixTest(std::vector< std::vector<int> >& x, const int& n, const int& m)
{
    cout<<"\n *** \n  n: "<<n<<"\n  m: "<<m<<"\n";
    for(int i=0; i<m; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n *** \n";
}
