WORKSPACE=..
LUBAN_DLL=${WORKSPACE}/Tools/Luban/Luban.dll
CONF_ROOT=.

dotnet ${LUBAN_DLL} \
    -t all \
	-f \
    --conf ${CONF_ROOT}/luban.conf \
    -x pathValidator.rootDir=${WORKSPACE}/RPGClock

# read s