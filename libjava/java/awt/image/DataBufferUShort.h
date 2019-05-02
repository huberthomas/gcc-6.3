
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_image_DataBufferUShort__
#define __java_awt_image_DataBufferUShort__

#pragma interface

#include <java/awt/image/DataBuffer.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace image
      {
          class DataBufferUShort;
      }
    }
  }
}

class java::awt::image::DataBufferUShort : public ::java::awt::image::DataBuffer
{

public:
  DataBufferUShort(jint);
  DataBufferUShort(jint, jint);
  DataBufferUShort(JArray< jshort > *, jint);
  DataBufferUShort(JArray< jshort > *, jint, jint);
  DataBufferUShort(JArray< JArray< jshort > * > *, jint);
  DataBufferUShort(JArray< JArray< jshort > * > *, jint, JArray< jint > *);
  JArray< jshort > * getData();
  JArray< jshort > * getData(jint);
  JArray< JArray< jshort > * > * getBankData();
  jint getElem(jint);
  jint getElem(jint, jint);
  void setElem(jint, jint);
  void setElem(jint, jint, jint);
private:
  JArray< jshort > * __attribute__((aligned(__alignof__( ::java::awt::image::DataBuffer)))) data;
  JArray< JArray< jshort > * > * bankData;
public:
  static ::java::lang::Class class$;
};

#endif // __java_awt_image_DataBufferUShort__