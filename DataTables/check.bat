set WORKSPACE=..
set LUBAN_DLL=%WORKSPACE%\Tools\Luban\Luban.dll
set CONF_ROOT=.

dotnet %LUBAN_DLL% ^
    -t all ^
    -f ^
    --conf %CONF_ROOT%\luban.conf ^
    -x l10n.provider=default ^
    -x l10n.textFile.path=%CONF_ROOT%\Datas\Global\Language.xlsx ^
    -x l10n.textFile.keyFieldName=key ^
    -x pathValidator.rootDir=%WORKSPACE%\RPGClock
    
pause