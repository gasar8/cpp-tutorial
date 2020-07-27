#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace bleban
{
    struct Particle
    {
        double m_x;
        double m_y;

        double m_xspeed;
        double m_yspeed;

    public:
        Particle();
        virtual ~Particle();
        void update();
    };

} /* namespace bleban */

#endif /* PARTICLE_H_ */