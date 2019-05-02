
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_xml_xpath_XPath__
#define __javax_xml_xpath_XPath__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace xml
    {
      namespace namespace$
      {
          class NamespaceContext;
          class QName;
      }
      namespace xpath
      {
          class XPath;
          class XPathExpression;
          class XPathFunctionResolver;
          class XPathVariableResolver;
      }
    }
  }
  namespace org
  {
    namespace xml
    {
      namespace sax
      {
          class InputSource;
      }
    }
  }
}

class javax::xml::xpath::XPath : public ::java::lang::Object
{

public:
  virtual void reset() = 0;
  virtual void setXPathVariableResolver(::javax::xml::xpath::XPathVariableResolver *) = 0;
  virtual ::javax::xml::xpath::XPathVariableResolver * getXPathVariableResolver() = 0;
  virtual void setXPathFunctionResolver(::javax::xml::xpath::XPathFunctionResolver *) = 0;
  virtual ::javax::xml::xpath::XPathFunctionResolver * getXPathFunctionResolver() = 0;
  virtual void setNamespaceContext(::javax::xml::namespace$::NamespaceContext *) = 0;
  virtual ::javax::xml::namespace$::NamespaceContext * getNamespaceContext() = 0;
  virtual ::javax::xml::xpath::XPathExpression * compile(::java::lang::String *) = 0;
  virtual ::java::lang::Object * evaluate(::java::lang::String *, ::java::lang::Object *, ::javax::xml::namespace$::QName *) = 0;
  virtual ::java::lang::String * evaluate(::java::lang::String *, ::java::lang::Object *) = 0;
  virtual ::java::lang::Object * evaluate(::java::lang::String *, ::org::xml::sax::InputSource *, ::javax::xml::namespace$::QName *) = 0;
  virtual ::java::lang::String * evaluate(::java::lang::String *, ::org::xml::sax::InputSource *) = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __javax_xml_xpath_XPath__
