//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <ComCtrls.hpp>
#include <Menus.hpp>
#include <Dialogs.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TButton *Button1;
        TTimer *Timer1;
        TTimer *Timer2;
        TButton *Button2;
        TButton *Button3;
        TButton *Button4;
        TEdit *Edit1;
        TLabel *Label3;
        THotKey *HotKey1;
        THotKey *HotKey2;
        TLabel *Label4;
        TLabel *Label6;
        TLabel *Label7;
        THotKey *HotKey3;
        TButton *Button5;
        TMainMenu *MainMenu1;
        TMenuItem *Plik1;
        TMenuItem *Saveas1;
        TMenuItem *Load1;
        TListBox *ListBox3;
        TStatusBar *StatusBar1;
        TComboBox *ComboBox1;
        TButton *Button6;
        TLabel *Label1;
        TLabel *Label5;
        TEdit *Edit2;
        TSaveDialog *SaveDialog1;
        TOpenDialog *OpenDialog1;
        TButton *Start;
        TButton *Button7;
        TButton *Button8;
        TButton *Button9;
        TEdit *Edit3;
        TButton *Button10;
        TMenuItem *Info1;
        TMenuItem *Website1;
        TMenuItem *Author1;
        TMenuItem *N101;
        THotKey *HotKey4;
        THotKey *HotKey5;
        THotKey *HotKey6;
        TLabel *Label2;
        TLabel *Label8;
        TLabel *Label9;
        TComboBox *ComboBox2;
        TButton *Button12;
        TButton *Button13;
        TComboBox *ComboBox3;
        TEdit *Edit4;
        TLabel *Label10;
        TButton *Reset;
        TButton *Button14;
        TEdit *Edit5;
        TButton *Button11;
        TCheckBox *CheckBox1;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall Timer2Timer(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Edit1KeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall Edit1KeyPress(TObject *Sender, char &Key);
        void __fastcall HotKey1Exit(TObject *Sender);
        void __fastcall HotKey1Enter(TObject *Sender);
        void __fastcall HotKey1Change(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Button6Click(TObject *Sender);
        void __fastcall Saveas1Click(TObject *Sender);
        void __fastcall Load1Click(TObject *Sender);
        void __fastcall StartClick(TObject *Sender);
        void __fastcall Button8Click(TObject *Sender);
        void __fastcall Button7Click(TObject *Sender);
        void __fastcall Button9Click(TObject *Sender);
        void __fastcall Button10Click(TObject *Sender);
        void __fastcall Edit3KeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall Edit3KeyPress(TObject *Sender, char &Key);
        void __fastcall Author1Click(TObject *Sender);
        void __fastcall Website1Click(TObject *Sender);
        void __fastcall Button11Click(TObject *Sender);
        void __fastcall Button12Click(TObject *Sender);
        void __fastcall Button13Click(TObject *Sender);
        void __fastcall ResetClick(TObject *Sender);
        void __fastcall Edit5KeyPress(TObject *Sender, char &Key);
        void __fastcall Edit5KeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall Button14Click(TObject *Sender);
private:	// User declarations
        void __fastcall HotKey(TMessage &Msg);
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
        BEGIN_MESSAGE_MAP
        MESSAGE_HANDLER(WM_HOTKEY,TMessage,HotKey)
        END_MESSAGE_MAP(TForm)

};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
