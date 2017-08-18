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
#include "WIDGET_OSC.h"
// USER END

#include "DIALOG.h"

/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
#define ID_WINDOW_0          (GUI_ID_USER + 0x00)
#define ID_TEXT_0          (GUI_ID_USER + 0x01)
#define ID_DROPDOWN_0          (GUI_ID_USER + 0x02)
#define ID_TEXT_1          (GUI_ID_USER + 0x03)
#define ID_SLIDER_0          (GUI_ID_USER + 0x04)
#define ID_TEXT_2          (GUI_ID_USER + 0x05)
#define ID_DROPDOWN_1          (GUI_ID_USER + 0x06)
#define ID_TEXT_3          (GUI_ID_USER + 0x07)
#define ID_TEXT_4          (GUI_ID_USER + 0x08)
#define ID_SPINBOX_0          (GUI_ID_USER + 0x09)
#define ID_DROPDOWN_2          (GUI_ID_USER + 0x0A)


// USER START (Optionally insert additional defines)
#define ID_OSC_0			(GUI_ID_USER + 0x0B)
// USER END

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/

// USER START (Optionally insert additional static data)
// USER END

/*********************************************************************
*
*       _aDialogCreate
*/
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
  { WINDOW_CreateIndirect, "TriggerPage", ID_WINDOW_0, 0, 0, 480, 240, 0, 0x0, 0 },
  { TEXT_CreateIndirect, "DisplayText", ID_TEXT_0, 0, 0, 360, 240, 0, 0x64, 0 },
  { DROPDOWN_CreateIndirect, "DdMode", ID_DROPDOWN_0, 390, 80, 80, 18, 0, 0x0, 0 },
  { TEXT_CreateIndirect, "LblMode", ID_TEXT_1, 390, 60, 80, 20, 0, 0x64, 0 },
  { SLIDER_CreateIndirect, "TrigLvl", ID_SLIDER_0, 0, 0, 20, 240, 8, 0x0, 0 },
  { TEXT_CreateIndirect, "LblSource", ID_TEXT_2, 390, 10, 80, 20, 0, 0x64, 0 },
  { DROPDOWN_CreateIndirect, "DdSource", ID_DROPDOWN_1, 390, 30, 80, 18, 0, 0x0, 0 },
  { TEXT_CreateIndirect, "LblTilt", ID_TEXT_3, 390, 110, 80, 20, 0, 0x64, 0 },
  { TEXT_CreateIndirect, "LblSize", ID_TEXT_4, 390, 165, 80, 20, 0, 0x64, 0 },
  { SPINBOX_CreateIndirect, "SbSize", ID_SPINBOX_0, 390, 185, 80, 40, 0, 0x0, 0 },
  { DROPDOWN_CreateIndirect, "DdTilt", ID_DROPDOWN_2, 390, 130, 80, 21, 0, 0x0, 0 },
  // USER START (Optionally insert additional widgets)
  {	OSC_CreateIndirect, "Oscilloscope", ID_OSC_0, 0, 0, 360, 240, 0, 0, 0}
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
    // Initialization of 'DisplayText'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_0);
    TEXT_SetFont(hItem, GUI_FONT_32B_1);
    TEXT_SetTextColor(hItem, GUI_MAKE_COLOR(0x00000000));
    TEXT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_VCENTER);
    TEXT_SetText(hItem, "Oscilloscope display");
    //
    // Initialization of 'DdMode'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_DROPDOWN_0);
    DROPDOWN_AddString(hItem, "Front");
    DROPDOWN_AddString(hItem, "Impulse");
    DROPDOWN_SetFont(hItem, GUI_FONT_16B_1);
    //
    // Initialization of 'LblMode'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_1);
    TEXT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_TOP);
    TEXT_SetText(hItem, "Mode");
    TEXT_SetFont(hItem, GUI_FONT_16B_1);
    //
    // Initialization of 'LblSource'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_2);
    TEXT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_TOP);
    TEXT_SetFont(hItem, GUI_FONT_16B_1);
    TEXT_SetText(hItem, "Source");
    //
    // Initialization of 'DdSource'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_DROPDOWN_1);
    DROPDOWN_SetFont(hItem, GUI_FONT_16B_1);
    DROPDOWN_AddString(hItem, "Chan A");
    DROPDOWN_AddString(hItem, "Chan B");
    DROPDOWN_AddString(hItem, "EXT");
    //
    // Initialization of 'LblTilt'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_3);
    TEXT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_TOP);
    TEXT_SetFont(hItem, GUI_FONT_16B_1);
    TEXT_SetText(hItem, "Tilt/Cond");
    //
    // Initialization of 'LblSize'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_4);
    TEXT_SetFont(hItem, GUI_FONT_16B_1);
    TEXT_SetTextAlign(hItem, GUI_TA_HCENTER | GUI_TA_TOP);
    TEXT_SetText(hItem, "Size");
    //
    // Initialization of 'SbSize'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_SPINBOX_0);
    SPINBOX_SetFont(hItem, GUI_FONT_16B_1);
    //
    // Initialization of 'DdTilt'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_DROPDOWN_2);
    DROPDOWN_AddString(hItem, "Item");
    DROPDOWN_AddString(hItem, "Item");
    DROPDOWN_AddString(hItem, "Item");
    DROPDOWN_SetFont(hItem, GUI_FONT_16B_1);
    // USER START (Optionally insert additional code for further widget initialization)
    // USER END
    break;
  case WM_NOTIFY_PARENT:
    Id    = WM_GetId(pMsg->hWinSrc);
    NCode = pMsg->Data.v;
    switch(Id) {
    case ID_DROPDOWN_0: // Notifications sent by 'DdMode'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_SEL_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_SLIDER_0: // Notifications sent by 'TrigLvl'
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
    case ID_DROPDOWN_1: // Notifications sent by 'DdSource'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_SEL_CHANGED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_SPINBOX_0: // Notifications sent by 'SbSize'
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
        // USER END
        break;
      // USER START (Optionally insert additional code for further notification handling)
      // USER END
      }
      break;
    case ID_DROPDOWN_2: // Notifications sent by 'DdTilt'
      switch(NCode) {
      case WM_NOTIFICATION_CLICKED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_RELEASED:
        // USER START (Optionally insert code for reacting on notification message)
        // USER END
        break;
      case WM_NOTIFICATION_SEL_CHANGED:
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
*       CreateTriggerPage
*/
WM_HWIN CreateTriggerPage(void);
WM_HWIN CreateTriggerPage(void) {
  WM_HWIN hWin;

  hWin = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), _cbDialog, WM_HBKWIN, 0, 0);
  return hWin;
}

// USER START (Optionally insert additional public code)
// USER END

/*************************** End of file ****************************/
