#
# musl specific configuration
#

LIBCEXTENSION = "-musl"

# Add uclibc overrides to the overrides.
LIBCOVERRIDE = ":libc-musl"
OVERRIDES .= "${LIBCOVERRIDE}"

PREFERRED_PROVIDER_virtual/libc ?= "musl"
PREFERRED_PROVIDER_virtual/libiconv ?= "musl"
PREFERRED_PROVIDER_virtual/libintl ?= "gettext"
PREFERRED_PROVIDER_virtual/nativesdk-libintl ?= "nativesdk-glibc"
PREFERRED_PROVIDER_virtual/nativesdk-libiconv ?= "nativesdk-glibc"

USE_NLS ?= "no"

CXXFLAGS += "-fvisibility-inlines-hidden"

IMAGE_LINGUAS = ""

LIBC_DEPENDENCIES = "\
    musl \
    musl-dbg \
    musl-dev \
    "
