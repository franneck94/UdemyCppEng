#include <string>
#include <string_view>

class Axe
{
public:
    Axe(const std::string_view &_name,
        const float _damage,
        const float _attack_speed)
        : name(_name), damage(_damage), attack_speed(_attack_speed){};
    ~Axe() = default;

    std::string get_name() const;
    float get_damage() const;
    float get_attack_speed() const;

private:
    std::string name;
    float damage;
    float attack_speed;
};
