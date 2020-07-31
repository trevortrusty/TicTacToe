Set WshShell = CreateObject("WScript.Shell") 
Set WshEnv = WshShell.Environment("SYSTEM") 
WshEnv("Path") = WshEnv("Path") & ";myPath"