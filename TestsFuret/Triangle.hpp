#include <cmath>
#include <glm/mat4x4.hpp>
#define GLM_ENABLE_EXPERIMENTAL // Required for gtx/quaternion.hpp
#include <glm/gtc/quaternion.hpp>
#include <glm/gtx/quaternion.hpp>
#include <glm/vec3.hpp>

typedef glm::mat4 mat4;
typedef glm::quat quat;
typedef glm::vec3 vec3;

class Triangle
{
private:
  float const* vertices;
  quat         position;

public:
  Triangle(const float vertices[6]);
  ~Triangle();
  void rotate();
  void translate();
};