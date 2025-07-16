// Complete Guide to C++ Programming Foundations
// Challenge 07_10
// Design a Person Class, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>
#include <vector>
#include <string>
#include <utility>

class Person{
    // Write your code here
    public:
        Person(const std::string& name_i, float energy_i, float happiness_i, float health_i) :
            name(name_i),
            energy(energy_i),
            happiness(happiness_i),
            health(health_i) {}

        void Eat(float calories) {
            energy += (calories * 7.0f / 200.0f);
            if (energy > 100.0f)
                energy = 100.0f;
        }
        
        void Play(float minutes) {
            happiness += (minutes / 2.0f);
            energy -= (minutes / 3.0f);

            if (happiness > 100.0f)
                happiness = 100.0f;

            if (energy < 0.0f)
                energy = 0.0f;
        }

        void Sleep(float hours) {
            energy += (hours * 3.75f);
            health += (hours * 2.5f);

            if (energy > 100.0f)
                energy = 100.0f;
            
            if (health > 100.0f)
                health = 100.0f;
        }

        float GetEnergy() const {
            return energy;
        }

        float GetHappiness() const {
            return happiness;
        }

        float GetHealth() const {
            return health;
        }
    private:
        std::string name;
        float energy;
        float happiness;
        float health;
};

int main(){
    // Example 1
    std::string name = "Alice";
    float energy = 40;
    float happiness = 22;
    float health = 80;

    float calories = 300;
    float playMinutes = 120;
    float sleepHours = 5;

    Person sporty(name, energy, happiness, health);
    sporty.Eat(calories);
    sporty.Play(playMinutes);
    sporty.Sleep(sleepHours);

    std::cout << "Your code returned: { ";
    std::cout << "Energy: " << sporty.GetEnergy() << ", ";
    std::cout << "Happiness: " << sporty.GetHappiness() << ", ";
    std::cout << "Health: " << sporty.GetHealth() << " }" << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}