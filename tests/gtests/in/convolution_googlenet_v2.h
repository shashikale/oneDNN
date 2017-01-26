INST_TEST_CASE(GoogleNetV2_Blocked_part1,
    PARAMS(nchw, Ohwi8o, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1,   3, 224, 224,  64, 112, 112, 7, 7, 3, 3, 2, 2),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1,  64,  56,  56,  64,  56,  56, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1,  64,  56,  56, 192,  56,  56, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 192,  28,  28,  64,  28,  28, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 192,  28,  28,  64,  28,  28, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1,  64,  28,  28,  64,  28,  28, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 192,  28,  28,  64,  28,  28, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1,  64,  28,  28,  96,  28,  28, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1,  96,  28,  28,  96,  28,  28, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 192,  28,  28,  32,  28,  28, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 256,  28,  28,  64,  28,  28, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 256,  28,  28,  64,  28,  28, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1,  64,  28,  28,  96,  28,  28, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 256,  28,  28,  64,  28,  28, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1,  64,  28,  28,  96,  28,  28, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1,  96,  28,  28,  96,  28,  28, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 256,  28,  28,  64,  28,  28, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 320,  28,  28, 128,  28,  28, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 128,  28,  28, 160,  14,  14, 3, 3, 1, 1, 2, 2),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 320,  28,  28,  64,  28,  28, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1,  64,  28,  28,  96,  28,  28, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1,  96,  28,  28,  96,  14,  14, 3, 3, 1, 1, 2, 2),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 576,   4,   4, 128,   4,   4, 1, 1, 0, 0, 1, 1)
);

INST_TEST_CASE(GoogleNetV2_Blocked16_part1,
    PARAMS(nchw, Ohwi8o, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1,   3, 224, 224,  64, 112, 112, 7, 7, 3, 3, 2, 2),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1,  64,  56,  56,  64,  56,  56, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1,  64,  56,  56, 192,  56,  56, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 192,  28,  28,  64,  28,  28, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 192,  28,  28,  64,  28,  28, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1,  64,  28,  28,  64,  28,  28, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 192,  28,  28,  64,  28,  28, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1,  64,  28,  28,  96,  28,  28, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1,  96,  28,  28,  96,  28,  28, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 192,  28,  28,  32,  28,  28, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 256,  28,  28,  64,  28,  28, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 256,  28,  28,  64,  28,  28, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1,  64,  28,  28,  96,  28,  28, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 256,  28,  28,  64,  28,  28, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1,  64,  28,  28,  96,  28,  28, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1,  96,  28,  28,  96,  28,  28, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 256,  28,  28,  64,  28,  28, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 320,  28,  28, 128,  28,  28, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 128,  28,  28, 160,  14,  14, 3, 3, 1, 1, 2, 2),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 320,  28,  28,  64,  28,  28, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1,  64,  28,  28,  96,  28,  28, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1,  96,  28,  28,  96,  14,  14, 3, 3, 1, 1, 2, 2),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 576,   4,   4, 128,   4,   4, 1, 1, 0, 0, 1, 1)
);

INST_TEST_CASE(GoogleNetV2_Blocked_part2,
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 576,  14,  14, 224,  14,  14, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 576,  14,  14,  64,  14,  14, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1,  64,  14,  14,  96,  14,  14, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 576,  14,  14,  96,  14,  14, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1,  96,  14,  14, 128,  14,  14, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 128,  14,  14, 128,  14,  14, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 576,  14,  14, 128,  14,  14, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 576,  14,  14, 192,  14,  14, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 576,  14,  14,  96,  14,  14, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1,  96,  14,  14, 128,  14,  14, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 576,  14,  14,  96,  14,  14, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1,  96,  14,  14, 128,  14,  14, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 128,  14,  14, 128,  14,  14, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 576,  14,  14, 128,  14,  14, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 576,  14,  14, 160,  14,  14, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 576,  14,  14, 128,  14,  14, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 128,  14,  14, 160,  14,  14, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 576,  14,  14, 128,  14,  14, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 128,  14,  14, 160,  14,  14, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 160,  14,  14, 160,  14,  14, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 576,  14,  14,  96,  14,  14, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 576,  14,  14,  96,  14,  14, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 576,  14,  14, 128,  14,  14, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 128,  14,  14, 192,  14,  14, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 576,  14,  14, 160,  14,  14, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 160,  14,  14, 192,  14,  14, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 192,  14,  14, 192,  14,  14, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 576,  14,  14,  96,  14,  14, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 576,  14,  14, 128,  14,  14, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 128,  14,  14, 192,  7,    7, 3, 3, 1, 1, 2, 2),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 576,  14,  14, 192,  14,  14, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 192,  14,  14, 256,  14,  14, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 256,  14,  14, 256,   7,   7, 3, 3, 1, 1, 2, 2),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1,1024,   2,   2, 128,   2,   2, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1,1024,   7,   7, 352,   7,   7, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1,1024,   7,   7, 192,   7,   7, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 192,   7,   7, 320,   7,   7, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1,1024,   7,   7, 160,   7,   7, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 160,   7,   7, 224,   7,   7, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 224,   7,   7, 224,   7,   7, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1,1024,   7,   7, 128,   7,   7, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1,1024,   7,   7, 352,   7,   7, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1,1024,   7,   7, 192,   7,   7, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 192,   7,   7, 320,   7,   7, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1,1024,   7,   7, 192,   7,   7, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 192,   7,   7, 224,   7,   7, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1, 224,   7,   7, 224,   7,   7, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED, FMT_WEIGHTS_BLOCKED, FMT_BIAS, FMT_DATA_BLOCKED,
        2, 1,1024,   7,   7, 128,   7,   7, 1, 1, 0, 0, 1, 1)
);

INST_TEST_CASE(GoogleNetV2_Blocked16_part2,
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 576,  14,  14, 224,  14,  14, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 576,  14,  14,  64,  14,  14, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1,  64,  14,  14,  96,  14,  14, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 576,  14,  14,  96,  14,  14, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1,  96,  14,  14, 128,  14,  14, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 128,  14,  14, 128,  14,  14, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 576,  14,  14, 128,  14,  14, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 576,  14,  14, 192,  14,  14, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 576,  14,  14,  96,  14,  14, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1,  96,  14,  14, 128,  14,  14, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 576,  14,  14,  96,  14,  14, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1,  96,  14,  14, 128,  14,  14, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 128,  14,  14, 128,  14,  14, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 576,  14,  14, 128,  14,  14, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 576,  14,  14, 160,  14,  14, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 576,  14,  14, 128,  14,  14, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 128,  14,  14, 160,  14,  14, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 576,  14,  14, 128,  14,  14, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 128,  14,  14, 160,  14,  14, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 160,  14,  14, 160,  14,  14, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 576,  14,  14,  96,  14,  14, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 576,  14,  14,  96,  14,  14, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 576,  14,  14, 128,  14,  14, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 128,  14,  14, 192,  14,  14, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 576,  14,  14, 160,  14,  14, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 160,  14,  14, 192,  14,  14, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 192,  14,  14, 192,  14,  14, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 576,  14,  14,  96,  14,  14, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 576,  14,  14, 128,  14,  14, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 128,  14,  14, 192,  7,    7, 3, 3, 1, 1, 2, 2),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 576,  14,  14, 192,  14,  14, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 192,  14,  14, 256,  14,  14, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 256,  14,  14, 256,   7,   7, 3, 3, 1, 1, 2, 2),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1,1024,   2,   2, 128,   2,   2, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1,1024,   7,   7, 352,   7,   7, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1,1024,   7,   7, 192,   7,   7, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 192,   7,   7, 320,   7,   7, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1,1024,   7,   7, 160,   7,   7, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 160,   7,   7, 224,   7,   7, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 224,   7,   7, 224,   7,   7, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1,1024,   7,   7, 128,   7,   7, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1,1024,   7,   7, 352,   7,   7, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1,1024,   7,   7, 192,   7,   7, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 192,   7,   7, 320,   7,   7, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1,1024,   7,   7, 192,   7,   7, 1, 1, 0, 0, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 192,   7,   7, 224,   7,   7, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1, 224,   7,   7, 224,   7,   7, 3, 3, 1, 1, 1, 1),
    PARAMS(FMT_DATA_BLOCKED16, FMT_WEIGHTS_BLOCKED16, FMT_BIAS, FMT_DATA_BLOCKED16,
        2, 1,1024,   7,   7, 128,   7,   7, 1, 1, 0, 0, 1, 1)
);
