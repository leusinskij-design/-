add_library(game_lib STATIC 
    src/empty.cpp 
)

target_include_directories(game_lib PUBLIC include)