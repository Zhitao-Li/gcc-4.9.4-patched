
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_print_PrinterDialog$PageSetupPanel__
#define __gnu_javax_print_PrinterDialog$PageSetupPanel__

#pragma interface

#include <javax/swing/JPanel.h>
extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace print
      {
          class PrinterDialog;
          class PrinterDialog$PageSetupPanel;
          class PrinterDialog$PageSetupPanel$Margins;
          class PrinterDialog$PageSetupPanel$MediaTypes;
          class PrinterDialog$PageSetupPanel$Orientation;
      }
    }
  }
}

class gnu::javax::print::PrinterDialog$PageSetupPanel : public ::javax::swing::JPanel
{

public:
  PrinterDialog$PageSetupPanel(::gnu::javax::print::PrinterDialog *);
public: // actually package-private
  void update();
  static ::gnu::javax::print::PrinterDialog * access$0(::gnu::javax::print::PrinterDialog$PageSetupPanel *);
private:
  ::gnu::javax::print::PrinterDialog$PageSetupPanel$MediaTypes * __attribute__((aligned(__alignof__( ::javax::swing::JPanel)))) media_panel;
  ::gnu::javax::print::PrinterDialog$PageSetupPanel$Orientation * orientation_panel;
  ::gnu::javax::print::PrinterDialog$PageSetupPanel$Margins * margins_panel;
public: // actually package-private
  ::gnu::javax::print::PrinterDialog * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_print_PrinterDialog$PageSetupPanel__
