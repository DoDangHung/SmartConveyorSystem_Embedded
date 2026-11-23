#include <iostream>
#include "Product.h"

int main()
{
    Product product(1, ProductColor::Red);

    std::cout << "Product ID: "
              << product.getId() << '\n';

    std::cout << "Initial position: "
              << product.getPosition() << " m\n";

    product.move(0.25);

    std::cout << "Current position: "
              << product.getPosition() << " m\n";

    return 0;
}
