#ifndef PARTICLE_H_
#define PARTICLE_H_

#include <SDL.h>

namespace bleban
{
    struct Particle
    {
        double m_x;
        double m_y;

    public:
        Particle();
        virtual ~Particle();
    };

} /* namespace bleban */

#endif /* PARTICLE_H_ */