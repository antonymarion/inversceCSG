#ifndef SPOT_4_0_H
#define SPOT_4_0_H

#include <cstring>

#include "vops.h"

namespace ANONYMOUS{
class CuboidHint; 
class CylinderHint; 
class Vector; 
}
namespace math{
}
namespace ANONYMOUS{
class CuboidHint; 
class CylinderHint; 
class Vector; 
class CuboidHint{
  public:
  float  theta_x;
  float  theta_y;
  float  theta_z;
  int  xlen;
  int  ylen;
  int  zlen;
  float*  xlist;
  float*  ylist;
  float  zlist[];
  CuboidHint(){}
template<typename T_0, typename T_1, typename T_2>
  static CuboidHint* create(  float  theta_x_,   float  theta_y_,   float  theta_z_,   int  xlen_,   int  ylen_,   int  zlen_,   T_0* xlist_, int xlist_len,   T_1* ylist_, int ylist_len,   T_2* zlist_, int zlist_len);
  ~CuboidHint(){
  }
  void operator delete(void* p){ free(p); }
};
class CylinderHint{
  public:
  float  theta_x;
  float  theta_y;
  float  theta_z;
  float  radius;
  float  y;
  float  z;
  int  xlen;
  float  xlist[];
  CylinderHint(){}
template<typename T_0>
  static CylinderHint* create(  float  theta_x_,   float  theta_y_,   float  theta_z_,   float  radius_,   float  y_,   float  z_,   int  xlen_,   T_0* xlist_, int xlist_len);
  ~CylinderHint(){
  }
  void operator delete(void* p){ free(p); }
};
class Vector{
  public:
  float  x;
  float  y;
  float  z;
  Vector(){}
  static Vector* create(  float  x_,   float  y_,   float  z_);
  ~Vector(){
  }
  void operator delete(void* p){ free(p); }
};
extern void main__Wrapper(int id);
extern void main__WrapperNospec(int id);
extern void glblInit_cuboidHints__ANONYMOUS_s152(CuboidHint** cuboidHints__ANONYMOUS_s151/* len = 4 */);
extern void glblInit_cylinderHints__ANONYMOUS_s154(CylinderHint** cylinderHints__ANONYMOUS_s153/* len = 4 */);
extern void glblInit_labels__ANONYMOUS_s156(bool* labels__ANONYMOUS_s155/* len = 515 */);
extern void glblInit_xs__ANONYMOUS_s158(float* xs__ANONYMOUS_s157/* len = 515 */);
extern void glblInit_ys__ANONYMOUS_s160(float* ys__ANONYMOUS_s159/* len = 515 */);
extern void glblInit_zs__ANONYMOUS_s162(float* zs__ANONYMOUS_s161/* len = 515 */);
extern void _main(int id, CuboidHint** cuboidHints__ANONYMOUS_s133/* len = 4 */, CylinderHint** cylinderHints__ANONYMOUS_s145/* len = 4 */, bool* labels__ANONYMOUS_s146/* len = 515 */, float* xs__ANONYMOUS_s147/* len = 515 */, float* ys__ANONYMOUS_s148/* len = 515 */, float* zs__ANONYMOUS_s149/* len = 515 */);
extern void check(int i, CuboidHint** cuboidHints__ANONYMOUS_s142/* len = 4 */, CylinderHint** cylinderHints__ANONYMOUS_s140/* len = 4 */, bool* labels__ANONYMOUS_s128/* len = 515 */, float* xs__ANONYMOUS_s129/* len = 515 */, float* ys__ANONYMOUS_s130/* len = 515 */, float* zs__ANONYMOUS_s131/* len = 515 */);
extern void contains(Vector* p, int num_primitives_0, bool& _out, CuboidHint** cuboidHints__ANONYMOUS_s141/* len = 4 */, CylinderHint** cylinderHints__ANONYMOUS_s135/* len = 4 */);
extern void print(int n, char* message/* len = n */);
extern void inverse_rotate(Vector* p, float theta_x, float theta_y, float theta_z, Vector*& _out);
extern void radian_to_degree(float radian, float& _out);
extern void printfloat(float n);
extern void sphere1(Vector* p, bool& _out);
extern void sphere3(Vector* p, bool& _out);
extern void sphere0(Vector* p, bool& _out);
extern void sphere2(Vector* p, bool& _out);
extern void torus0(Vector* p, bool& _out);
extern void renderSphere(Vector* p, float x, float y, float z, float r, bool& _out);
extern void renderTorus(Vector* p, float cx, float cy, float cz, float nx, float ny, float nz, float roll_0, float pitch_1, float yaw_2, float R, float r, bool& _out);
extern void minus(Vector* a, Vector* b, Vector*& _out);
extern void cross(Vector* a, Vector* b, Vector*& _out);
extern void norm(Vector* a, float& _out);
extern void dot(Vector* a, Vector* b, float& _out);
}
namespace math{
extern void abs(float v, float& _out);
extern void cos(float v, float& _out);
extern void sin(float v, float& _out);
extern void sqrt(float v, float& _out);
extern void tan(float v, float& _out);
extern void log(float v, float& _out);
extern void arctan(float v, float& _out);
extern void _cast_int_float(int v, float& _out);
extern void exp(float v, float& _out);
}

#endif
