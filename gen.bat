set WORKSPACE=.

set LUBAN_DLL=%WORKSPACE%\Tools\Luban\Luban.dll
set CONF_ROOT=%WORKSPACE%\DataTables

::gen-bin
dotnet %LUBAN_DLL% ^
    -t client ^
    -c cpp-sharedptr-bin ^
    -d bin  ^
    --conf %CONF_ROOT%\luban.conf ^
    -x outputCodeDir=%WORKSPACE%\Source\LuabnTest\Gen ^
    -x outputDataDir=%WORKSPACE%\Content\Bytes ^
    -x pathValidator.rootDir=%WORKSPACE%\RPGClock

pause