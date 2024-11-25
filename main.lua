package.path = package.path .. ";./lib/wxLua/bindings/?.lua"
package.cpath = package.cpath .. ";./lib/wxLua/bin/?.dll"

-- Modules --

local wx = require("wx")

-- Variables --

local ASPECT_RATIO = 16/9


-- Instances --

local frame = wx.wxFrame(
    wx.NULL,                -- Sin padre
    wx.wxID_ANY,            -- ID automático
    "League of Legends AutoPick",         -- Título
    wx.wxDefaultPosition,   -- Posición predeterminada
    wx.wxSize(400, 300)     -- Tamaño de la ventana
)

frame:Show(true)

wx.wxGetApp():MainLoop()