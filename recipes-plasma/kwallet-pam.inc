# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "PAM Integration with KWallet - Unlock KWallet when you login"
SUMMARY = "PAM Integration with KWallet - Unlock KWallet when you login"
HOMEPAGE = "https://invent.kde.org/plasma/kwallet-pam"
LICENSE = " BSD-3-Clause & CC0-1.0 & LGPL-2.1-or-later"

SRC_URI:append = " \
    file://0001-hardcode-libgcrypt-find_package-function.patch \
    "

inherit cmake_plasma
inherit pkgconfig
inherit reuse_license_checksums


DEPENDS = " \
    kwallet \
    socat \
    libgcrypt \
"


KF5_REUSE_LICENSECHECK_ENABLED="1"

FILES:${PN} += " \
    ${libdir}/security/* \
"