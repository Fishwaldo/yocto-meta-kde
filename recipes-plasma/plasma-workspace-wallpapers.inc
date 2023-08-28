# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

SUMMARY = "Wallpapers for Plasma Workspaces"
DESCRIPTION = "Wallpapers for Plasma Workspaces"
HOMEPAGE = "https://invent.kde.org/plasma/plasma-workspace-wallpapers"
LICENSE = "LGPL-3.0-only"
LIC_FILES_CHKSUM = " \
    file://COPYING.LGPL3;md5=e6a600fd5e1d9cbde2d983680233ad02 \
"

inherit cmake_plasma
inherit kconfig

FILES:${PN} += " \
    ${datadir}/wallpapers/* \
"
