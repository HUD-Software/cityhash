#include <catch2/catch_all.hpp>

#include <cityhash/city.h>
#include <cityhash/citycrc.h>

constexpr const char *LIPSUM =
    "Ut venenatis velit sit amet bibendum sodales.Ut laoreet cursus quam, in pellentesque urna ullamcorper at.Vestibulum pulvinar odio purus, sit amet vestibulum quam pharetra vitae.Morbi posuere est eu arcu interdum, \
et porttitor lacus tempor.Nulla non libero porta, faucibus ex eleifend, sodales magna.Sed eget scelerisque sem.Pellentesque vel nulla et ipsum ultrices ultricies. \
Mauris molestie, dolor non porttitor lobortis, erat nunc fringilla nulla, a consequat justo odio ut lorem.Cras maximus tristique erat, sit amet facilisis urna euismod in.\
Maecenas sit amet congue magna.Donec nisl mauris, tempus eu mauris eget, iaculis sodales libero.Nulla hendrerit bibendum magna, at egestas leo semper ac.Donec porttitor ut orci id ornare.Praesent id nunc risus.Fusce consequat tortor at enim cursus, sed mattis lorem gravida.Orci varius. ";
