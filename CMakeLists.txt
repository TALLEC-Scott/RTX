cmake_minimum_required(VERSION 3.24)
project(rtx)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(rtx
        color.cc
        color.hh
        image.cc
        image.hh
        uniform_texture.cc
        texture.hh
        object.hh
        point.cc
        point.hh
        sphere.cc
        sphere.hh
        vector.hh
        ray.hh
        ray.cc
        uniform_texture.hh
        light.cc
        light.hh
        Point_Light.cc
        Point_Light.hh
        camera.hh
        Engine.hh
        Engine.cc vector.cc)
