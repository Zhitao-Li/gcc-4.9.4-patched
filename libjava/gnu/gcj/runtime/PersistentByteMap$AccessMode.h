
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_gcj_runtime_PersistentByteMap$AccessMode__
#define __gnu_gcj_runtime_PersistentByteMap$AccessMode__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace gcj
    {
      namespace runtime
      {
          class PersistentByteMap$AccessMode;
      }
    }
  }
  namespace java
  {
    namespace nio
    {
      namespace channels
      {
          class FileChannel$MapMode;
      }
    }
  }
}

class gnu::gcj::runtime::PersistentByteMap$AccessMode : public ::java::lang::Object
{

  PersistentByteMap$AccessMode(::java::nio::channels::FileChannel$MapMode *);
public: // actually package-private
  static ::java::nio::channels::FileChannel$MapMode * access$0(::gnu::gcj::runtime::PersistentByteMap$AccessMode *);
private:
  ::java::nio::channels::FileChannel$MapMode * __attribute__((aligned(__alignof__( ::java::lang::Object)))) mapMode;
public:
  static ::gnu::gcj::runtime::PersistentByteMap$AccessMode * READ_ONLY;
  static ::gnu::gcj::runtime::PersistentByteMap$AccessMode * READ_WRITE;
  static ::gnu::gcj::runtime::PersistentByteMap$AccessMode * PRIVATE;
  static ::java::lang::Class class$;
};

#endif // __gnu_gcj_runtime_PersistentByteMap$AccessMode__