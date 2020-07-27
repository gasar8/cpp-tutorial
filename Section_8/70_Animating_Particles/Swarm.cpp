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

    void Swarm::update()
    {
        for (int i = 0; i < bleban::Swarm::NPARTICLES; i++)
        {
            m_pParticles[i].update();
        }
    }
} /* namespace bleban */