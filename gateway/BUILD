cc_binary(
    name = "main",
    srcs = glob([ "src/**/*.cc" ]),
    copts = [ "-Igateway/include", "-Iprotocol/include" ],
    deps = [ "//protocol:lib" ]
)
