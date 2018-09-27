# Makefile template for shared library

CC = g++ # C compiler
CFLAGS = -fPIC -Wall -Wextra -O2 -g # C flags
LDFLAGS = -shared  # linking flags
RM = rm -f  # rm command
TARGET_LIB = libTill.so # target lib
# source files
SRCS = \
	shared.cpp \
	eth_com.cpp \
	serial_com.cpp \
	tinystr.cpp \
	tinyxml.cpp \
	tinyxmlparser.cpp \
	tinyxmlerror.cpp \
	sale_xml_request.cpp
 
OBJS = $(SRCS:.cpp=.o)

.PHONY: all
all: ${TARGET_LIB}

$(TARGET_LIB): $(OBJS)
	$(CC) ${LDFLAGS} -o $@ $^

$(SRCS:.cpp=.d):%.d:%.cpp
	$(CC) $(CFLAGS) -MM $< >$@

include $(SRCS:.cpp=.d)

.PHONY: clean
clean:
	-${RM} ${TARGET_LIB} ${OBJS} $(SRCS:.cpp=.d)
