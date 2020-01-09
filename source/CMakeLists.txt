cmake_minimum_required(VERSION 3.3)

include("${CMAKE_CURRENT_LIST_DIR}/../library/ubinos/config/common.cmake")

project(exprjapp)
project_begin()
project_add_library(ubinos)
project_add_library(exprjlib)
project_end()

