#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle(); // Default constructor
    ~Rectangle(); // Destructor

    // Accessor methods
    void setLength(float len);
    void setWidth(float wid);
    float getLength() const;
    float getWidth() const;

    // Calculate area
    float calculateArea() const;
};

#endif // RECTANGLE_H
