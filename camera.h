#pragma once
#include <vector>
#include "render.h"
class Camera
{
public:
    void lookAt(double x, double y, double z);
    void lookAt(double deg1, double deg2);
    std::vector<std::vector<Color>> getRender();
    Camera(std::vector<double> coordinates);
    void setAngle(double degrees);
private:
    std::vector<double> coordinates;
    std::vector<double> target;
    double viewRange = 100;
    double viewAngle = 90;
    double raySpeed = 1;
    double resolution = 100;
    double matrixWidth;
};