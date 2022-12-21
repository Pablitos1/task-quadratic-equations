#include <iostream>
#include <cmath>

int main()
{
    float a, b, c, x1, x2;
    std::cin >> a >> b >> c;
    if (a < 0)
    {
        std::cout << "Not a quadratic equation!" << std::endl; 
    }
    else
    {
        float discriminant = b * b - 4 * a * c;
        if (discriminant >= 0)
        {
            x1 = (-b + std::sqrt(discriminant)) / (2 * a);
            x2 = (-b + std::sqrt(discriminant)) / (2 * a);
            std::cout << "Root 1, 2: " << x1 << ", " << x1 << std::endl;
        }
        else
        {
            std::cout << "Complex scenario is not supported!" << std::endl; 
        }
    }
    return 0;
}