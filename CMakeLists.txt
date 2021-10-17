cmake_minimum_required(VERSION 3.19)
project(OOP_game)

set(CMAKE_CXX_STANDARD 20)

add_executable(OOP_game main.cpp
                        field/cells/Abstract_cell.h
                        field/cells/Cell.h
                        field/cells/Entrance.h
                        field/cells/Exit.h
                        field/cells/Wall.h
                        game_obj/Game_obj.h
                        field/Field.h
                        field/Field.cpp
                        field/Field_Builder.h
                        field/Field_Builder.cpp
                        views/Field_View.h
                        views/Field_View.cpp game_obj/Characters.h)


message("Project built")