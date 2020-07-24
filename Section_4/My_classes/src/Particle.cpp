#include <iostream>
#include "Particle.h"

using namespace std;

Particle::Particle()
{
    cout << "Particle created." << endl;
}

Particle::~Particle()
{
    cout << "Particle destroyed. \n"
         << endl;
}

void Particle::state(float spin, float mass, int charge)
{
    cout << "Particle has:\n\tmass:\t" << mass << " MeV\n\tspin:\t" << spin << "\n\tcharge:\t" << charge << endl;
}

void Particle::guess(float spin, float mass, int charge)
{
    if (spin == 0.5)
    {
        cout << "Particle is fermion. " << endl;
        if (charge == +1)
        {
            if (mass == 1000)
            {
                cout << "\nParticle is PROTON. " << endl;
            }
            if (mass == 0.511)
            {
                cout << "\nParticle is POSITRON. " << endl;
            }
            if (mass == 105)
            {
                cout << "\nParticle is ANTI MUON. " << endl;
            }
        }
        else if (charge == -1)
        {
            if (mass == 1000)
            {
                cout << "\nParticle is ANTI PROTON. " << endl;
            }
            if (mass == 0.511)
            {
                cout << "\nParticle is ELECTRON. " << endl;
            }
            if (mass == 105)
            {
                cout << "\nParticle is MUON. " << endl;
            }
        }
        else if ((charge == 0) && (mass == 1))
        {
            cout << "\nParticle is NEUTRON. " << endl;
        }
        else
        {
            cout << "\nParticle is unknown. " << endl;
        }
    }
    else if (spin == 1)
    {
        cout << "Particle is boson. " << endl;
        if (charge == +1)
        {
            cout << "\nParticle is W+ BOSON. " << endl;
        }
        else if (charge == -1)
        {
            cout << "\nParticle is W- BOSON. " << endl;
        }
        else if (charge == 0)
        {
            if (mass == 125000)
            {
                cout << "\nParticle is HIGGS BOSON. " << endl;
            }
            else if (mass == 91000)
            {
                cout << "\nParticle is Z BOSON. " << endl;
            }
        }
        else
        {
            cout << "\nParticle is unknown. " << endl;
        }
    }
    else if (spin == 2)
    {
        cout << "\nParticle is GRAVITON. " << endl;
    }
    else
    {
        cout << "\nParticle is unknown. " << endl;
    }
}