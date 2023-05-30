# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Crash handler for KDE software"
SUMMARY = "Crash handler for KDE software"
HOMEPAGE = "https://invent.kde.org/plasma/drkonqi"
LICENSE = "BSD-3-Clause & BSD-2-Clause & CC0-1.0 & GPL-2.0-only & GPL-2.0-or-later & GPL-3.0-only & LGPL-2.1-only & LGPL-3.0-only & LGPL-3.0-or-later & LicenseRef-KDE-Accepted-LGPL & LicenseRef-KDE-Accepted-GPL"

DEPENDS = " \
    kidletime  \
    syntax-highlighting \
    kuserfeedback \
    kirigami \
    kitemmodels \
    kuserfeedback \
    qtdeclarative-native \
    qttools-native \
    systemd \
    qttools \
"

inherit cmake_plasma
inherit reuse_license_checksums
inherit kcmutils 

KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${libdir}/systemd/system/ \
"