#pragma once

#include <math.h>

class Vector2 {
    public:
        Vector2(float x, float y);
        Vector2();
        Vector2 add(Vector2 vecB);
        Vector2 sub(Vector2 vecB);
        Vector2 mult(Vector2 vecB);
        Vector2 div(Vector2 vecB);
        float dist();
        Vector2 cross(Vector2 vecB);
        Vector2 scallar(Vector2 vecB);

        float x;
        float y;
};
class Vector3 {
    public:
        Vector3(float x, float y, float z);
        Vector3();
        Vector3 add(Vector3 vecB);
        Vector3 sub(Vector3 vecB);
        Vector3 mult(Vector3 vecB);
        Vector3 div(Vector3 vecB);
        float dist();
        Vector3 cross(Vector3 vecB);
        Vector3 scallar(Vector3 vecB);

        float x;
        float y;
        float z;
};