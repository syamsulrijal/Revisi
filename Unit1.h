//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TButton *Button3;
	TEdit *np;
	TEdit *umur;
	TEdit *jk;
	TEdit *tp;
	TButton *Button16;
	TImage *Image9;
	TEdit *Edit1;
	TButton *Button2;
	TEdit *Edit2;
	TEdit *Edit3;
	TRadioButton *Bisnis;
	TImage *Image1;
	TRadioButton *RadioButton1;
	TADOConnection *ADOConnection1;
	TADOQuery *ADOQuery1;
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
