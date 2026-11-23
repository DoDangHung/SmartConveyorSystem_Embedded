
#pragma once

enum class ProductColor
{
    Red,
    Green,
    Blue
};

class Product
{
private:
    int id;
    ProductColor color;
    double position;

public:
    Product(int id, ProductColor color);

    int getId() const;
    ProductColor getColor() const;
    double getPosition() const;

    void move(double distance);
};
