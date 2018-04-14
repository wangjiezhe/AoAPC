#!/usr/bin/env bash

read -p "Please enter the chapter number: " chp
read -p "Please enter the number of examples: " num1
read -p "Please enter the number of exercises: " num2

mkdir "ch${chp}"
pushd "ch${chp}"

touch CMakeLists.txt

for i in $(seq 1 ${num1})
do
    touch "${chp}-${i}.c"
    echo "add_executable(${chp}-${i} ${chp}-${i}.c)" >> CMakeLists.txt
done

for i in $(seq 1 ${num2})
do
    touch "ex${chp}-${i}.c"
    echo "add_executable(ex${chp}-${i} ex${chp}-${i}.c)" >> CMakeLists.txt
done

touch "test${chp}.c"

popd

sed "\$i add_subdirectory\(ch${chp}\)" -i CMakeLists.txt
