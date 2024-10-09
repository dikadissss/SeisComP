#!/bin/bash
HYPO71PC_BINARY=Hypo71PC
HYPO71PC_HOME=/home/sysop/seiscomp/share/hypo71

# Jumping into the right directory
cd ${HYPO71PC_HOME}/

# Executing binary with input file as argument
${SEISCOMP_ROOT}/bin/$HYPO71PC_BINARY < input
