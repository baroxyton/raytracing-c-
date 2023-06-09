#include "camera.h"
#include "render.h"
#include "shape.h"
#include <vector>
// Example with SBS-3d render
int main(){
    Rectangle* testShape = new Rectangle{std::vector<double>{10,5,0}, 5, 5, 5};
    Sphere* testSphere = new Sphere{std::vector<double>{10, 2, 0}, 2};
    Camera testCamera{std::vector<double>{0,2,-0.5}};
    Camera testCamera2{std::vector<double>{0,2,0.5}};
    testCamera.world.push_back(testShape);
    testCamera.world.push_back(testSphere);
    testCamera2.world = testCamera.world;
    double speedLeft = 0.05;
    int i = 0;
    double angleLeft = 0;
    while(true){
        angleLeft += 3;
	testCamera.lookAt(std::vector<double>{10, 5, 0});
	testCamera2.lookAt(std::vector<double>{10, 5, 0});
        testSphere->center[0] -= 0.01;
        i++;
        testSphere->center[2] += speedLeft;
        testSphere->center[1] += speedLeft * 0.1;
        if(i==100){
            i=0;
            speedLeft *= -1;
        }
        renderFrame3D(testCamera.getRender(), testCamera2.getRender());
        //renderFrame(testCamera.getRender());
    }
    
}
