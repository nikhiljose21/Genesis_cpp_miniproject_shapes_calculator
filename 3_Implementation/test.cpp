#include "shape.h"
#include <gtest/gtest.h>
namespace {

TEST(pentagon,Test_Pentagon_Valid_inputs) {
    pentagon p(5.0);
    EXPECT_TRUE(p.valid_input()); 
    pentagon p1(0.0);
    EXPECT_FALSE(p1.valid_input()); 
    pentagon p2(-5.0);
    EXPECT_TRUE(p2.valid_input());
}


TEST(pentagon,Test_pentagon_functions) {
    pentagon p(5.0);
  EXPECT_FLOAT_EQ(25, p.perimeter());
  EXPECT_FLOAT_EQ(43.011925, p.area());
}
TEST(hemisphere,Test_Hemisphere_Valid_inputs) {
    hemisphere h(5.0);
    EXPECT_TRUE(h.valid_input()); 
    hemisphere h1(0.0);
    EXPECT_FALSE(h1.valid_input()); 
    hemisphere h2(-5.0);
    EXPECT_TRUE(h2.valid_input());
}
TEST(hemisphere,Test_pentagon_functions) {
    hemisphere h(6.0);
  EXPECT_FLOAT_EQ(452.11887, h.volume());
  EXPECT_FLOAT_EQ(226.28572, h.LSA());
  EXPECT_FLOAT_EQ(339.42856, h.TSA());
}

  TEST(hexagon,Test_hexagon_Valid_inputs) {
    hexagon h(3.0);
    EXPECT_TRUE(h.valid_input()); 
    hexagon h1(0.0);
    EXPECT_FALSE(h1.valid_input()); 
    hexagon h2(-3.0);
    EXPECT_TRUE(h2.valid_input());
}
    
    
    TEST(hexagon,Testing_functions)
 {
    hexagon h(3.0);
  EXPECT_FLOAT_EQ(18, h.perimeter());
  EXPECT_FLOAT_EQ(23.382, h.area());
}


TEST(octagon,Test_octagon_Valid_inputs) {
    octagon o(3.0);
    EXPECT_TRUE(o.valid_input()); 
    octagon o1(0.0);
    EXPECT_FALSE(o1.valid_input()); 
    octagon o2(-3.0);
    EXPECT_TRUE(o2.valid_input());
}
    
    
TEST(octagon,Testing_functions)
 {
    octagon o(3.0);
  EXPECT_FLOAT_EQ(24, o.perimeter());
  EXPECT_FLOAT_EQ(43.4556, o.area());
}

TEST(square,Testing_functions)
 {
    square h(3.0);
  EXPECT_FLOAT_EQ(12, h.perimeter());
  EXPECT_FLOAT_EQ(9, h.area());
}

TEST(rhombus,Testing_functions)
 {
    rhombus o(3,4);
  EXPECT_FLOAT_EQ(10, o.perimeter());
  EXPECT_FLOAT_EQ(6, o.area());
}


TEST(square,Test_square_Valid_inputs) {
    square h(3.0);
    EXPECT_TRUE(h.valid_input()); 
    square h1(0.0);
    EXPECT_FALSE(h1.valid_input()); 
    square h2(-5.0);
    EXPECT_TRUE(h2.valid_input());
}

TEST(rhombus,Test_rhombus_Valid_inputs) {
    rhombus o(3,4);
    EXPECT_TRUE(o.valid_input()); 
    rhombus o1(0,0);
    EXPECT_FALSE(o1.valid_input()); 
    rhombus o2(-3,-4);
    EXPECT_TRUE(o2.valid_input());
}


}




