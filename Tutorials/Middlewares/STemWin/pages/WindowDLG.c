/*********************************************************************
*                                                                    *
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                                                                    *
**********************************************************************
*                                                                    *
* C-file generated by:                                               *
*                                                                    *
*        GUI_Builder for emWin version 5.32                          *
*        Compiled Oct  8 2015, 11:59:02                              *
*        (c) 2015 Segger Microcontroller GmbH & Co. KG               *
*                                                                    *
**********************************************************************
*                                                                    *
*        Internet: www.segger.com  Support: support@segger.com       *
*                                                                    *
**********************************************************************
*/

// USER START (Optionally insert additional includes)
// USER END

#include "DIALOG.h"

/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
#define ID_WINDOW_0  (GUI_ID_USER + 0x00)
#define ID_BUTTON_0  (GUI_ID_USER + 0x01)
#define ID_PROGBAR_0  (GUI_ID_USER + 0x02)
#define ID_PROGBAR_1  (GUI_ID_USER + 0x03)
#define ID_SLIDER_0  (GUI_ID_USER + 0x04)
#define ID_SPINBOX_0  (GUI_ID_USER + 0x05)
#define ID_EDIT_0  (GUI_ID_USER + 0x07)


// USER START (Optionally insert additional defines)
#include "stm32f7xx_hal.h"
#include "main.h"
// USER END

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/

// USER START (Optionally insert additional static data)
WM_HWIN hItem1;
static int n=0;
char str01[10];
// USER END

/*********************************************************************
*
*       _aDialogCreate
*/
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
  { WINDOW_CreateIndirect, "Window", ID_WINDOW_0, 0, 0, 480, 272, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "Button", ID_BUTTON_0, 213, 150, 80, 20, 0, 0x0, 0 },
  { PROGBAR_CreateIndirect, "Progbar", ID_PROGBAR_0, 46, 235, 418, 20, 0, 0x0, 0 },
  { PROGBAR_CreateIndirect, "Progbar", ID_PROGBAR_1, 21, 12, 20, 206, 1, 0x0, 0 },
  { SLIDER_CreateIndirect, "Slider", ID_SLIDER_0, 58, 201, 400, 20, 0, 0x0, 0 },
  { SPINBOX_CreateIndirect, "Spinbox", ID_SPINBOX_0, 70, 79, 80, 44, 0, 0x0, 0 },
  { EDIT_CreateIndirect, "Edit", ID_EDIT_0, 212, 115, 80, 20, 0, 0x64, 0 },
  // USER START (Optionally insert additional widgets)
  // USER END
};

/*********************************************************************
*
*       Static code
*
**********************************************************************
*/

// USER START (Optionally insert additional static code)
// USER END

/*********************************************************************
*
*       _cbDialog
*/
static void _cbDialog(WM_MESSAGE * pMsg) {
  WM_HWIN hItem;
  int     NCode;
  int     Id;
  // USER START (Optionally insert additional variables)
  // USER END

  switch (pMsg->MsgId) {
  case WM_INIT_DIALOG:
    //
    // Initialization of 'Window'
    //
    hItem = pMsg->hWin;
    WINDOW_SetBkColor(hItem, GUI_MAKE_COLOR(0x00969600));
    //
    // Initialization of 'Button'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_0);
    BUTTON_SetText(hItem, "Yo!");
    //
    // Initialization of 'Spinbox'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_SPINBOX_0);
    SPINBOX_SetFont(hItem, GUI_FONT_20_1);
    //
    // Initialization of 'Edit'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_0);
    EDIT_SetText(hItem, "123");
    // USER START (Optionally insert additional code for further widget initialization)
    // USER END
    break;
  case WM_NOTIFY_PARENT:
    Id    = WM_GetId(pMsg->hWinSrc);
    NCode = pMsg->Data.v;
    switch(Id) {
    case ID_BUTTON_0: // Notifications sent by 'Button'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
    	  hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_0);
    	  EDIT_SetText(hItem, "0");
    	  hItem = WM_GetDialogItem(pMsg->hWin, ID_SPINBOX_0);
    	  SPINBOX_SetValue(hItem,0);
    	  hItem = WM_GetDialogItem(pMsg->hWin, ID_PROGBAR_0);
    	  PROGBAR_SetValue(hItem,0);
    	  hItem = WM_GetDialogItem(pMsg->hWin, ID_PROGBAR_1);
    	  PROGBAR_SetValue(hItem,0);
    	// USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_SLIDER_0: // Notifications sent by 'Slider'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
    	  hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_0);
    	  hItem1 = WM_GetDialogItem(pMsg->hWin, ID_SLIDER_0);
    	  n = SLIDER_GetValue(hItem1);
    	  sprintf(str01,"%d",n);
    	  EDIT_SetText(hItem, str01);
    	  hItem = WM_GetDialogItem(pMsg->hWin, ID_PROGBAR_0);
    	  PROGBAR_SetValue(hItem, n);
    	// USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_SPINBOX_0: // Notifications sent by 'Spinbox'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_MOVED_OUT:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
    	  hItem1 = WM_GetDialogItem(pMsg->hWin, ID_SPINBOX_0);
    	  n = SPINBOX_GetValue(hItem1);
    	  hItem = WM_GetDialogItem(pMsg->hWin, ID_PROGBAR_1);
    	  PROGBAR_SetValue(hItem, n);
    	// USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_EDIT_0: // Notifications sent by 'Edit'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_VALUE_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    // USER START (Optionally insert additional code for further Ids)
    // USER END
    }
    break;
  // USER START (Optionally insert additional message handling)
  // USER END
  default:
    WM_DefaultProc(pMsg);
    break;
  }
}

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       CreateWindow
*/
WM_HWIN CreateWindow(void);
WM_HWIN CreateWindow(void) {
  WM_HWIN hWin;

  hWin = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), _cbDialog, WM_HBKWIN, 0, 0);
  return hWin;
}

// USER START (Optionally insert additional public code)
// USER END

/*************************** End of file ****************************/