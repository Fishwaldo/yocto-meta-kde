# SPDX-FileCopyrightText: 2021-2022 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "QtKeychain"
HOMEPAGE = "https://github.com/frankosterfeld/qtkeychain"
LICENSE = "BSD-3-Clause"
LIC_FILES_CHKSUM = "file://COPYING;md5=ebece3896618ecf0b60c4fade17f026f"
PR = "r0"

DEPENDS = " \
    qtbase \
    qttools \
    qttools-native \
    libsecret \
"

SRC_URI = "git://github.com/frankosterfeld/qtkeychain.git;nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_qt5
inherit pkgconfig

FILES:${PN} += " \
    ${datadir}/qt5keychain/translations \
"

FILES:${PN}-dev += " \
    ${prefix}/mkspecs \
"
