### BEGIN ejudge auto-generated makefile ###
EJUDGE_PREFIX_DIR ?= /opt/ejudge
EJUDGE_CONTESTS_HOME_DIR ?= /home/judges
EJUDGE_LOCAL_DIR ?= /var/lib/ejudge
EJUDGE_SERVER_BIN_PATH ?= /opt/ejudge/libexec/ejudge/bin

CC = gcc
CFLAGS = -Wall -g -O2 -std=gnu99 -Wno-pointer-sign
CLIBS = -lm
CLIBCHECKERFLAGS = -Wall -Wno-pointer-sign -g -std=gnu99 -O2 -I${EJUDGE_PREFIX_DIR}/include/ejudge -L${EJUDGE_PREFIX_DIR}/lib -Wl,--rpath,${EJUDGE_PREFIX_DIR}/lib
CLIBCHECKERLIBS = -lchecker -lm

EXECUTE = ${EJUDGE_PREFIX_DIR}/bin/ejudge-execute
EXECUTE_FLAGS =  --use-stdin --use-stdout --test-pattern=%03d.dat --corr-pattern=%03d.ans

NORMALIZE = ${EJUDGE_SERVER_BIN_PATH}/ej-normalize
NORMALIZE_FLAGS = --workdir=tests --test-pattern=%03d.dat --corr-pattern=%03d.ans --type=nl

all : check
check_settings : all normalize


check : check.c
	${CC} -DEJUDGE  ${CLIBCHECKERFLAGS} check.c -ocheck ${CLIBCHECKERLIBS}


normalize :
	${NORMALIZE} ${NORMALIZE_FLAGS} --all-tests

clean :
	-rm -f *.o *.class *.exe *~ *.bak check

### END ejudge auto-generated makefile ###
