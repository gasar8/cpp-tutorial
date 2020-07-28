#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace bleban
{
    struct Particle
    {
        double m_x;
        double m_y;

        double m_speed;
        double m_direction;

    public:
        Particle();
        virtual ~Particle();
        void update(int interval);
    };

} /* namespace bleban */

#endif /* PARTICLE_H_ */