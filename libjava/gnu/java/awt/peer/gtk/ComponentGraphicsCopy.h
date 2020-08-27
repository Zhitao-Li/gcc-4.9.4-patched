
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_peer_gtk_ComponentGraphicsCopy__
#define __gnu_java_awt_peer_gtk_ComponentGraphicsCopy__

#pragma interface

#include <gnu/java/awt/peer/gtk/CairoSurfaceGraphics.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace peer
        {
          namespace gtk
          {
              class ComponentGraphicsCopy;
              class GtkComponentPeer;
              class GtkImage;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace awt
    {
        class Color;
        class Image;
        class Shape;
      namespace font
      {
          class GlyphVector;
      }
      namespace geom
      {
          class AffineTransform;
      }
      namespace image
      {
          class ImageObserver;
          class RenderedImage;
      }
    }
  }
}

class gnu::java::awt::peer::gtk::ComponentGraphicsCopy : public ::gnu::java::awt::peer::gtk::CairoSurfaceGraphics
{

public: // actually package-private
  virtual void getPixbuf(::gnu::java::awt::peer::gtk::GtkComponentPeer *, ::gnu::java::awt::peer::gtk::GtkImage *);
  virtual void copyPixbuf(::gnu::java::awt::peer::gtk::GtkComponentPeer *, ::gnu::java::awt::peer::gtk::GtkImage *, jint, jint, jint, jint);
public:
  ComponentGraphicsCopy(jint, jint, ::gnu::java::awt::peer::gtk::GtkComponentPeer *);
  virtual void draw(::java::awt::Shape *);
  virtual void fill(::java::awt::Shape *);
  virtual void drawRenderedImage(::java::awt::image::RenderedImage *, ::java::awt::geom::AffineTransform *);
public: // actually protected
  virtual jboolean drawImage(::java::awt::Image *, ::java::awt::geom::AffineTransform *, ::java::awt::Color *, ::java::awt::image::ImageObserver *);
public:
  virtual void drawGlyphVector(::java::awt::font::GlyphVector *, jfloat, jfloat);
private:
  ::gnu::java::awt::peer::gtk::GtkComponentPeer * __attribute__((aligned(__alignof__( ::gnu::java::awt::peer::gtk::CairoSurfaceGraphics)))) component;
  ::gnu::java::awt::peer::gtk::GtkImage * gtkimage;
  jint width;
  jint height;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_peer_gtk_ComponentGraphicsCopy__
