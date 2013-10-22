DESCRIPTION = "gvfs is a userspace virtual filesystem"
LICENSE = "LGPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=3bf50002aefd002f49e7bb854063f7e7"

inherit gnome

INC_PR = "r0"

GNOME_COMPRESS_TYPE = "xz"

SRC_URI[archive.md5sum] = "7ca2acfa4dffd94b95f4b8713a346607"
SRC_URI[archive.sha256sum] = "417a15e53fc20c2e1a1de5ea5903430b0ac2e98178d2fcbcfc8fba3082e801ea"
SRC_URI += " \
    file://0001-Revert-Respect-UDISKS_AUTOMOUNT_HINT-available-in-re.patch \
    file://0002-Adapt-to-GLib-2.31-deprecations-and-thread-API-chang.patch \
    file://0003-Adapt-to-glib-mutex-API-changes.patch \
    file://0004-Adapt-to-glib-thread-API-changes.patch \
"

EXTRA_OECONF = "--with-archive-includes=${STAGING_INCDIR} \
                --with-archive-libs=${STAGING_LIBDIR} \
"

FILES_${PN} += "${datadir}/dbus-1/services/*"

