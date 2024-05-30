
//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <vector>
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

std::vector<POINT> t_cur;
String s;
POINT cur;
String adoz = "abcdefghijklmnopqrstuvwxyz";
int randaz = 0;
char randletter = 'a';
char zerododziewiec = '0';
int p=0001;
int l=1;
int lp=0;
int c=0;
int w=0;
int u=0;
int dodel=0;
int wa=0;
int sp=0;
int waiter=0;
int xxx=0, yyy=0;
int dloops=0;
void __fastcall TForm1::Button1Click(TObject *Sender)
{
        if(Form1->Caption=="AutoClick - ON"){
        Timer1->Enabled=false;
Start->Enabled=true;
Button3->Enabled=true;
Button1->Enabled=false;
HotKey1->Enabled=true;
Edit1->Enabled=true;
       Form1->Caption="AutoClick - OFF";
StatusBar1->Panels->Items[1]->Text = "Turned OFF";
       }
}
//--------------------------------------------------------------------------                                           
void __fastcall TForm1::Timer1Timer(TObject *Sender)                                               
{
String br=ListBox3->Items->Strings[ListBox3->ItemIndex];
int bt=StrToInt(br.SubString(0, 4));
int currentposx = Mouse->CursorPos.x;
int currentposy = Mouse->CursorPos.y;
if(bt<9000){
                        switch(bt){

                                 case 1:
                                xxx=StrToInt(br.SubString(6, 4));
                                yyy=StrToInt(br.SubString(11, 4));
                                SetCursorPos(xxx, yyy);
                                mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
                                mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
                                if(CheckBox1->Checked ==1){
                                	SetCursorPos(currentposx, currentposy);
                            	}
                                break;
                                 case 2:
                                xxx=StrToInt(br.SubString(6, 4));
                                yyy=StrToInt(br.SubString(11, 4));
                                SetCursorPos(xxx, yyy);
                                mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
                                mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                                break;
                                 case 3:
                                xxx=StrToInt(br.SubString(6, 4));
                                yyy=StrToInt(br.SubString(11, 4));
                                SetCursorPos(xxx, yyy);
                                mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
                                break;
                                 case 4:
                                xxx=StrToInt(br.SubString(6, 4));
                                yyy=StrToInt(br.SubString(11, 4));
                                SetCursorPos(xxx, yyy);
                                break;
                                 case 5:
                                xxx=StrToInt(br.SubString(6, 4));
                                yyy=StrToInt(br.SubString(11, 4));
                                SetCursorPos(xxx, yyy);
                                mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
                                break;
                                 case 8000:
                                wa=StrToInt(br.SubString(11, 9));
                                Sleep(wa);
                                break;
                                 case 8001:
                                sp=StrToInt(br.SubString(12, 9));
                                Timer1->Interval=sp;
                                Edit1->Text=sp;
                                break;
                                 case 100:
                                keybd_event(VkKeyScan('0'), 0, 0, 0);
                                keybd_event(VkKeyScan('0'), 0, KEYEVENTF_KEYUP, 0);
                                break;
                                 case 101:
                                keybd_event(VkKeyScan('1'), 0, 0, 0);
                                keybd_event(VkKeyScan('1'), 0, KEYEVENTF_KEYUP, 0);
                                break;
								case 102:
								keybd_event(VkKeyScan('2'), 0, 0, 0);
								keybd_event(VkKeyScan('2'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 103:
								keybd_event(VkKeyScan('3'), 0, 0, 0);
								keybd_event(VkKeyScan('3'), 0, KEYEVENTF_KEYUP, 0);
								break; 
								case 104:
								keybd_event(VkKeyScan('4'), 0, 0, 0);
								keybd_event(VkKeyScan('4'), 0, KEYEVENTF_KEYUP, 0);
								break;       
								case 105:
								keybd_event(VkKeyScan('5'), 0, 0, 0);
								keybd_event(VkKeyScan('5'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 106:
								keybd_event(VkKeyScan('6'), 0, 0, 0);
								keybd_event(VkKeyScan('6'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 107:
								keybd_event(VkKeyScan('7'), 0, 0, 0);
								keybd_event(VkKeyScan('7'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 108:
								keybd_event(VkKeyScan('8'), 0, 0, 0);
								keybd_event(VkKeyScan('8'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 109:
								keybd_event(VkKeyScan('9'), 0, 0, 0);
								keybd_event(VkKeyScan('9'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 110:
								keybd_event(VkKeyScan('A'), 0, 0, 0);
								keybd_event(VkKeyScan('A'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 111:
								keybd_event(VkKeyScan('B'), 0, 0, 0);
								keybd_event(VkKeyScan('B'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 112:
								keybd_event(VkKeyScan('C'), 0, 0, 0);
								keybd_event(VkKeyScan('C'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 113:
								keybd_event(VkKeyScan('D'), 0, 0, 0);
								keybd_event(VkKeyScan('D'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 114:
								keybd_event(VkKeyScan('E'), 0, 0, 0);
								keybd_event(VkKeyScan('E'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 115:
								keybd_event(VkKeyScan('F'), 0, 0, 0);
								keybd_event(VkKeyScan('F'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 116:
								keybd_event(VkKeyScan('G'), 0, 0, 0);
								keybd_event(VkKeyScan('G'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 117:
								keybd_event(VkKeyScan('H'), 0, 0, 0);
								keybd_event(VkKeyScan('H'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 118:
								keybd_event(VkKeyScan('I'), 0, 0, 0);
								keybd_event(VkKeyScan('I'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 119:
								keybd_event(VkKeyScan('J'), 0, 0, 0);
								keybd_event(VkKeyScan('J'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 120:
								keybd_event(VkKeyScan('K'), 0, 0, 0);
								keybd_event(VkKeyScan('K'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 121:
								keybd_event(VkKeyScan('L'), 0, 0, 0);
								keybd_event(VkKeyScan('L'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 122:
								keybd_event(VkKeyScan('M'), 0, 0, 0);
								keybd_event(VkKeyScan('M'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 123:
								keybd_event(VkKeyScan('N'), 0, 0, 0);
								keybd_event(VkKeyScan('N'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 124:
								keybd_event(VkKeyScan('O'), 0, 0, 0);
								keybd_event(VkKeyScan('O'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 125:
								keybd_event(VkKeyScan('P'), 0, 0, 0);
								keybd_event(VkKeyScan('P'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 126:
								keybd_event(VkKeyScan('Q'), 0, 0, 0);
								keybd_event(VkKeyScan('Q'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 127:
								keybd_event(VkKeyScan('R'), 0, 0, 0);
								keybd_event(VkKeyScan('R'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 128:
								keybd_event(VkKeyScan('S'), 0, 0, 0);
								keybd_event(VkKeyScan('S'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 129:
								keybd_event(VkKeyScan('T'), 0, 0, 0);
								keybd_event(VkKeyScan('T'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 130:
								keybd_event(VkKeyScan('U'), 0, 0, 0);
								keybd_event(VkKeyScan('U'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 131:
								keybd_event(VkKeyScan('V'), 0, 0, 0);
								keybd_event(VkKeyScan('V'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 132:
								keybd_event(VkKeyScan('W'), 0, 0, 0);
								keybd_event(VkKeyScan('W'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 133:
								keybd_event(VkKeyScan('X'), 0, 0, 0);
								keybd_event(VkKeyScan('X'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 134:
								keybd_event(VkKeyScan('Y'), 0, 0, 0);
								keybd_event(VkKeyScan('Y'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 135:
								keybd_event(VkKeyScan('Z'), 0, 0, 0);
								keybd_event(VkKeyScan('Z'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 136:
								keybd_event(VK_F1, 0, 0, 0);
								keybd_event(VK_F1, 0, KEYEVENTF_KEYUP, 0);
								break;
				                                				case 137:
								keybd_event(VK_F2, 0, 0, 0);
								keybd_event(VK_F2, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 138:
								keybd_event(VK_F3, 0, 0, 0);
								keybd_event(VK_F3, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 139:
								keybd_event(VK_F4, 0, 0, 0);
								keybd_event(VK_F4, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 140:
								keybd_event(VK_F5, 0, 0, 0);
								keybd_event(VK_F5, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 141:
								keybd_event(VK_F6, 0, 0, 0);
								keybd_event(VK_F6, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 142:
								keybd_event(VK_F7, 0, 0, 0);
								keybd_event(VK_F7, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 143:
								keybd_event(VK_F8, 0, 0, 0);
								keybd_event(VK_F8, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 144:
								keybd_event(VK_F9, 0, 0, 0);
								keybd_event(VK_F9, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 145:
								keybd_event(VK_F10, 0, 0, 0);
								keybd_event(VK_F10, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 146:
								keybd_event(VK_F11, 0, 0, 0);
								keybd_event(VK_F11, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 147:
								keybd_event(VK_F12, 0, 0, 0);
								keybd_event(VK_F12, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 148:
								keybd_event(VK_UP, 0, 0, 0);
								keybd_event(VK_UP, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 149:
								keybd_event(VK_DOWN, 0, 0, 0);
								keybd_event(VK_DOWN, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 150:
								keybd_event(VK_LEFT, 0, 0, 0);
								keybd_event(VK_LEFT, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 151:
								keybd_event(VK_RIGHT, 0, 0, 0);
								keybd_event(VK_RIGHT, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 152:
								keybd_event(VK_RETURN, 0, 0, 0);
								keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 153:
								keybd_event(VK_SPACE, 0, 0, 0);
								keybd_event(VK_SPACE, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 154:
								keybd_event(VK_LSHIFT, 0, 0, 0);
								keybd_event(VK_LSHIFT, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 155:
								keybd_event(VK_RSHIFT, 0, 0, 0);
								keybd_event(VK_RSHIFT, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 156:
								keybd_event(VK_CAPITAL, 0, 0, 0);
								keybd_event(VK_CAPITAL, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 157:
								keybd_event(VK_CONTROL, 0, 0, 0);
								keybd_event(VK_CONTROL, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 158:
								keybd_event(VK_RCONTROL, 0, 0, 0);
								keybd_event(VK_RCONTROL, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 159:
								keybd_event(VK_LMENU, 0, 0, 0);
								keybd_event(VK_LMENU, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 160:
								keybd_event(VK_RMENU, 0, 0, 0);
								keybd_event(VK_RMENU, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 161: 
				                randaz = random(adoz.Length())+1;
				                randletter = adoz[randaz];
								keybd_event(VkKeyScan(randletter), 0, 0, 0);
								keybd_event(VkKeyScan(randletter), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 162:
				                zerododziewiec = random(10)+48;
								keybd_event(VkKeyScan(zerododziewiec), 0, 0, 0);
								keybd_event(VkKeyScan(zerododziewiec), 0, KEYEVENTF_KEYUP, 0);
								break;
                                 case 200:
                                keybd_event(VkKeyScan('0'), 0, 0, 0);
                                break;
                                 case 201:
                                keybd_event(VkKeyScan('1'), 0, 0, 0);
                                break;
								case 202:
								keybd_event(VkKeyScan('2'), 0, 0, 0);
								break;
								case 203:
								keybd_event(VkKeyScan('3'), 0, 0, 0);
								break; 
								case 204:
								keybd_event(VkKeyScan('4'), 0, 0, 0);
								break;       
								case 205:
								keybd_event(VkKeyScan('5'), 0, 0, 0);
								break;
								case 206:
								keybd_event(VkKeyScan('6'), 0, 0, 0);
								break;
								case 207:
								keybd_event(VkKeyScan('7'), 0, 0, 0);
								break;
								case 208:
								keybd_event(VkKeyScan('8'), 0, 0, 0);
								break;
								case 209:
								keybd_event(VkKeyScan('9'), 0, 0, 0);
								break;
								case 210:
								keybd_event(VkKeyScan('A'), 0, 0, 0);
								break;
								case 211:
								keybd_event(VkKeyScan('B'), 0, 0, 0);
								break;
								case 212:
								keybd_event(VkKeyScan('C'), 0, 0, 0);
								break;
								case 213:
								keybd_event(VkKeyScan('D'), 0, 0, 0);
								break;
								case 214:
								keybd_event(VkKeyScan('E'), 0, 0, 0);
								break;
								case 215:
								keybd_event(VkKeyScan('F'), 0, 0, 0);
								break;
								case 216:
								keybd_event(VkKeyScan('G'), 0, 0, 0);
								break;
								case 217:
								keybd_event(VkKeyScan('H'), 0, 0, 0);
								break;
								case 218:
								keybd_event(VkKeyScan('I'), 0, 0, 0);
								break;
								case 219:
								keybd_event(VkKeyScan('J'), 0, 0, 0);
								break;
								case 220:
								keybd_event(VkKeyScan('K'), 0, 0, 0);
								break;
								case 221:
								keybd_event(VkKeyScan('L'), 0, 0, 0);
								break;
								case 222:
								keybd_event(VkKeyScan('M'), 0, 0, 0);
								break;
								case 223:
								keybd_event(VkKeyScan('N'), 0, 0, 0);
								break;
								case 224:
								keybd_event(VkKeyScan('O'), 0, 0, 0);
								break;
								case 225:
								keybd_event(VkKeyScan('P'), 0, 0, 0);
								break;
								case 226:
								keybd_event(VkKeyScan('Q'), 0, 0, 0);
								break;
								case 227:
								keybd_event(VkKeyScan('R'), 0, 0, 0);
								break;
								case 228:
								keybd_event(VkKeyScan('S'), 0, 0, 0);
								break;
								case 229:
								keybd_event(VkKeyScan('T'), 0, 0, 0);
								break;
								case 230:
								keybd_event(VkKeyScan('U'), 0, 0, 0);
								break;
								case 231:
								keybd_event(VkKeyScan('V'), 0, 0, 0);
								break;
								case 232:
								keybd_event(VkKeyScan('W'), 0, 0, 0);
								break;
								case 233:
								keybd_event(VkKeyScan('X'), 0, 0, 0);
								break;
								case 234:
								keybd_event(VkKeyScan('Y'), 0, 0, 0);
								break;
								case 235:
								keybd_event(VkKeyScan('Z'), 0, 0, 0);
								break;
								case 236:
								keybd_event(VK_F1, 0, 0, 0);
								break;
				                case 237:
								keybd_event(VK_F2, 0, 0, 0);
								break;
								case 238:
								keybd_event(VK_F3, 0, 0, 0);
								break;
								case 239:
								keybd_event(VK_F4, 0, 0, 0);
								break;
								case 240:
								keybd_event(VK_F5, 0, 0, 0);
								break;
								case 241:
								keybd_event(VK_F6, 0, 0, 0);
								break;
								case 242:
								keybd_event(VK_F7, 0, 0, 0);
								break;
								case 243:
								keybd_event(VK_F8, 0, 0, 0);
								break;
								case 244:
								keybd_event(VK_F9, 0, 0, 0);
								break;
								case 245:
								keybd_event(VK_F10, 0, 0, 0);
								break;
								case 246:
								keybd_event(VK_F11, 0, 0, 0);
								break;
								case 247:
								keybd_event(VK_F12, 0, 0, 0);
								break;
								case 248:
								keybd_event(VK_UP, 0, 0, 0);
								break;
								case 249:
								keybd_event(VK_DOWN, 0, 0, 0);
								break;
								case 250:
								keybd_event(VK_LEFT, 0, 0, 0);
								break;
								case 251:
								keybd_event(VK_RIGHT, 0, 0, 0);
								break;
								case 252:
								keybd_event(VK_RETURN, 0, 0, 0);
								break;
								case 253:
								keybd_event(VK_SPACE, 0, 0, 0);
								break;
								case 254:
								keybd_event(VK_LSHIFT, 0, 0, 0);
								break;
								case 255:
								keybd_event(VK_RSHIFT, 0, 0, 0);
								break;
								case 256:
								keybd_event(VK_CAPITAL, 0, 0, 0);
								break;
								case 257:
								keybd_event(VK_CONTROL, 0, 0, 0);
								break;
								case 258:
								keybd_event(VK_RCONTROL, 0, 0, 0);
								break;
								case 259:
								keybd_event(VK_LMENU, 0, 0, 0);
								break;
								case 260:
								keybd_event(VK_RMENU, 0, 0, 0);
								break;
								case 261: 
				                randaz = random(adoz.Length())+1;
				                randletter = adoz[randaz];
								keybd_event(VkKeyScan(randletter), 0, 0, 0);
								break;
								case 262:
				                zerododziewiec = random(10)+48;
								keybd_event(VkKeyScan(zerododziewiec), 0, 0, 0);
								break;
                                 case 300:
                                keybd_event(VkKeyScan('0'), 0, KEYEVENTF_KEYUP, 0);
                                break;
                                 case 301:
                                keybd_event(VkKeyScan('1'), 0, KEYEVENTF_KEYUP, 0);
                                break;
								case 302:
								keybd_event(VkKeyScan('2'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 303:
								keybd_event(VkKeyScan('3'), 0, KEYEVENTF_KEYUP, 0);
								break; 
								case 304:
								keybd_event(VkKeyScan('4'), 0, KEYEVENTF_KEYUP, 0);
								break;       
								case 305:
								keybd_event(VkKeyScan('5'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 306:
								keybd_event(VkKeyScan('6'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 307:
								keybd_event(VkKeyScan('7'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 308:
								keybd_event(VkKeyScan('8'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 309:
								keybd_event(VkKeyScan('9'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 310:
								keybd_event(VkKeyScan('A'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 311:
								keybd_event(VkKeyScan('B'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 312:
								keybd_event(VkKeyScan('C'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 313:
								keybd_event(VkKeyScan('D'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 314:
								keybd_event(VkKeyScan('E'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 315:
								keybd_event(VkKeyScan('F'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 316:
								keybd_event(VkKeyScan('G'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 317:
								keybd_event(VkKeyScan('H'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 318:
								keybd_event(VkKeyScan('I'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 319:
								keybd_event(VkKeyScan('J'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 320:
								keybd_event(VkKeyScan('K'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 321:
								keybd_event(VkKeyScan('L'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 322:
								keybd_event(VkKeyScan('M'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 323:
								keybd_event(VkKeyScan('N'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 324:
								keybd_event(VkKeyScan('O'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 325:
								keybd_event(VkKeyScan('P'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 326:
								keybd_event(VkKeyScan('Q'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 327:
								keybd_event(VkKeyScan('R'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 328:
								keybd_event(VkKeyScan('S'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 329:
								keybd_event(VkKeyScan('T'), 0, 0, 0);
								keybd_event(VkKeyScan('T'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 330:
								keybd_event(VkKeyScan('U'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 331:
								keybd_event(VkKeyScan('V'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 332:
								keybd_event(VkKeyScan('W'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 333:
								keybd_event(VkKeyScan('X'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 334:
								keybd_event(VkKeyScan('Y'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 335:
								keybd_event(VkKeyScan('Z'), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 336:
								keybd_event(VK_F1, 0, KEYEVENTF_KEYUP, 0);
								break;
				                case 337:
								keybd_event(VK_F2, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 338:
								keybd_event(VK_F3, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 339:
								keybd_event(VK_F4, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 340:
								keybd_event(VK_F5, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 341:
								keybd_event(VK_F6, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 342:
								keybd_event(VK_F7, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 343:
								keybd_event(VK_F8, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 344:
								keybd_event(VK_F9, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 345:
								keybd_event(VK_F10, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 346:
								keybd_event(VK_F11, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 347:
								keybd_event(VK_F12, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 348:
								keybd_event(VK_UP, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 349:
								keybd_event(VK_DOWN, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 350:
								keybd_event(VK_LEFT, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 351:
								keybd_event(VK_RIGHT, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 352:
								keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 353:
								keybd_event(VK_SPACE, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 354:
								keybd_event(VK_LSHIFT, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 355:
								keybd_event(VK_RSHIFT, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 356:
								keybd_event(VK_CAPITAL, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 357:
								keybd_event(VK_CONTROL, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 358:
								keybd_event(VK_RCONTROL, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 359:
								keybd_event(VK_LMENU, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 360:
								keybd_event(VK_RMENU, 0, KEYEVENTF_KEYUP, 0);
								break;
								case 361: 
				                randaz = random(adoz.Length())+1;
				                randletter = adoz[randaz];
								keybd_event(VkKeyScan(randletter), 0, KEYEVENTF_KEYUP, 0);
								break;
								case 362:
				                zerododziewiec = random(10)+48;
								keybd_event(VkKeyScan(zerododziewiec), 0, KEYEVENTF_KEYUP, 0);
								break;
                                }
                        }



else{
if(bt==9999){
Timer1->Enabled=false;
Start->Enabled=true;
Button3->Enabled=true;
Button1->Enabled=false;
HotKey1->Enabled=true;
Edit1->Enabled=true;
Form1->Caption="AutoClick - OFF";
StatusBar1->Panels->Items[1]->Text = "Turned OFF";
}else if(bt==9997){
wa=StrToInt(br.SubString(18, 9));
if(wa<=dloops){
Timer1->Enabled=false;
Start->Enabled=true;
Button3->Enabled=true;
Button1->Enabled=false;
HotKey1->Enabled=true;
Edit1->Enabled=true;
Form1->Caption="AutoClick - OFF";
StatusBar1->Panels->Items[1]->Text = "Turned OFF";
}
}else{
 if(bt==9998){
   ListBox3->ItemIndex=0;
 }
}
}
if(ListBox3->Count-1==ListBox3->ItemIndex){
ListBox3->ItemIndex=0;
dloops=dloops+1;
Edit4->Text = dloops;
}else{
                                ListBox3->ItemIndex = ListBox3->ItemIndex+1;}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::HotKey(TMessage &Msg)
{
    if (Msg.WParam == 1){
        if(Form1->Caption=="AutoClick - ON"){
        Timer1->Enabled=false;
Start->Enabled=true;
Button3->Enabled=true;
Button1->Enabled=false;
HotKey1->Enabled=true;
Edit1->Enabled=true;
       Form1->Caption="AutoClick - OFF";
StatusBar1->Panels->Items[1]->Text = "Turned OFF";
}
       else{

       if(Form1->Caption=="AutoClick - OFF" && ListBox3->Count>0 ){
       if(ListBox3->ItemIndex<0){ListBox3->ItemIndex=0;}
       Timer1->Enabled=true;
Start->Enabled=false;
Button3->Enabled=false;
Button4->Enabled=false;
Button2->Enabled=false;
Button1->Enabled=true;
HotKey1->Enabled=false;
Edit1->Enabled=false;
                 Form1->Caption="AutoClick - ON";
StatusBar1->Panels->Items[1]->Text = "Turned ON"; }else if(Form1->Caption=="AutoClick - OFF"){
        UnregisterHotKey(Form1->Handle, 1);
       ShowMessage("Add some records to list!");
        RegisterHotKey(Form1->Handle, 1, 0, HotKey1->HotKey);}
       }
    }
    if (Msg.WParam == 2) {
                                if(cur.x<10){
                                if(cur.y<10){
                                s="000" + IntToStr(cur.x) + ":000" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0001 "+s+"  Lmb");	ListBox3->ItemIndex = ListBox3->ItemIndex+1; ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<100){
                                s="000" + IntToStr(cur.x) + ":00" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0001 "+s+"  Lmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<1000){
                                s="000" + IntToStr(cur.x) + ":0" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0001 "+s+"  Lmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<10000){
                                s="000" + IntToStr(cur.x) + ":" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0001 "+s+"  Lmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                }
                                }
                                }
                                }
                                else{
                                if(cur.x<100){
                                if(cur.y<10){
                                s="00" + IntToStr(cur.x) + ":000" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0001 "+s+"  Lmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<100){
                                s="00" + IntToStr(cur.x) + ":00" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0001 "+s+"  Lmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<1000){
                                s="00" + IntToStr(cur.x) + ":0" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0001 "+s+"  Lmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<10000){
                                s="00" + IntToStr(cur.x) + ":" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0001 "+s+"  Lmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                }
                                }
                                }
                                }
                                else{
                                if(cur.x<1000){
                                if(cur.y<10){
                                s="0" + IntToStr(cur.x) + ":000" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0001 "+s+"  Lmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<100){
                                s="0" + IntToStr(cur.x) + ":00" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0001 "+s+"  Lmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<1000){
                                s="0" + IntToStr(cur.x) + ":0" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0001 "+s+"  Lmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<10000){
                                s="0" + IntToStr(cur.x) + ":" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0001 "+s+"  Lmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                }
                                }
                                }
                                }
                                else{
                                if(cur.x<10000){
                                if(cur.y<10){
                                s=IntToStr(cur.x) + ":000" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0001 "+s+"  Lmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<100){
                                s=IntToStr(cur.x) + ":00" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0001 "+s+"  Lmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<1000){
                                s=IntToStr(cur.x) + ":0" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0001 "+s+"  Lmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<10000){
                                s=IntToStr(cur.x) + ":" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0001 "+s+"  Lmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
    							}

    if (Msg.WParam == 3) {
                                if(cur.x<10){
                                if(cur.y<10){
                                s="000" + IntToStr(cur.x) + ":000" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0002 "+s+"  Rmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<100){
                                s="000" + IntToStr(cur.x) + ":00" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0002 "+s+"  Rmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<1000){
                                s="000" + IntToStr(cur.x) + ":0" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0002 "+s+"  Rmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<10000){
                                s="000" + IntToStr(cur.x) + ":" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0002 "+s+"  Rmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                }
                                }
                                }
                                }
                                else{
                                if(cur.x<100){
                                if(cur.y<10){
                                s="00" + IntToStr(cur.x) + ":000" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0002 "+s+"  Rmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<100){
                                s="00" + IntToStr(cur.x) + ":00" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0002 "+s+"  Rmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<1000){
                                s="00" + IntToStr(cur.x) + ":0" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0002 "+s+"  Rmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<10000){
                                s="00" + IntToStr(cur.x) + ":" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0002 "+s+"  Rmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                }
                                }
                                }
                                }
                                else{
                                if(cur.x<1000){
                                if(cur.y<10){
                                s="0" + IntToStr(cur.x) + ":000" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0002 "+s+"  Rmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<100){
                                s="0" + IntToStr(cur.x) + ":00" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0002 "+s+"  Rmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<1000){
                                s="0" + IntToStr(cur.x) + ":0" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0002 "+s+"  Rmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<10000){
                                s="0" + IntToStr(cur.x) + ":" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0002 "+s+"  Rmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                }
                                }
                                }
                                }
                                else{
                                if(cur.x<10000){
                                if(cur.y<10){
                                s=IntToStr(cur.x) + ":000" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0002 "+s+"  Rmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<100){
                                s=IntToStr(cur.x) + ":00" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0002 "+s+"  Rmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<1000){
                                s=IntToStr(cur.x) + ":0" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0002 "+s+"  Rmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<10000){
                                s=IntToStr(cur.x) + ":" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0002 "+s+"  Rmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
    if (Msg.WParam == 4) {
                                if(cur.x<10){
                                if(cur.y<10){
                                s="000" + IntToStr(cur.x) + ":000" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0003 "+s+"  HoldLmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<100){
                                s="000" + IntToStr(cur.x) + ":00" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0003 "+s+"  HoldLmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<1000){
                                s="000" + IntToStr(cur.x) + ":0" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0003 "+s+"  HoldLmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<10000){
                                s="000" + IntToStr(cur.x) + ":" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0003 "+s+"  HoldLmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                }
                                }
                                }
                                }
                                else{
                                if(cur.x<100){
                                if(cur.y<10){
                                s="00" + IntToStr(cur.x) + ":000" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0003 "+s+"  HoldLmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<100){
                                s="00" + IntToStr(cur.x) + ":00" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0003 "+s+"  HoldLmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<1000){
                                s="00" + IntToStr(cur.x) + ":0" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0003 "+s+"  HoldLmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<10000){
                                s="00" + IntToStr(cur.x) + ":" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0003 "+s+"  HoldLmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                }
                                }
                                }
                                }
                                else{
                                if(cur.x<1000){
                                if(cur.y<10){
                                s="0" + IntToStr(cur.x) + ":000" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0003 "+s+"  HoldLmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<100){
                                s="0" + IntToStr(cur.x) + ":00" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0003 "+s+"  HoldLmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<1000){
                                s="0" + IntToStr(cur.x) + ":0" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0003 "+s+"  HoldLmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<10000){
                                s="0" + IntToStr(cur.x) + ":" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0003 "+s+"  HoldLmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                }
                                }
                                }
                                }
                                else{
                                if(cur.x<10000){
                                if(cur.y<10){
                                s=IntToStr(cur.x) + ":000" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0003 "+s+"  HoldLmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<100){
                                s=IntToStr(cur.x) + ":00" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0003 "+s+"  HoldLmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<1000){
                                s=IntToStr(cur.x) + ":0" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0003 "+s+"  HoldLmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<10000){
                                s=IntToStr(cur.x) + ":" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0003 "+s+"  HoldLmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
    if (Msg.WParam == 5) {
                                if(cur.x<10){
                                if(cur.y<10){
                                s="000" + IntToStr(cur.x) + ":000" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0004 "+s+"  MoveCursor"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<100){
                                s="000" + IntToStr(cur.x) + ":00" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0004 "+s+"  MoveCursor"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<1000){
                                s="000" + IntToStr(cur.x) + ":0" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0004 "+s+"  MoveCursor"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<10000){
                                s="000" + IntToStr(cur.x) + ":" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0004 "+s+"  MoveCursor"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                }
                                }
                                }
                                }
                                else{
                                if(cur.x<100){
                                if(cur.y<10){
                                s="00" + IntToStr(cur.x) + ":000" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0004 "+s+"  MoveCursor"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<100){
                                s="00" + IntToStr(cur.x) + ":00" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0004 "+s+"  MoveCursor"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<1000){
                                s="00" + IntToStr(cur.x) + ":0" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0004 "+s+"  MoveCursor"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<10000){
                                s="00" + IntToStr(cur.x) + ":" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0004 "+s+"  MoveCursor"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                }
                                }
                                }
                                }
                                else{
                                if(cur.x<1000){
                                if(cur.y<10){
                                s="0" + IntToStr(cur.x) + ":000" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0004 "+s+"  MoveCursor"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<100){
                                s="0" + IntToStr(cur.x) + ":00" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0004 "+s+"  MoveCursor"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<1000){
                                s="0" + IntToStr(cur.x) + ":0" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0004 "+s+"  MoveCursor"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<10000){
                                s="0" + IntToStr(cur.x) + ":" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0004 "+s+"  MoveCursor"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                }
                                }
                                }
                                }
                                else{
                                if(cur.x<10000){
                                if(cur.y<10){
                                s=IntToStr(cur.x) + ":000" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0004 "+s+"  MoveCursor"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<100){
                                s=IntToStr(cur.x) + ":00" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0004 "+s+"  MoveCursor"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<1000){
                                s=IntToStr(cur.x) + ":0" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0004 "+s+"  MoveCursor"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<10000){
                                s=IntToStr(cur.x) + ":" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0004 "+s+"  MoveCursor"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
    if (Msg.WParam == 6) {
                                if(cur.x<10){
                                if(cur.y<10){
                                s="000" + IntToStr(cur.x) + ":000" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0005 "+s+"  ReleaseLmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<100){
                                s="000" + IntToStr(cur.x) + ":00" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0005 "+s+"  ReleaseLmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<1000){
                                s="000" + IntToStr(cur.x) + ":0" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0005 "+s+"  ReleaseLmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<10000){
                                s="000" + IntToStr(cur.x) + ":" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0005 "+s+"  ReleaseLmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                }
                                }
                                }
                                }
                                else{
                                if(cur.x<100){
                                if(cur.y<10){
                                s="00" + IntToStr(cur.x) + ":000" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0005 "+s+"  ReleaseLmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<100){
                                s="00" + IntToStr(cur.x) + ":00" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0005 "+s+"  ReleaseLmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<1000){
                                s="00" + IntToStr(cur.x) + ":0" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0005 "+s+"  ReleaseLmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<10000){
                                s="00" + IntToStr(cur.x) + ":" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0005 "+s+"  ReleaseLmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                }
                                }
                                }
                                }
                                else{
                                if(cur.x<1000){
                                if(cur.y<10){
                                s="0" + IntToStr(cur.x) + ":000" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0005 "+s+"  ReleaseLmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<100){
                                s="0" + IntToStr(cur.x) + ":00" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0005 "+s+"  ReleaseLmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<1000){
                                s="0" + IntToStr(cur.x) + ":0" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0005 "+s+"  ReleaseLmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<10000){
                                s="0" + IntToStr(cur.x) + ":" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0005 "+s+"  ReleaseLmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                }
                                }
                                }
                                }
                                else{
                                if(cur.x<10000){
                                if(cur.y<10){
                                s=IntToStr(cur.x) + ":000" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0005 "+s+"  ReleaseLmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<100){
                                s=IntToStr(cur.x) + ":00" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0005 "+s+"  ReleaseLmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<1000){
                                s=IntToStr(cur.x) + ":0" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0005 "+s+"  ReleaseLmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                else{
                                if(cur.y<10000){
                                s=IntToStr(cur.x) + ":" + IntToStr(cur.y);
                                ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0005 "+s+"  ReleaseLmb"); ListBox3->ItemIndex = ListBox3->ItemIndex+1; }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }
                                }

void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
cur.x=Mouse->CursorPos.x;
cur.y=Mouse->CursorPos.y;
StatusBar1->Panels->Items[0]->Text = "Mouse coordinates = "+ IntToStr(cur.x) + " : " + IntToStr(cur.y);
if(ListBox3->ItemIndex<0){
ListBox3->ItemIndex=ListBox3->Count-1;
}

}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button2Click(TObject *Sender)
{
ListBox3->Clear();
t_cur.clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
       if(Form1->Caption=="AutoClick - OFF"){
        RegisterHotKey(Form1->Handle, 2, 0, HotKey2->HotKey);
        RegisterHotKey(Form1->Handle, 3, 0, HotKey3->HotKey);
        RegisterHotKey(Form1->Handle, 4, 0, HotKey4->HotKey);
        RegisterHotKey(Form1->Handle, 5, 0, HotKey5->HotKey);
        RegisterHotKey(Form1->Handle, 6, 0, HotKey6->HotKey);
Start->Enabled=false;  
Button7->Enabled=true;
Button8->Enabled=true;
Button3->Enabled=false;
Button1->Enabled=false;  
Button9->Enabled=true;
Button11->Enabled=true;
Button4->Enabled=true;
Button5->Enabled=true;
Button6->Enabled=true;
Button10->Enabled=true;
Button14->Enabled=true;
Button12->Enabled=true; 
Button13->Enabled=true; 
HotKey2->Enabled=true;
HotKey3->Enabled=true;
HotKey4->Enabled=true;
HotKey5->Enabled=true;
HotKey6->Enabled=true;
Button2->Enabled=true;        
ComboBox1->Enabled=true;    
ComboBox2->Enabled=true; 
ComboBox3->Enabled=true;
Edit2->Enabled=true;
Edit5->Enabled=true;
Edit3->Enabled=true;
        Form1->Caption="AutoClick - REC";
StatusBar1->Panels->Items[1]->Text = "Recording";
        }
}
//---------------------------------------------------------------------------




void __fastcall TForm1::FormCreate(TObject *Sender)
{
RegisterHotKey(Form1->Handle, 1, 0, HotKey1->HotKey);
        ComboBox1->ItemIndex=0;
StatusBar1->Panels->Items[1]->Text = "Turned OFF";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
       if(Form1->Caption=="AutoClick - REC"){
        UnregisterHotKey(Form1->Handle, 2);
        UnregisterHotKey(Form1->Handle, 3);
        UnregisterHotKey(Form1->Handle, 4);
        UnregisterHotKey(Form1->Handle, 5);
        UnregisterHotKey(Form1->Handle, 6);
Start->Enabled=true;
Button7->Enabled=false;
Button8->Enabled=false;
Button3->Enabled=true;
Button1->Enabled=false;
Button4->Enabled=false;
Button5->Enabled=false;
Button6->Enabled=false;
Button2->Enabled=false; 
Button9->Enabled=false;
Button11->Enabled=false;
Button10->Enabled=false; 
Button12->Enabled=false;
Button13->Enabled=false;
Button14->Enabled=false;
HotKey2->Enabled=false;
HotKey3->Enabled=false;  
HotKey4->Enabled=false;  
HotKey5->Enabled=false;
HotKey6->Enabled=false;  
ComboBox1->Enabled=false;
ComboBox2->Enabled=false;
ComboBox3->Enabled=false;
Edit2->Enabled=false;
Edit3->Enabled=false;
Edit5->Enabled=false;
        Form1->Caption="AutoClick - OFF";
StatusBar1->Panels->Items[1]->Text = "Turned OFF";
         }
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Edit1KeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if(Edit1->Text=="" || StrToInt(Edit1->Text)<1)
Edit1->Text="1";
Timer1->Interval=StrToInt(Edit1->Text);
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Edit1KeyPress(TObject *Sender, char &Key)
{
  if (!(isdigit(Key) || Key == VK_BACK))
  {
    Key = 0;
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::HotKey1Exit(TObject *Sender)
{

        RegisterHotKey(Form1->Handle, 1, 0, HotKey1->HotKey);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::HotKey1Enter(TObject *Sender)
{

        UnregisterHotKey(Form1->Handle, 1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::HotKey1Change(TObject *Sender)
{

        RegisterHotKey(Form1->Handle, 1, 0, HotKey1->HotKey);        
}
//---------------------------------------------------------------------------







void __fastcall TForm1::Button5Click(TObject *Sender)
{if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="0"){u=100;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="1"){u=101;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="2"){u=102;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="3"){u=103;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="4"){u=104;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="5"){u=105;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="6"){u=106;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="7"){u=107;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="8"){u=108;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="9"){u=109;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="A"){u=110;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="B"){u=111;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="C"){u=112;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="D"){u=113;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="E"){u=114;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="F"){u=115;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="G"){u=116;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="H"){u=117;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="I"){u=118;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="J"){u=119;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="K"){u=120;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="L"){u=121;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="M"){u=122;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="N"){u=123;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="O"){u=124;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="P"){u=125;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="Q"){u=126;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="R"){u=127;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="S"){u=128;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="T"){u=129;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="U"){u=130;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="V"){u=131;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="W"){u=132;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="X"){u=133;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="Y"){u=134;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="Z"){u=135;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="F1"){u=136;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="F2"){u=137;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="F3"){u=138;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="F4"){u=139;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="F5"){u=140;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="F6"){u=141;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="F7"){u=142;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="F8"){u=143;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="F9"){u=144;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="F10"){u=145;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="F11"){u=146;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="F12"){u=147;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="UP"){u=148;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="DOWN"){u=149;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="LEFT"){u=150;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="RIGHT"){u=151;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="ENTER"){u=152;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="SPACE"){u=153;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="LEFT SHIFT"){u=154;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="RIGHT SHIFT"){u=155;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="CAPS LOCK"){u=156;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="LEFT CTRL"){u=157;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="RIGHT CTRL"){u=158;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="LEFT ALT"){u=159;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="RIGHT ALT"){u=160;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="RANDOM A-Z"){u=161;}
if(ComboBox1->Items->Strings[ComboBox1->ItemIndex]=="RANDOM 0-9"){u=162;}

                        switch(u){
                                 case 100:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0100  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 101:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0101  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 102:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0102  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 103:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0103  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 104:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0104  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 105:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0105  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 106:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0106  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 107:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0107  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 108:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0108  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 109:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0109  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 110:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0110  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 111:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0111  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 112:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0112  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 113:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0113  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 114:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0114  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 115:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0115  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 116:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0116  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 117:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0117  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 118:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0118  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 119:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0119  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 120:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0120  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 121:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0121  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 122:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0122  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 123:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0123  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 124:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0124  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 125:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0125  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 126:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0126  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 127:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0127  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 128:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0128  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 129:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0129  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 130:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0130  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 131:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0131  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 132:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0132  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 133:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0133  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 134:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0134  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 135:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0135  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 136:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0136  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 137:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0137  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 138:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0138  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 139:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0139  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 140:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0140  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 141:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0141  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 142:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0142  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 143:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0143  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 144:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0144  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 145:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0145  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 146:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0146  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 147:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0147  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 148:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0148  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 149:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0149  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 150:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0150  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 151:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0151  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 152:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0152  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 153:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0153  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 154:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0154  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 155:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0155  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 156:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0156  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 157:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0157  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 158:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0158  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 159:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0159  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 160:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0160  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 161:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0161  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 162:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0162  Key " +ComboBox1->Items->Strings[ComboBox1->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
                                }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
        ListBox3->Items->Insert(ListBox3->ItemIndex+1,"8000  Wait "+ Edit2->Text);
       ListBox3->ItemIndex = ListBox3->ItemIndex+1;
}
//---------------------------------------------------------------------------




void __fastcall TForm1::Saveas1Click(TObject *Sender)
{
if(SaveDialog1->Execute())
{
try
{
ListBox3->Items->SaveToFile(SaveDialog1->FileName);
}
catch(...)
{
ShowMessage("Save error.");
}
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Load1Click(TObject *Sender)
{
 if(OpenDialog1->Execute())
{
try
{
ListBox3->Items->LoadFromFile(OpenDialog1->FileName);
ListBox3->ItemIndex = 0;
}
catch(...)
{
ShowMessage("Load error.");
}
}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::StartClick(TObject *Sender)
{
       if(Form1->Caption=="AutoClick - OFF" && ListBox3->Count>0 ){
       if(ListBox3->ItemIndex<0){ListBox3->ItemIndex=0;}
       Timer1->Enabled=true;
Start->Enabled=false;
Button3->Enabled=false;
Button4->Enabled=false;
Button2->Enabled=false;
Button1->Enabled=true;
HotKey1->Enabled=false;
Button9->Enabled=false;
Button11->Enabled=false;
Edit1->Enabled=false;
HotKey2->Enabled=false;
HotKey3->Enabled=false;
HotKey4->Enabled=false;
HotKey5->Enabled=false;
HotKey6->Enabled=false;
       Form1->Caption="AutoClick - ON";
StatusBar1->Panels->Items[1]->Text = "Turned ON";
       }   else{
        UnregisterHotKey(Form1->Handle, 1);
       ShowMessage("Add some records to list!");
        RegisterHotKey(Form1->Handle, 1, 0, HotKey1->HotKey);}
}
//---------------------------------------------------------------------------






void __fastcall TForm1::Button8Click(TObject *Sender)
{
if(ListBox3->ItemIndex>0){
ListBox3->Items->Exchange(ListBox3->ItemIndex, ListBox3->ItemIndex-1);
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{

if(ListBox3->ItemIndex>-1 && ListBox3->ItemIndex<ListBox3->Count-1){
ListBox3->Items->Exchange(ListBox3->ItemIndex, ListBox3->ItemIndex+1);
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button9Click(TObject *Sender)
{

if(ListBox3->ItemIndex>-1 && ListBox3->ItemIndex<ListBox3->Count){
dodel=ListBox3->ItemIndex;
ListBox3->DeleteSelected();
ListBox3->ItemIndex=dodel;
}
}
//---------------------------------------------------------------------------









void __fastcall TForm1::Button10Click(TObject *Sender)
{
        ListBox3->Items->Insert(ListBox3->ItemIndex+1,"8001  Speed "+ Edit3->Text);
       ListBox3->ItemIndex = ListBox3->ItemIndex+1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit3KeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if(Edit3->Text=="" || StrToInt(Edit3->Text)<1)
Edit3->Text="1";
Timer1->Interval=StrToInt(Edit1->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit3KeyPress(TObject *Sender, char &Key)
{
  if (!(isdigit(Key) || Key == VK_BACK))
  {
    Key = 0;
  }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Author1Click(TObject *Sender)
{
ShellExecute(NULL, "open", "http://google.pl", NULL, NULL, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Website1Click(TObject *Sender)
{
ShellExecute(NULL, "open", "http://google.pl", NULL, NULL, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button11Click(TObject *Sender)
{
       ListBox3->Items->Insert(ListBox3->ItemIndex+1,"9999  Stop ");
       ListBox3->ItemIndex = ListBox3->ItemIndex+1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button12Click(TObject *Sender)
{
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="0"){u=100;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="1"){u=101;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="2"){u=102;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="3"){u=103;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="4"){u=104;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="5"){u=105;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="6"){u=106;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="7"){u=107;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="8"){u=108;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="9"){u=109;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="A"){u=110;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="B"){u=111;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="C"){u=112;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="D"){u=113;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="E"){u=114;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="F"){u=115;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="G"){u=116;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="H"){u=117;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="I"){u=118;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="J"){u=119;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="K"){u=120;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="L"){u=121;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="M"){u=122;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="N"){u=123;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="O"){u=124;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="P"){u=125;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="Q"){u=126;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="R"){u=127;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="S"){u=128;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="T"){u=129;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="U"){u=130;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="V"){u=131;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="W"){u=132;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="X"){u=133;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="Y"){u=134;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="Z"){u=135;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="F1"){u=136;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="F2"){u=137;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="F3"){u=138;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="F4"){u=139;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="F5"){u=140;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="F6"){u=141;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="F7"){u=142;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="F8"){u=143;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="F9"){u=144;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="F10"){u=145;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="F11"){u=146;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="F12"){u=147;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="UP"){u=148;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="DOWN"){u=149;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="LEFT"){u=150;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="RIGHT"){u=151;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="ENTER"){u=152;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="SPACE"){u=153;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="LEFT SHIFT"){u=154;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="RIGHT SHIFT"){u=155;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="CAPS LOCK"){u=156;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="LEFT CTRL"){u=157;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="RIGHT CTRL"){u=158;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="LEFT ALT"){u=159;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="RIGHT ALT"){u=160;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="RANDOM A-Z"){u=161;}
if(ComboBox2->Items->Strings[ComboBox2->ItemIndex]=="RANDOM 0-9"){u=162;}

                        switch(u){
                                 case 100:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0200  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 101:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0201  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 102:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0202  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 103:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0203  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 104:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0204  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 105:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0205  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 106:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0206  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 107:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0207  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 108:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0208  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 109:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0209  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 110:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0210  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 111:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0211  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 112:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0212  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 113:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0213  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 114:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0214  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 115:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0215  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 116:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0216  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 117:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0217  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 118:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0218  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 119:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0219  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 120:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0220  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 121:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0221  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 122:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0222  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 123:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0223  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 124:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0224  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 125:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0225  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 126:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0226  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 127:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0227  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 128:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0228  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 129:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0229  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 130:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0230  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 131:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0231  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 132:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0232  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 133:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0233  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 134:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0234  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 135:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0235  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 136:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0236  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 137:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0237  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 138:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0238  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 139:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0239  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 140:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0240  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 141:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0241  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 142:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0242  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 143:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0243  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 144:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0244  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 145:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0245  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 146:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0246  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 147:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0247  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 148:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0248  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 149:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0249  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 150:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0250  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 151:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0251  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 152:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0252  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 153:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0253  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 154:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0254  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 155:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0255  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 156:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0256  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 157:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0257  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 158:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0258  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 159:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0259  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 160:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0260  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 161:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0261  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 162:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0262  HoldKey " +ComboBox2->Items->Strings[ComboBox2->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
                                }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button13Click(TObject *Sender)
{
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="0"){u=100;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="1"){u=101;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="2"){u=102;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="3"){u=103;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="4"){u=104;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="5"){u=105;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="6"){u=106;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="7"){u=107;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="8"){u=108;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="9"){u=109;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="A"){u=110;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="B"){u=111;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="C"){u=112;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="D"){u=113;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="E"){u=114;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="F"){u=115;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="G"){u=116;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="H"){u=117;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="I"){u=118;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="J"){u=119;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="K"){u=120;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="L"){u=121;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="M"){u=122;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="N"){u=123;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="O"){u=124;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="P"){u=125;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="Q"){u=126;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="R"){u=127;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="S"){u=128;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="T"){u=129;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="U"){u=130;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="V"){u=131;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="W"){u=132;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="X"){u=133;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="Y"){u=134;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="Z"){u=135;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="F1"){u=136;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="F2"){u=137;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="F3"){u=138;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="F4"){u=139;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="F5"){u=140;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="F6"){u=141;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="F7"){u=142;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="F8"){u=143;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="F9"){u=144;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="F10"){u=145;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="F11"){u=146;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="F12"){u=147;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="UP"){u=148;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="DOWN"){u=149;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="LEFT"){u=150;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="RIGHT"){u=151;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="ENTER"){u=152;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="SPACE"){u=153;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="LEFT SHIFT"){u=154;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="RIGHT SHIFT"){u=155;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="CAPS LOCK"){u=156;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="LEFT CTRL"){u=157;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="RIGHT CTRL"){u=158;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="LEFT ALT"){u=159;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="RIGHT ALT"){u=160;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="RANDOM A-Z"){u=161;}
if(ComboBox3->Items->Strings[ComboBox3->ItemIndex]=="RANDOM 0-9"){u=162;}

                        switch(u){
                                 case 100:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0300  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 101:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0301  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 102:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0302  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 103:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0303  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 104:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0304  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 105:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0305  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 106:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0306  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 107:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0307  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 108:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0308  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 109:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0309  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 110:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0310  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 111:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0311  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 112:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0312  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 113:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0313  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 114:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0314  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 115:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0315  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 116:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0316  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 117:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0317  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 118:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0318  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 119:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0319  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 120:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0320  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 121:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0321  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 122:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0322  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 123:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0323  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 124:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0324  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 125:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0325  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 126:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0326  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 127:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0327  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 128:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0328  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 129:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0329  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 130:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0330  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 131:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0331  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 132:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0332  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 133:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0333  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 134:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0334  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 135:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0335  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 136:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0336  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 137:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0337  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 138:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0338  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 139:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0339  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 140:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0340  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 141:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0341  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 142:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0342  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 143:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0343  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 144:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0344  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 145:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0345  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 146:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0346  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 147:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0347  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 148:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0348  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 149:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0349  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 150:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0350  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 151:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0351  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 152:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0352  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 153:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0353  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 154:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0354  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 155:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0355  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 156:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0356  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 157:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0357  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 158:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0358  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 159:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0359  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 160:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0360  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 161:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0361  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
case 162:
ListBox3->Items->Insert(ListBox3->ItemIndex+1,"0362  ReleaseKey " +ComboBox3->Items->Strings[ComboBox3->ItemIndex]);
ListBox3->ItemIndex = ListBox3->ItemIndex+1;
break;
                                }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ResetClick(TObject *Sender)
{
dloops=0;
Edit4->Text = dloops;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Edit5KeyPress(TObject *Sender, char &Key)
{
  if (!(isdigit(Key) || Key == VK_BACK))
  {
    Key = 0;
  }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Edit5KeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if(Edit5->Text=="" || StrToInt(Edit5->Text)<1)
Edit5->Text="1";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button14Click(TObject *Sender)
{
       ListBox3->Items->Insert(ListBox3->ItemIndex+1,"9997  StopIfLoops "+Edit5->Text);
       ListBox3->ItemIndex = ListBox3->ItemIndex+1;
}
//---------------------------------------------------------------------------

