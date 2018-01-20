// 1.11(목) Day 1
// 과제 : cout << << endl로 자신이 좋아 하는 케릭터 그려오기
// 추가 : 텍스트 색깔 넣기 *c언어 사용
#include <stdio.h>
#include <Windows.h>

#define LINE_COLOR 7
#define FACE_COLOR 6
#define MOUSE_COLOR 8
#define EYE_CLOTH_COLOR 15

void main()
{
	HANDLE hC = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(hC, &csbi);



	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "                          a biU bri                                   ");
	printf("%s\n", "                       aba qYa7a   ba                                 ");
	printf("%s\n", "                      2b  1b  bRRiiiBZia                              ");
	printf("%s", "                     v   XBrv7i");
	SetConsoleTextAttribute(hC, FACE_COLOR);
	printf("%s", "bababab");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "isuui                           ");
	printf("%s", "                     giU7Qr ");
	SetConsoleTextAttribute(hC, FACE_COLOR);
	printf("%s", "aaaaaaaaaaaaab");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "JEi                         ");
	printf("%s", "                    bB5a 11 ");
	SetConsoleTextAttribute(hC, FACE_COLOR);
	printf("%s", "aaaaaaaaaaaaaa");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "aPS                        ");
	printf("%s", "                   uPvb ");
	SetConsoleTextAttribute(hC, FACE_COLOR);
	printf("%s", "a aaaaaaaaaaaaaaaaaa");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "JZ                       ");
	printf("%s", "                  SK  ");
	SetConsoleTextAttribute(hC, FACE_COLOR);
	printf("%s", "aaaaaaaaaaaaaaaaaaaaaaa");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "2X                      ");
	printf("%s", "                 iM ");
	SetConsoleTextAttribute(hC, FACE_COLOR);
	printf("%s", "aaaaaaaaaaaaaaaaaaaaaaaaaa");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "Qr                     ");
	printf("%s", "                 Ri");
	SetConsoleTextAttribute(hC, FACE_COLOR);
	printf("%s", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "B                     ");
	printf("%s", "                 B");
	SetConsoleTextAttribute(hC, FACE_COLOR);
	printf("%s", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "11                    ");
	printf("%s", "                 Q");
	SetConsoleTextAttribute(hC, FACE_COLOR);
	printf("%s", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "B                    ");
	printf("%s", "                 UL ");
	SetConsoleTextAttribute(hC, FACE_COLOR);
	printf("%s", "aaaaaaaaaaaaaaaaaaaaaaaaaaa");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "rD                   ");
	printf("%s", "                 aE ");
	SetConsoleTextAttribute(hC, FACE_COLOR);
	printf("%s", "aaaaaaaaaaaaa");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s", "biiibb");
	SetConsoleTextAttribute(hC, FACE_COLOR);
	printf("%s", "aaa a");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "biiriaiR                  ");
	printf("%s", "                  Db");
	SetConsoleTextAttribute(hC, FACE_COLOR);
	printf("%s", "aaaaaaaaaa");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "i7vriiii77raisYiiiii7Qa                 ");
	printf("%s", "                  iK ");
	SetConsoleTextAttribute(hC, FACE_COLOR);
	printf("%s", "aa aaaaa");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s", "ULb");
	SetConsoleTextAttribute(hC, EYE_CLOTH_COLOR);
	printf("%s", "aaaaaaaa");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s", "i5Jb");
	SetConsoleTextAttribute(hC, EYE_CLOTH_COLOR);
	printf("%s", "aaaaaaaa");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "Ub                ");
	printf("%s", "                   Qa ");
	SetConsoleTextAttribute(hC, FACE_COLOR);
	printf("%s", "bv aaa");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s", "ui");
	SetConsoleTextAttribute(hC, EYE_CLOTH_COLOR);
	printf("%s", "aababababaaaaabaaaaabaa");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "L                ");
	printf("%s", "                   vv dB7  r7");
	SetConsoleTextAttribute(hC, EYE_CLOTH_COLOR);
	printf("%s", "aaaaaabababaaabababbaaaa");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "ia               ");
	printf("%s", "                aBj X gaBa r");
	SetConsoleTextAttribute(hC, EYE_CLOTH_COLOR);
	printf("%s", "baba");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s", "7B");
	SetConsoleTextAttribute(hC, EYE_CLOTH_COLOR);
	printf("%s", "bababbbaaaaaa");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s", "rQ");
	SetConsoleTextAttribute(hC, EYE_CLOTH_COLOR);
	printf("%s", "aaaa");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "7a               ");
	printf("%s", "                 uaMBbZ sE ir");
	SetConsoleTextAttribute(hC, EYE_CLOTH_COLOR);
	printf("%s", "aaabrababaaaa");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s", "b7biiibi");
	SetConsoleTextAttribute(hC, EYE_CLOTH_COLOR);
	printf("%s", "aa");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "iu                ");
	printf("%s", "                 U  QBX  Bi v7");
	SetConsoleTextAttribute(hC, EYE_CLOTH_COLOR);
	printf("%s", "aaaaaabaaaab");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "Zviiiibru7L                 ");
	printf("%s", "                 bJ  Bi  ");
	SetConsoleTextAttribute(hC, FACE_COLOR);
	printf("%s", "bbaa");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s", "vJi");
	SetConsoleTextAttribute(hC, EYE_CLOTH_COLOR);
	printf("%s", "aaaaaaa");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s", "iJua  ");
	SetConsoleTextAttribute(hC, FACE_COLOR);
	printf("%s", "aaa");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "B                  ");
	printf("%s", "                  a  PvYv ");
	SetConsoleTextAttribute(hC, FACE_COLOR);
	printf("%s", "aaaab");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "r7r7rriria       aaqQ                  ");
	printf("%s", "                   bZIRqv");
	SetConsoleTextAttribute(hC, FACE_COLOR);
	printf("%s", "aaaaaa   ");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "abr77LJ22X5XSKKPUvEa                ");
	printf("%s", "                   PrvK ");
	SetConsoleTextAttribute(hC, FACE_COLOR);
	printf("%s", "baaaaa");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "iuKI2sL7ririibibbabarBa               ");
	printf("%s", "                    dvaa7r");
	SetConsoleTextAttribute(hC, FACE_COLOR);
	printf("%s", "aaa ");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s", "rgXv");
	SetConsoleTextAttribute(hC, MOUSE_COLOR);
	printf("%s", "bbabbbbbbbbbbibibba");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "7M               ");
	printf("%s", "                     aZB7");
	SetConsoleTextAttribute(hC, FACE_COLOR);
	printf("%s", "aaa ");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s", "1Q");
	SetConsoleTextAttribute(hC, MOUSE_COLOR);
	printf("%s", "baabbbbibibibibibibibia");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "Ba              ");
	printf("%s", "                      i2 ");
	SetConsoleTextAttribute(hC, FACE_COLOR);
	printf("%s", "aa");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s", "rB");
	SetConsoleTextAttribute(hC, MOUSE_COLOR);
	printf("%s", "abbbbibibibibibibibibibb");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "Kr              ");
	printf("%s", "                      vv ");
	SetConsoleTextAttribute(hC, FACE_COLOR);
	printf("%s", "aa");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s", "B7");
	SetConsoleTextAttribute(hC, MOUSE_COLOR);
	printf("%s", "abaabbbbbbibbbibibbbbbba");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "rB              ");
	printf("%s", "                      E");
	SetConsoleTextAttribute(hC, FACE_COLOR);
	printf("%s", "baaaa");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s", "B");
	SetConsoleTextAttribute(hC, MOUSE_COLOR);
	printf("%s", "bba");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s", "1B");
	SetConsoleTextAttribute(hC, MOUSE_COLOR);
	printf("%s", "bbbbaaaaaaaaaaaa");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "ivjXd7              ");
	printf("%s", "                      Q ");
	SetConsoleTextAttribute(hC, FACE_COLOR);
	printf("%s", "aaaa");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s", "B");
	SetConsoleTextAttribute(hC, MOUSE_COLOR);
	printf("%s", "bbb");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "QPqqbPPXq5SI55KSPBjrra                ");
	printf("%s", "                     r5 ");
	SetConsoleTextAttribute(hC, FACE_COLOR);
	printf("%s", "aaa");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s", "RU");
	SetConsoleTextAttribute(hC, MOUSE_COLOR);
	printf("%s", "abaaabb");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "ii77L7v7riLQS                    ");
	printf("%s", "                  a  gb");
	SetConsoleTextAttribute(hC, FACE_COLOR);
	printf("%s", "aaaa b");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s", "Bi");
	SetConsoleTextAttribute(hC, MOUSE_COLOR);
	printf("%s", "abbbbbbbbbaaaa");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "rb7a                     ");
	printf("%s", "                aYii1K ");
	SetConsoleTextAttribute(hC, FACE_COLOR);
	printf("%s", "aaaaa");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s", "iQ1");
	SetConsoleTextAttribute(hC, MOUSE_COLOR);
	printf("%s", "aabbbbbbbbab");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "KQ                        ");
	printf("%s", "                vb");
	SetConsoleTextAttribute(hC, EYE_CLOTH_COLOR);
	printf("%s", "aa");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s", "Rb  ");
	SetConsoleTextAttribute(hC, FACE_COLOR);
	printf("%s", "aaaaa");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s", "aXg2vi");
	SetConsoleTextAttribute(hC, MOUSE_COLOR);
	printf("%s", "bbbabb");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "JE2                         ");
	printf("%s", "               7");
	SetConsoleTextAttribute(hC, EYE_CLOTH_COLOR);
	printf("%s", "bbaab");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s", "vsr");
	SetConsoleTextAttribute(hC, FACE_COLOR);
	printf("%s", "aaaaaaa ");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "a72XKPKqUBq                           ");
	printf("%s", "              bi");
	SetConsoleTextAttribute(hC, EYE_CLOTH_COLOR);
	printf("%s", "aabaaab");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s", "rJ7i");
	SetConsoleTextAttribute(hC, FACE_COLOR);
	printf("%s", "aaaaaa   aaaaa");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "qabb                         ");
	printf("%s", "             ai");
	SetConsoleTextAttribute(hC, EYE_CLOTH_COLOR);
	printf("%s", "aabababaaab");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s", "rvrr");
	SetConsoleTextAttribute(hC, FACE_COLOR);
	printf("%s", "bbaa aaaa b");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s", "r ");
	SetConsoleTextAttribute(hC, EYE_CLOTH_COLOR);
	printf("%s", "b");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "ivia                      ");
	printf("%s", "             Lra");
	SetConsoleTextAttribute(hC, EYE_CLOTH_COLOR);
	printf("%s", "bababababaaabb");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s", "rrv7rvb ");
	SetConsoleTextAttribute(hC, FACE_COLOR);
	printf("%s", "aab");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s", "u ");
	SetConsoleTextAttribute(hC, EYE_CLOTH_COLOR);
	printf("%s", "aaab");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "va                     ");
	printf("%s", "             bUi");
	SetConsoleTextAttribute(hC, EYE_CLOTH_COLOR);
	printf("%s", "bbababbbbbbbaaaaab");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s", "iu2r ");
	SetConsoleTextAttribute(hC, FACE_COLOR);
	printf("%s", "aa");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s", "MXa ");
	SetConsoleTextAttribute(hC, EYE_CLOTH_COLOR);
	printf("%s", "b");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "ibi                     ");
	printf("%s", "            a7 ");
	SetConsoleTextAttribute(hC, EYE_CLOTH_COLOR);
	printf("%s", "aaaaaaaaaaaaaaaaaaaa ");
	SetConsoleTextAttribute(hC, LINE_COLOR);
	printf("%s\n", "rr   burvaaba                    ");
}
