#include <iostream>
#include <list>
#include "State.h"
using namespace std;

void print (list <State> theList)
{
    for (auto it = theList.begin(); it !=theList.end(); ++it)
    {
        cout << it->getName() << ", " << it->getPercent() << "%" << endl;
    }
    cout << endl;
}
void add(list<State> &l, State state)
{
    list<State>::iterator it;
    list<State>::iterator previous;
    if(l.empty() || l.front().getPercent() > state.getPercent())
    {
        l.push_front(state);
    }
    else
    {
        previous = l.begin();
        for (auto it = l.begin(); it != l.end(); ++it)
        {
            if (it->getPercent() > state.getPercent())
                break;
            else
                previous = it;
        }
    l.insert (++previous,state);

    }
}

int main()
{
    list <State> states;

    State tx ("Texas", 13480.8, 7487580672000);
    tx.findPercent();
    cout << tx.getName() << " would use " << tx.getPercent() << "% of its area" << endl << endl;
    add(states, tx);

    State cali ("California", 6922.8, 4563554688000);
    cali.findPercent();
    cout << cali.getName() << " would use " << cali.getPercent() << "% of its area" << endl << endl;
    add(states, cali);

    State lou ("Louisiana", 4200.4, 1445216256000);
    lou.findPercent();
    cout << lou.getName() << " would use " << lou.getPercent() << "% of its area" << endl << endl;
    add(states, lou);

    State flor ("Florida", 40003.1, 1805265792000);
    flor.findPercent();
    cout << flor.getName() << " would use " << flor.getPercent() << "% of its area" << endl << endl;
    add(states, flor);

    State illi ("Texas", 3612.9, 1614549657600);
    illi.findPercent();
    cout << illi.getName() << " would use " << illi.getPercent() << "% of its area" << endl << endl;
    add(states, illi);

    State penn ("Pennsylvania", 3413.0, 1283967590400);
    penn.findPercent();
    cout << penn.getName() << " would use " << penn.getPercent() << "% of its area" << endl << endl;
    add(states, penn);

    State ohio ("Ohio", 3404.5, 1249649280000);
    ohio.findPercent();
    cout << ohio.getName() << " would use " << ohio.getPercent() << "% of its area" << endl << endl;
    add(states, ohio);

    State ny ("New York", 3354.2, 1520933990400);
    ny.findPercent();
    cout << ny.getName() << " would use " << ny.getPercent() << "% of its area" << endl << endl;
    add(states, ny);

    State geo ("Georgia", 2727.6, 1656673920000);
    geo.findPercent();
    cout << geo.getName() << " would use " << geo.getPercent() << "% of its area" << endl << endl;
    add(states, geo);

    State mi ("Michigan", 2610.6, 2696287334400);
    mi.findPercent();
    cout << mi.getName() << " would use " << mi.getPercent() << "% of its area" << endl << endl;
    add(states, mi);

    cout << "Ordered States:" << endl;

    print(states);




    return 0;
}
