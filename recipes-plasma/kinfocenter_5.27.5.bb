# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

require ${PN}.inc
SRC_URI += " \
   https://download.kde.org/stable/plasma/${PV}/kinfocenter-${PV}.tar.xz \
"
SRC_URI[sha256sum] = "0be970049e2be8a5c21128a0ce3ba69e6b82415268a1ed1aa0a30c77c94adc48"

