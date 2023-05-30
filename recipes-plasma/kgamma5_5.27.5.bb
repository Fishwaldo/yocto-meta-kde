# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

require ${PN}.inc
SRC_URI += " \
   https://download.kde.org/stable/plasma/${PV}/kgamma5-${PV}.tar.xz \
"
SRC_URI[sha256sum] = "7b6626473944a8b4afb8e986a9d06ffe9afb6f24938f24053b33fcfb5ce84dd9"

