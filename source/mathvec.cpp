#include "mathvec.h"

Vector2::Vector2(float x, float y) {
    this->x = x;
    this->y = y;
}
Vector2::Vector2() {
    this->x = 0;
    this->y = 0;
}
Vector2 Vector2::add(Vector2 vecB) {
    return Vector2(this->x + vecB.x, this->y + vecB.y);
}
Vector2 Vector2::sub(Vector2 vecB) {
    return Vector2(this->x - vecB.x, this->y - vecB.y);
}
Vector2 Vector2::mult(Vector2 vecB) {
    return Vector2(this->x * vecB.x, this->y * vecB.y);
}