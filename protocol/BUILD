load("@platformio_rules//platformio:platformio.bzl", "platformio_library")

cc_library(
    name = "lib",
    srcs = glob([ "src/**/*.cc" ]),
    hdrs = glob([ "include/**/*.h" ]),
    copts = [ "-Iprotocol/include" ],
    visibility = [ "//visibility:public" ]
)

platformio_library(
    name = "arduino",
    hdr = "include/protocol.h",
    add_hdrs = glob([ "include/**/*.h" ], exclude = ["include/platform.h"]),
    add_srcs = glob([ "src/**/*.cc" ]),
    visibility = [ "//visibility:public" ]
)

cc_test(
    name = "test",
    srcs = glob([ "test/*.cc" ]),
    copts = [ "-Iexternal/gtest/include", "-Iprotocol/include" ],
    deps = [ "@gtest//:gtest", "//protocol:lib" ]
)