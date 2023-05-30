# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

require ${PN}.inc
SRC_URI += " \
   https://download.kde.org/stable/plasma/${PV}/khotkeys-${PV}.tar.xz \
"
SRC_URI[sha256sum] = "83e85326de1e3b430ebd0364955e2167ccee50d33fdaaba9fa0e5cf488e6ec20"

