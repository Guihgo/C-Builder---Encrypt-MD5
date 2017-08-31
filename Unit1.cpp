//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <IdHashMessageDigest.hpp>
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "IdBaseComponent"
#pragma link "IdComponent"
#pragma link "IdTCPClient"
#pragma link "IdTCPConnection"
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
TIdHashMessageDigest5 *idmd5 = new TIdHashMessageDigest5();

String Str;
String Sai;
String Test;

Str = Edit1->Text;
Sai = idmd5->HashStringAsHex(Str);
Edit2->Text = Sai;



}
//---------------------------------------------------------------------------
