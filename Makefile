CC = g++
GEN_DIR =./gen
OBJ_DIR = ./obj

INCL_RT_DIR = /usr/local/include
LINK_RT_DIR = /usr/local/lib
RT_STATIC = libantlr4-runtime.a
RT_SHARED = libantlr4-runtime.so

I_FLAGS = -c -g -o $(OBJ_DIR)/$@ -I $(INCL_RT_DIR)/antlr4-runtime/ -std=c++17 -I $(GEN_DIR)
L_FLAGS = -g -std=c++17 -Wall

EXEC = main
OBJS = $(EXEC).o 
GEN_OBJS = LiteParser.o LiteLexer.o CustomVisitor.o LiteBaseVisitor.o LiteVisitor.o 
LIBS = $(patsubst %, $(LINK_RT_DIR)/%, $(RT_STATIC) $(RT_SHARED))

all: $(OBJS) $(GEN_OBJS) $(EXEC)
.PHONY: all

$(OBJS): %.o : %.cpp
	$(CC) $(I_FLAGS) $<

$(GEN_OBJS): %.o : $(GEN_DIR)/%.cpp 
	$(CC) $(I_FLAGS) $<

$(EXEC): $(OBJS) $(GEN_OBJS)
	$(CC) $(L_FLAGS) $(patsubst %, $(OBJ_DIR)/%, $^) $(LIBS) -o $@ 
#note: $(LIBS) must come afters OBJS & GEN_OBJS or else fail 

antlr: 
	antlr4 -Dlanguage=Cpp -visitor -o gen Lite.g4