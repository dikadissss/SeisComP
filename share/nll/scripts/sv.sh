#!/bin/bash

HOME=/home/sysop/seiscomp/share/nll

FILE=${HOME}/data/output/$1.loc.hyp
java -classpath ${HOME}/bin/SeismicityViewer50.jar net.alomax.seismicity.Seismicity $FILE
