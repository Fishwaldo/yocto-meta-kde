# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
#This is v0.20.0 tag. 
SRCREV = "a9a664df36c2109d999aa841df7c8856ff68f350"

SRC_URI += "git://github.com/sddm/${BPN};nobranch=1;protocol=https \
           "
