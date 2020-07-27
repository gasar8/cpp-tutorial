#include "Swarm.h"

namespace bleban
{

    Swarm::Swarm()
    {
        m_pParticles = new Particle[NPARTICLES];
    }

    Swarm::~Swarm()
    {
        delete[] m_pParticles;
    }

} /* namespace bleban */