#ifndef LAMAAPP_H
#define LAMAAPP_H

#include "MooseApp.h"

class LamaApp;

template<>
InputParameters validParams<LamaApp>();

class LamaApp : public MooseApp
{
public:
  LamaApp(InputParameters parameters);
  virtual ~LamaApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* LAMAAPP_H */
