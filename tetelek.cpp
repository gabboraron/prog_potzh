#include <vector>
#include <string>
#include "tetelek.h"

using namespace std;

bool opteldont(std::vector<int>& w)
{
    bool l = true;
    int i = 1;
    int tmp = w[0];
    while((i<w.size()) && (l == true))
    {
        l = (w[i] <= tmp);
        ++i;
    }
    return l;
}

bool linker(std::vector< std::vector<int> >& v, int& ind)
{
    bool l = false;
    //for(int i=0; i<v.size(); ++i)
    int i = 0;
    while(i<v.size() && (l == false))
    {
        l = opteldont(v[i]);
        ind = i;
         //cout<<v[i][j]<<" ";
        ++i;

        /*
        for(int j=0; j<=v[i].size(); ++j)
        {


        }
        */
    }
    return l;
}


int feltmaxker(std::vector< std::vector<int> >& v, int& db, bool& l)
{
    l = false;
    bool boolTmp;
    int ind;
    int szamlalasTmp;

    for(int i=0; i<v.size(); ++i)
    {
        boolTmp = opteldont(v[i]);
        szamlalasTmp = szamlalas(v[i]);

        if((boolTmp == true) && l)
        {
            if(db<szamlalasTmp)
            {
                db = szamlalasTmp;
                ind = i;
            }
        } else if((boolTmp == true) && (l == false))
        {
            l = true;
            db = szamlalasTmp;
            ind = i;
        }
    }
    return ind;
}

int szamlalas(std::vector<int>& w)
{
    int c = 0;
    for(int i=0; i<w.size(); ++i)
    {
        if(w[i]%2 == 0)
        {
            ++c;
        }
    }
    return c;
}
