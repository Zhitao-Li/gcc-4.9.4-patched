
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_RepaintManager__
#define __javax_swing_RepaintManager__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Component;
        class Dimension;
        class Image;
        class Rectangle;
    }
  }
  namespace javax
  {
    namespace swing
    {
        class JComponent;
        class RepaintManager;
        class RepaintManager$RepaintWorker;
    }
  }
}

class javax::swing::RepaintManager : public ::java::lang::Object
{

public:
  RepaintManager();
  static ::javax::swing::RepaintManager * currentManager(::java::awt::Component *);
  static ::javax::swing::RepaintManager * currentManager(::javax::swing::JComponent *);
  static void setCurrentManager(::javax::swing::RepaintManager *);
  virtual void addInvalidComponent(::javax::swing::JComponent *);
  virtual void removeInvalidComponent(::javax::swing::JComponent *);
  virtual void addDirtyRegion(::javax::swing::JComponent *, jint, jint, jint, jint);
  virtual ::java::awt::Rectangle * getDirtyRegion(::javax::swing::JComponent *);
  virtual void markCompletelyDirty(::javax::swing::JComponent *);
  virtual void markCompletelyClean(::javax::swing::JComponent *);
  virtual jboolean isCompletelyDirty(::javax::swing::JComponent *);
  virtual void validateInvalidComponents();
  virtual void paintDirtyRegions();
private:
  void compileRepaintRoots(::java::util::HashMap *, ::javax::swing::JComponent *, ::java::util::HashSet *);
public:
  virtual ::java::awt::Image * getOffscreenBuffer(::java::awt::Component *, jint, jint);
public: // actually package-private
  virtual void commitBuffer(::java::awt::Component *, jint, jint, jint, jint);
public:
  virtual ::java::awt::Image * getVolatileOffscreenBuffer(::java::awt::Component *, jint, jint);
  virtual ::java::awt::Dimension * getDoubleBufferMaximumSize();
  virtual void setDoubleBufferMaximumSize(::java::awt::Dimension *);
  virtual void setDoubleBufferingEnabled(jboolean);
  virtual jboolean isDoubleBufferingEnabled();
  virtual ::java::lang::String * toString();
private:
  void invokeLater(::java::lang::Runnable *);
public: // actually package-private
  static ::java::util::WeakHashMap * currentRepaintManagers;
private:
  static ::java::awt::Rectangle * rectCache;
  ::java::util::HashMap * __attribute__((aligned(__alignof__( ::java::lang::Object)))) dirtyComponents;
  ::java::util::HashMap * dirtyComponentsWork;
  ::javax::swing::RepaintManager$RepaintWorker * repaintWorker;
  ::java::util::ArrayList * invalidComponents;
  jboolean doubleBufferingEnabled;
  ::java::util::WeakHashMap * offscreenBuffers;
  ::java::awt::Dimension * doubleBufferMaximumSize;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_RepaintManager__
