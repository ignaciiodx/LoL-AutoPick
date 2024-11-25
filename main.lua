--Scripted by IgnaciioDX

package.cpath = package.cpath .. ";./iup/iuplua54.dll" -- Windows

--Variables--

local iup = require("iuplua")
local ASPECT_RATIO = 16/9
local RESOLUTION = iup.GetGlobal("FULLSIZE")
local SCREENWIDTH, SCREENHEIGHT = string.match(RESOLUTION, "(%d+)x(%d+)")

--Instances--


local dlg = iup.dialog {
    title = "LoL AutoPick",
    resize = "NO",
    rastersize = "1600x900",
    icon = "./bin/icon.ico"
    
}
dlg:show()

print("Printing Current Res:")
print(dlg.rastersize, dlg.size)




iup.MainLoop()