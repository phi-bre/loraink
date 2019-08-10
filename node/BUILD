load("@platformio_rules//platformio:platformio.bzl", "platformio_library", "platformio_project")

platformio_library(
    name = "lib",
    hdr = "include/lib.h",
    add_hdrs = glob([ "include/**/*.h" ], exclude = [ "include/lib.h" ]),
    add_srcs = glob([ "src/**/*.cc" ])
)

platformio_project(
    name = "main",
    src = "main.cc",
    board = "heltec_wifi_lora_32_V2",
    platform = "espressif32",
    deps = [ "//node:lib", "//protocol:arduino" ]
)
