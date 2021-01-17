#include <iostream>
#include "Scrivener.hpp"
#include "Graph.hpp"

using namespace std;

int main()
{

    Scrivener s;
  ///  s.info();


    s.stageInfo();

    Mage m;
    Ax a;
    cout << m.items_empty() << endl;
    m.addItem(a);
    cout <<"ATTACK POWER WITH AX : " <<
     m.attact(a) << endl;
    m.info();

    Graph<int> graph;



    return 0;
}
