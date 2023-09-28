### BEGIN ejudge auto-generated makefile ###
EJUDGE_PREFIX_DIR ?= /opt/ejudge
EJUDGE_CONTESTS_HOME_DIR ?= /home/judges
EJUDGE_LOCAL_DIR ?= /var/lib/ejudge
EJUDGE_SERVER_BIN_PATH ?= /opt/ejudge/libexec/ejudge/bin

CC = gcc
CFLAGS = -Wall -g -O2 -std=gnu99 -Wno-pointer-sign
CLIBS = -lm

EXECUTE = ${EJUDGE_PREFIX_DIR}/bin/ejudge-execute
EXECUTE_FLAGS =  --use-stdin --use-stdout --test-pattern=%03d.dat --corr-pattern=%03d.ans

NORMALIZE = ${EJUDGE_SERVER_BIN_PATH}/ej-normalize
NORMALIZE_FLAGS = --workdir=tests --test-pattern=%03d.dat --corr-pattern=%03d.ans --type=nl

all : solutions/G
check_settings : all normalize



normalize :
	${NORMALIZE} ${NORMALIZE_FLAGS} --all-tests

solutions/G : solutions/G.c
	cd "solutions" && ${CC} -DEJUDGE ${CFLAGS} G.c -oG ${CLIBS}
clean :
	-rm -f *.o *.class *.exe *~ *.bak solutions/*.o solutions/G

### END ejudge auto-generated makefile ###
