/**
 * Physics Equations
 * A collection of physics equations written in C++.
 * GitHub: https://www.github.com/0x4248/physics_equations
 * Licence: GNU General Public License v3.0
 * By: 0x4248
*/

#include <cmath>

/**
 * Newton's Second Law
 * Newton's second law states that the acceleration of an object is dependent upon two variables - the net force acting upon the object and the mass of the object.
 * Params:
 * - force: The force applied to the object
 * - mass: The mass of the object
 * - acceleration: The acceleration of the object
*/
double newton_second_law(double force = 0, double mass = 0, double acceleration = 0) {
    if (force == 0) {
        return mass * acceleration;
    } else if (mass == 0) {
        return force / acceleration;
    } else if (acceleration == 0) {
        return force / mass;
    } else {
        return 0;
    }
}

/**
 * Projectile Motion
 * Projectile motion is a form of motion experienced by an object or particle (a projectile) that is thrown near the Earth's surface and moves along a curved path under the action of gravity only (in particular, the effects of air resistance are assumed to be negligible).
 * Params:
 * - initial_velocity: The initial velocity of the projectile
 * - time: The time the projectile is in motion
 * - acceleration: The acceleration of the projectile
*/
double projectile_motion(double initial_velocity = 0, double time = 0, double acceleration = 0) {
    if (initial_velocity == 0) {
        return 0.5 * acceleration * pow(time, 2);
    } else if (time == 0) {
        return initial_velocity * time + 0.5 * acceleration * pow(time, 2);
    } else if (acceleration == 0) {
        return initial_velocity * time;
    } else {
        return 0;
    }
}

/**
 * Ohm's Law
 * Ohm's law states that the current through a conductor between two points is directly proportional to the voltage across the two points.
 * Params:
 * - voltage: The voltage across the two points
 * - resistance: The resistance of the conductor
 * - current: The current through the conductor
*/
double ohms_law(double voltage = 0, double resistance = 0, double current = 0) {
    if (voltage == 0) {
        return resistance * current;
    } else if (resistance == 0) {
        return voltage / current;
    } else if (current == 0) {
        return voltage / resistance;
    } else {
        return 0;
    }
}

/**
 * Mass-Energy Equivalence
 * Mass-energy equivalence states that anything having mass has an equivalent amount of energy and vice versa, with these fundamental quantities directly relating to one another by Albert Einstein's famous formula: E = mc^2
 * Params:
 * - mass: The mass of the object
 * - speed_of_light: The speed of light
 * - energy: The energy of the object
*/
double mass_energy_equivalence(double mass = 0, double speed_of_light = 0) {
    if (mass == 0) {
        return 0;
    } else if (speed_of_light == 0) {
        return 0;
    } else {
        return mass * pow(speed_of_light, 2);
    }
}

/**
 * Simple Harmonic Motion
 * Simple harmonic motion is a type of periodic motion where the restoring force is directly proportional to the displacement and acts in the direction opposite to that of displacement.
 * Params:
 * - amplitude: The amplitude of the motion
 * - angular_frequency: The angular frequency of the motion
 * - time: The time the motion is in progress
 * - phase: The phase of the motion
 */
double simple_harmonic_motion(double amplitude = 0, double angular_frequency = 0, double time = 0, double phase = 0) {
    if (amplitude == 0) {
        return 0;
    } else if (angular_frequency == 0) {
        return 0;
    } else if (time == 0) {
        return amplitude * sin(angular_frequency * time + phase);
    } else if (phase == 0) {
        return amplitude * sin(angular_frequency * time);
    } else {
        return 0;
    }
}

/**
 * Coulomb's Law
 * Coulomb's law, or Coulomb's inverse-square law, is an experimental law of physics that quantifies the amount of force between two stationary, electrically charged particles.
 * Params:
 * - electrostatic_force: The electrostatic force between the two particles
 * - charge_one: The charge of the first particle
 * - charge_two: The charge of the second particle
 * - distance: The distance between the two particles
 */
double coulombs_law(double electrostatic_force = 0, double charge_one = 0, double charge_two = 0, double distance = 0) {
    if (electrostatic_force == 0) {
        return (charge_one * charge_two) / pow(distance, 2);
    } else if (charge_one == 0) {
        return electrostatic_force * pow(distance, 2) / charge_two;
    } else if (charge_two == 0) {
        return electrostatic_force * pow(distance, 2) / charge_one;
    } else if (distance == 0) {
        return sqrt((charge_one * charge_two) / electrostatic_force);
    } else {
        return 0;
    }
}

/**
 * Work-Energy Theorem
 * The work-energy theorem states that the work done by all forces acting on a particle equals the change in the particle's kinetic energy.
 * Params:
 * - work: The work done by all forces acting on a particle
 * - kinetic_energy: The kinetic energy of the particle
 * - potential_energy: The potential energy of the particle
 */
double work_energy_theorem(double work = 0, double kinetic_energy = 0, double potential_energy = 0) {
    if (work == 0) {
        return kinetic_energy + potential_energy;
    } else if (kinetic_energy == 0) {
        return work - potential_energy;
    } else if (potential_energy == 0) {
        return work - kinetic_energy;
    } else {
        return 0;
    }
}

/**
 * Ideal Gas Law
 * The ideal gas law, also called the general gas equation, is the equation of state of a hypothetical ideal gas.
 * Params:
 * - pressure: The pressure of the gas
 * - volume: The volume of the gas
 * - number_of_moles: The number of moles of the gas
 * - gas_constant: The gas constant
 * - temperature: The temperature of the gas
 */
double ideal_gas_law(double pressure = 0, double volume = 0, double number_of_moles = 0, double gas_constant = 0, double temperature = 0) {
    if (pressure == 0) {
        return (number_of_moles * gas_constant * temperature) / volume;
    } else if (volume == 0) {
        return (number_of_moles * gas_constant * temperature) / pressure;
    } else if (number_of_moles == 0) {
        return (pressure * volume) / (gas_constant * temperature);
    } else if (gas_constant == 0) {
        return (pressure * volume) / (number_of_moles * temperature);
    } else if (temperature == 0) {
        return (pressure * volume) / (number_of_moles * gas_constant);
    } else {
        return 0;
    }
}
