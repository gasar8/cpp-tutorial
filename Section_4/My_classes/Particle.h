#ifndef PARTICLE_H_
#define PARTICLE_H_

class Particle
{
public:
    void state(float spin, float mass, int charge);
    void guess(float spin, float mass, int charge);
    Particle();
    ~Particle();
};

#endif /* PARTICLE_H_ */