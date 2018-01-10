#include <boost/compute.hpp>
#include <boost/compute/types/struct.hpp>

namespace custom{
  struct CustomStruct{
    int a;
    int b;
    float q;
    float m;
  };
  BOOST_COMPUTE_ADAPT_STRUCT(CustomStruct, CustomStruct, (a, b, q, m))
}
