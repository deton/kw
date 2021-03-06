#include "control_window.h"

// -------------------------------------------------------------------
// window procedure

int ControlWindow::wndProc(HWND w, UINT msg, WPARAM wp, LPARAM lp) {
    // window handle や message の引数を取っておく
    hwnd = w;
    wParam = wp;
    lParam = lp;

    // message の種類で分岐
    switch (msg) {
    case WM_INITDIALOG:
        return TRUE;
    case WM_COMMAND:
        switch (LOWORD(wParam)) {
        case IDOK:
        case IDCANCEL:
            EndDialog(hwnd, 0);
            return TRUE;
        }
        break;
    }
    return FALSE;
}

// -------------------------------------------------------------------

