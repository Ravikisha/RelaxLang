#ifndef clox_chunk_h
#define clox_chunk_h

#include "common.h"
#include "value.h"

typedef enum {
  OP_CONSTANT,
  OP_NIL,
  OP_TRUE,
  OP_FALSE,
  OP_POP,
  OP_GET_LOCAL,
  OP_SET_LOCAL,
  OP_GET_GLOBAL,
  OP_DEFINE_GLOBAL,
  OP_SET_GLOBAL,
  OP_GET_UPVALUE,
  OP_SET_UPVALUE,
  OP_GET_PROPERTY,
  OP_SET_PROPERTY,
  OP_GET_SUPER,
  OP_EQUAL,
  OP_GREATER,
  OP_LESS,
  OP_ADD,
  OP_SUBTRACT,
  OP_MULTIPLY,
  OP_DIVIDE,
  OP_NOT,
  OP_NEGATE,
  OP_PRINT,
  OP_JUMP,
  OP_JUMP_IF_FALSE,
  OP_LOOP,
  OP_CALL,
  OP_INVOKE,
  OP_SUPER_INVOKE,
  OP_CLOSURE,
  OP_CLOSE_UPVALUE,
  OP_RETURN,
  OP_CLASS,
  OP_INHERIT,
  OP_METHOD
} OpCode;

typedef struct {
//> count-and-capacity
  int count;
  int capacity;
//< count-and-capacity
  uint8_t* code;
//> chunk-lines
  int* lines;
//< chunk-lines
//> chunk-constants
  ValueArray constants;
//< chunk-constants
} Chunk;
//< chunk-struct
//> init-chunk-h

void initChunk(Chunk* chunk);
//< init-chunk-h
//> free-chunk-h
void freeChunk(Chunk* chunk);
//< free-chunk-h
/* Chunks of Bytecode write-chunk-h < Chunks of Bytecode write-chunk-with-line-h
void writeChunk(Chunk* chunk, uint8_t byte);
*/
//> write-chunk-with-line-h
void writeChunk(Chunk* chunk, uint8_t byte, int line);
//< write-chunk-with-line-h
//> add-constant-h
int addConstant(Chunk* chunk, Value value);
//< add-constant-h

#endif
