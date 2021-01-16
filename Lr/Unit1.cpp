//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
   Form1->Canvas->Brush->Color = clPurple;
   Form1->Canvas->Pie(0,0, 200,200, 200, 0, 0,0);
   Form1->Canvas->Brush->Color = clOlive;
   Form1->Canvas->Ellipse(230, 230, 130, 130);

}
//---------------------------------------------------------------------------

