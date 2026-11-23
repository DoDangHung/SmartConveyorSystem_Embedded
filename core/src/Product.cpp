
#include "Product.h"
#include <cmath>
#include <stdexcept>

Product::Product(int id, ProductColor color)
    : id(id), color(color), position(0.0)
{
}

int Product::getId() const
{
    return id;
}

ProductColor Product::getColor() const
{
    return color;
}

double Product::getPosition() const
{
    return position;
}

void Product::move(double distance)
{
    if (!std::isfinite(distance) || distance < 0.0)
    {
        throw std::invalid_argument("Invalid movement distance");
    }

    position += distance;
}
