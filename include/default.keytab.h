  /* generated by '../tests/quote ../other/default.Keytab' */

  "# [KeyTab] Konsole Keyboard Table\n"
  "#\n"
  "# --------------------------------------------------------------\n"
  "#\n"
  "# This configuration table allows to customize the\n"
  "# meaning of the keys.\n"
  "#\n"
  "# The syntax is that each entry has the form : \n"
  "#\n"
  "#   \"key\" Keyname { (\"+\"|\"-\") Modename } \":\" (String|Operation)\n"
  "#\n"
  "# Keynames are those defined in <qnamespace.h> with the\n"
  "# \"Qt::Key_\" removed. (We'd better insert the list here)\n"
  "#\n"
  "# Mode names are : \n"
  "#\n"
  "# - Shift\n"
  "# - Alt\n"
  "# - Control\n"
  "#\n"
  "#   The VT100 emulation has two modes that can affect the\n"
  "#   sequences emitted by certain keys. These modes are\n"
  "#   under control of the client program.\n"
  "#   \n"
  "# - Newline     : effects Return and Enter key.\n"
  "# - Application : effects Up and Down key.\n"
  "# - Ansi        : effects Up and Down key.\n"
  "#\n"
  "#   konsole provides another mode that allows to configure\n"
  "#   the keyboard to do a backspace related trick. This mode\n"
  "#   can be changed by konsole's configuration menu.\n"
  "#\n"
  "# - BsHack      : effects Backspace and Delete key.\n"
  "#\n"
  "# Operations are\n"
  "#\n"
  "# - scrollUpLine\n"
  "# - scrollUpPage\n"
  "# - scrollDownLine\n"
  "# - scrollDownPage\n"
  "#\n"
  "# - emitSelection\n"
  "#\n"
  "# If the key is not found here, the text of the\n"
  "# key event as provided by QT is emitted, possibly\n"
  "# preceeded by ESC if the Alt key is pressed.\n"
  "#\n"
  "# --------------------------------------------------------------\n"
  "\n"
  "key Escape : \"\\E\"\n"
  "key Tab    : \"\\t\"\n"
  "\n"
  "# VT100 can add an extra \\n after return.\n"
  "# The NewLine mode is set by an escape sequence.\n"
  "\n"
  "key Return-Alt-NewLine : \"\\r\"  \n"
  "key Return-Alt+NewLine : \"\\r\\n\"\n"
  "\n"
  "key Return+Alt-NewLine : \"\\E\\r\"  \n"
  "key Return+Alt+NewLine : \"\\E\\r\\n\"\n"
  "\n"
  "# Some desperately try to save the ^H.\n"
  "# The BsHack mode is set by regular\n"
  "# configurations means for convenience.\n"
  "\n"
  "key Backspace-BsHack : \"\\x08\"\n"
  "key Delete   -BsHack : \"\\x7f\"\n"
  "\n"
  "key Backspace+BsHack : \"\\x7f\"\n"
  "key Delete   +BsHack : \"\\E[3~\"\n"
  "\n"
  "# These codes are for the VT52 mode of VT100\n"
  "# The Ansi mode (i.e. VT100 mode) is set by\n"
  "# an escape sequence\n"
  "\n"
  "key Up   -Shift-Ansi : \"\\EA\"\n"
  "key Down -Shift-Ansi : \"\\EB\"\n"
  "key Right-Ansi : \"\\EC\"\n"
  "key Left -Ansi : \"\\ED\"\n"
  "\n"
  "# VT100 emits a mode bit together\n"
  "# with the arrow keys.The AppCuKeys\n"
  "# mode is set by an escape sequence.\n"
  "\n"
  "key Up   -Shift+Ansi+AppCuKeys : \"\\EOA\"\n"
  "key Down -Shift+Ansi+AppCuKeys : \"\\EOB\"\n"
  "key Right+Ansi+AppCuKeys : \"\\EOC\"\n"
  "key Left +Ansi+AppCuKeys : \"\\EOD\"\n"
  "\n"
  "key Up   -Shift+Ansi-AppCuKeys : \"\\E[A\"\n"
  "key Down -Shift+Ansi-AppCuKeys : \"\\E[B\"\n"
  "key Right+Ansi-AppCuKeys : \"\\E[C\"\n"
  "key Left +Ansi-AppCuKeys : \"\\E[D\"\n"
  "\n"
  "# linux functions keys F1-F5 differ from xterm\n"
  "#\n"
  "# F1 : \"\\E[[A\" \n"
  "# F2 : \"\\E[[B\" \n"
  "# F3 : \"\\E[[C\" \n"
  "# F4 : \"\\E[[D\" \n"
  "# F5 : \"\\E[[E\" \n"
  "\n"
  "# function keys\n"
  "\n"
  "key F1     : \"\\E[11~\"\n"
  "key F2     : \"\\E[12~\"\n"
  "key F3     : \"\\E[13~\"\n"
  "key F4     : \"\\E[14~\"\n"
  "key F5     : \"\\E[15~\"\n"
  "key F6     : \"\\E[17~\" \n"
  "key F7     : \"\\E[18~\" \n"
  "key F8     : \"\\E[19~\" \n"
  "key F9     : \"\\E[20~\" \n"
  "key F10    : \"\\E[21~\" \n"
  "key F11    : \"\\E[23~\" \n"
  "key F12    : \"\\E[24~\" \n"
  "\n"
  "key Home   : \"\\E[H\"  \n"
  "key End    : \"\\E[F\"  \n"
  "\n"
  "key Prior -Shift : \"\\E[5~\"  \n"
  "key Next  -Shift : \"\\E[6~\"  \n"
  "key Insert-Shift : \"\\E[2~\"  \n"
  "\n"
  "# Keypad-Enter. See comment on Return above.\n"
  "\n"
  "key Enter+NewLine : \"\\r\\n\"\n"
  "key Enter-NewLine : \"\\r\"  \n"
  "\n"
  "key Space +Control : \"\\x00\"\n"
  "\n"
  "# some of keys are used by konsole.\n"
  "\n"
  "key Up    +Shift   : scrollLineUp\n"
  "key Prior +Shift   : scrollPageUp\n"
  "key Down  +Shift   : scrollLineDown\n"
  "key Next  +Shift   : scrollPageDown\n"
  "key Insert+Shift   : emitSelection\n"
  "\n"
  "#----------------------------------------------------------\n"
  "\n"
  "# keypad characters as offered by Qt\n"
  "# cannot be recognized as such.\n"
  "\n"
  "#----------------------------------------------------------\n"
  "\n"
  "# Following other strings as emitted by konsole.\n"
  ""
