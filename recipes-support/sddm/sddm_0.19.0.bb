# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
# use unreleased tag for fixing build with Qt 5.15.3
SRCREV = "58a35178b75aada974088350f9b89db45f5c3800"
PV = "0.19.0+git${SRCPV}"

SRC_URI += "git://github.com/sddm/${BPN};nobranch=1;protocol=https \
           "
