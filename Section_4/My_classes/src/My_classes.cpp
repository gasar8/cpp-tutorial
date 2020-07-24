#include <iostream>
#include "Particle.h"

using namespace std;

int main()
{
    cout << "Starting program ..." << endl;

    {
        cout << "Electron" << endl;
        cout << "========" << endl;
        Particle electron;
        electron.state(0.5, 0.511, -1);
    }
    {
        cout << "Positron" << endl;
        cout << "========" << endl;
        Particle positron;
        positron.state(0.5, 0.511, +1);
    }
    {
        cout << "W boson" << endl;
        cout << "=======" << endl;
        Particle WBoson;
        WBoson.state(1, 80000, +1);
    }
    {
        cout << "Gluon" << endl;
        cout << "=====" << endl;
        Particle gluon;
        gluon.state(1, 0, 0);
    }

    {
        float spin = 0.5;
        float mass = 105;
        int charge = -1;
        cout << "Unknown" << endl;
        cout << "=======" << endl;
        Particle unknown;
        unknown.state(spin, mass, charge);
        unknown.guess(spin, mass, charge);
    }

    cout << "\nEnding program ..." << endl;
    return 0;
}
