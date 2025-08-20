#include <iostream>

#define RESET "\033[0m"
#define RED "\033[31m"
#define BLUE "\033[34m"

int main()
{

    int b = 0;
    float y, x, a;

    // Set the color to red before drawing
    std::cout << RED;

    for (y = 1.5f; y > -1.5f; y -= 0.1f)
    {
        for (x = -1.5f; x < 1.5f; x += 0.05f)
        {
            a = x * x + y * y - 1;
            if (a * a * a - x * x * y * y * y <= 0.0f)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    // Reset color to default, then print the final message in blue
    std::cout << RESET << BLUE << "i love this" << RESET << std::endl;

    return 0;
}