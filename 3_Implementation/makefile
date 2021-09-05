PROJ_NAME = shape_calculator
TEST_PROJ_NAME = Test_$(PROJ_NAME)

SRC =src/circle.cpp \
src/cone.cpp \
src/ellipse.cpp \
src/enneagon.cpp \
src/hemisphere.cpp \
src/hexagon.cpp \
src/octagon.cpp \
src/pentagon.cpp \
src/rhombus.cpp \
src/square.cpp 


COV_SRC = test.cpp

INC_H = inc
#INC_T = unity

ifdef OS
   RM = del 
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif
.PHONY: run clean test doc all

all:
	g++ $(SRC) main.cpp -I $(INC_H) -o $(call FixPath,$(PROJ_NAME).$(EXEC))
	
run:
	./$(call FixPath,$(PROJ_NAME).$(EXEC))
test:
	g++ -I $(INC_H) $(SRC) $(COV_SRC) -o $(call FixPath,$(TEST_PROJ_NAME).$(EXEC)) -lgtest -lgtest_main -lpthread
	./$(call FixPath,$(TEST_PROJ_NAME).$(EXEC))

coverage:$(BUILD)
	g++ -fprofile-arcs -ftest-coverage -fPIC -O0 $(COV_SRC) $(SRC) $(INC) $(INC_U) $(INC_TE) -o $(TEST_PROJ_NAME).$(EXEC))
	./$(TEST_PROJ_NAME).$(EXEC))


cppcheck:
	cppcheck --enable=all $(SRC) main.c
debug:
	g++ -I $(INC_H) $(SRC) main.c -g -o $(PROJ_NAME).$(EXEC)
	gdb $(PROJ_NAME).$(EXEC)

valgrind:
	valgrind ./$(TEST_PROJ_NAME).$(EXEC)


clean:
	$(RM) *.DAT
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov
