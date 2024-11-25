// ---------------------------------------------------------------------------
// wxpropgrid.h - headers and wxLua types for wxLua binding
//
// This file was generated by genwxbind.lua 
// Any changes made to this file will be lost when the file is regenerated
// ---------------------------------------------------------------------------

#ifndef __HOOK_WXLUA_wxpropgrid_H__
#define __HOOK_WXLUA_wxpropgrid_H__

#include "wxbind/include/wxbinddefs.h"
#include "wxluasetup.h"
#include "wxbind/include/wxcore_bind.h"
#include "wx/propgrid/property.h"

#include "wxlua/wxlstate.h"
#include "wxlua/wxlbind.h"

// ---------------------------------------------------------------------------
// Check if the version of binding generator used to create this is older than
//   the current version of the bindings.
//   See 'bindings/genwxbind.lua' and 'modules/wxlua/wxldefs.h'
#if WXLUA_BINDING_VERSION > 44
#   error "The WXLUA_BINDING_VERSION in the bindings is too old, regenerate bindings."
#endif //WXLUA_BINDING_VERSION > 44
// ---------------------------------------------------------------------------

// binding class
class WXDLLIMPEXP_BINDWXPROPGRID wxLuaBinding_wxpropgrid : public wxLuaBinding
{
public:
    wxLuaBinding_wxpropgrid();


private:
    DECLARE_DYNAMIC_CLASS(wxLuaBinding_wxpropgrid)
};


// initialize wxLuaBinding_wxpropgrid for all wxLuaStates
extern WXDLLIMPEXP_BINDWXPROPGRID wxLuaBinding* wxLuaBinding_wxpropgrid_init();

// ---------------------------------------------------------------------------
// Includes
// ---------------------------------------------------------------------------

#if wxLUA_USE_wxPropertyGrid && wxCHECK_VERSION(2,9,0) && wxUSE_PROPGRID
    #include "wx/propgrid/advprops.h"
    #include "wx/propgrid/editors.h"
    #include "wx/propgrid/manager.h"
    #include "wx/propgrid/property.h"
    #include "wx/propgrid/propgrid.h"
    #include "wx/propgrid/propgriddefs.h"
    #include "wx/propgrid/propgridiface.h"
    #include "wx/propgrid/propgridpagestate.h"
    #include "wx/propgrid/props.h"
#endif // wxLUA_USE_wxPropertyGrid && wxCHECK_VERSION(2,9,0) && wxUSE_PROPGRID

// ---------------------------------------------------------------------------
// Lua Tag Method Values and Tables for each Class
// ---------------------------------------------------------------------------

#if (wxCHECK_VERSION(3,2,0)) && (wxLUA_USE_wxPropertyGrid && wxCHECK_VERSION(2,9,0) && wxUSE_PROPGRID)
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxArrayStringProperty;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxDirProperty;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxEditorDialogProperty;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxFileProperty;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxFloatProperty;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxFontProperty;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxIntProperty;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxLongStringProperty;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxMultiChoiceProperty;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxNumericProperty;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxUIntProperty;
#endif // (wxCHECK_VERSION(3,2,0)) && (wxLUA_USE_wxPropertyGrid && wxCHECK_VERSION(2,9,0) && wxUSE_PROPGRID)

#if (wxLUA_USE_wxPropertyGrid && wxCHECK_VERSION(2,9,0) && wxUSE_PROPGRID) && (wxPG_INCLUDE_CHECKBOX)
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPGCheckBoxEditor;
#endif // (wxLUA_USE_wxPropertyGrid && wxCHECK_VERSION(2,9,0) && wxUSE_PROPGRID) && (wxPG_INCLUDE_CHECKBOX)

#if (wxLUA_USE_wxPropertyGrid && wxCHECK_VERSION(2,9,0) && wxUSE_PROPGRID) && (wxUSE_SPINBTN && wxLUA_USE_wxSpinButton)
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPGSpinCtrlEditor;
#endif // (wxLUA_USE_wxPropertyGrid && wxCHECK_VERSION(2,9,0) && wxUSE_PROPGRID) && (wxUSE_SPINBTN && wxLUA_USE_wxSpinButton)

#if wxLUA_USE_wxPropertyGrid && wxCHECK_VERSION(2,9,0) && wxUSE_PROPGRID
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxBoolProperty;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxColourProperty;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxColourPropertyValue;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxCursorProperty;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxDateProperty;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxEditEnumProperty;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxEnumProperty;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxFlagsProperty;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxImageFileProperty;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxNumericPropertyValidator;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPGArrayEditorDialog;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPGArrayStringEditorDialog;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPGAttributeStorage;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPGCell;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPGCellData;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPGCellRenderer;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPGChoiceAndButtonEditor;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPGChoiceEditor;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPGChoiceEntry;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPGChoices;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPGChoicesData;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPGComboBoxEditor;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPGDefaultRenderer;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPGEditor;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPGEditorDialogAdapter;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPGMultiButton;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPGPaintData;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPGPropArgCls;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPGProperty;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPGRootProperty;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPGTextCtrlAndButtonEditor;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPGTextCtrlEditor;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPGVIterator;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPGVIteratorBase;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPGValidationInfo;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPGWindowList;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPropertyCategory;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPropertyGrid;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPropertyGridConstIterator;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPropertyGridEvent;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPropertyGridHitTestResult;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPropertyGridInterface;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPropertyGridIteratorBase;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPropertyGridManager;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPropertyGridPage;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxPropertyGridPageState;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxStringProperty;
    extern WXDLLIMPEXP_DATA_BINDWXPROPGRID(int) wxluatype_wxSystemColourProperty;
#endif // wxLUA_USE_wxPropertyGrid && wxCHECK_VERSION(2,9,0) && wxUSE_PROPGRID



#endif // __HOOK_WXLUA_wxpropgrid_H__

