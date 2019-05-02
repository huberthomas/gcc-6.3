
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_dom_DTDElementTypeInfo__
#define __gnu_xml_dom_DTDElementTypeInfo__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace dom
      {
          class DTDAttributeTypeInfo;
          class DTDElementTypeInfo;
      }
    }
  }
}

class gnu::xml::dom::DTDElementTypeInfo : public ::java::lang::Object
{

public: // actually package-private
  DTDElementTypeInfo(::java::lang::String *, ::java::lang::String *);
public:
  virtual ::java::lang::String * getTypeName();
  virtual ::java::lang::String * getTypeNamespace();
  virtual jboolean isDerivedFrom(::java::lang::String *, ::java::lang::String *, jint);
public: // actually package-private
  virtual ::gnu::xml::dom::DTDAttributeTypeInfo * getAttributeTypeInfo(::java::lang::String *);
  virtual void setAttributeTypeInfo(::java::lang::String *, ::gnu::xml::dom::DTDAttributeTypeInfo *);
  virtual ::java::util::Iterator * attributes();
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object)))) name;
  ::java::lang::String * model;
  ::java::util::HashMap * attributes__;
  ::java::lang::String * idAttrName;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_dom_DTDElementTypeInfo__
