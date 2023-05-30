# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

require ${PN}.inc
SRC_URI += " \
   https://download.kde.org/stable/plasma/${PV}/drkonqi-${PV}.tar.xz \
"
SRC_URI[sha256sum] = "448daeb23a3c030c872507a29e5eecb23b1cd3b015845d3664ec79fa5db9ac56"
