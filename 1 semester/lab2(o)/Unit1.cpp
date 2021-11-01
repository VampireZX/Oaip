//---------------------------------------------------------------------------

#include <vcl.h>
#include <math.h>
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
double x,y,z,a,b,f;
z=StrToFloat(Edit3->Text);
a=StrToFloat(Edit4->Text);
b=StrToFloat(Edit5->Text);
if(z<1)
x=pow(z,3)+0.2;
else x=z+log(z);
switch(RadioGroup1->ItemIndex)
{
	case 0: f=2*x; break;
	case 1: f=pow(x,2); break;
	case 2: f=x/3; break;
	}
y = 2*a*pow(cos(pow((x),2)),3)+pow(sin(pow((x),3)),2)-(b*f);
	Memo1->Lines->Add
	(
	"��� x= "+ FloatToStr(x)+
 ", z= " + FloatToStr(z) +
 ", a= " + FloatToStr(a) +
 ", b= " + FloatToStr(b) +
 ", f= " + FloatToStr(f) +
 "   Result: " + FloatToStrF(y,ffFixed,8,6));



}
//---------------------------------------------------------------------------



