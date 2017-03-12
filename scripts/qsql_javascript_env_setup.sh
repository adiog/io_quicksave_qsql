#!/bin/bash

. ${WORKSPACE}/env.sh


function install_node_and_deps_on_debian()
{
    sudo apt-get install nodejs nodejs-legacy npm
    sudo npm install antlr4 --global
    sudo npm install browserify --global
    sudo npm install node-minify uglify-js --global
}

install_node_and_deps_on_debian
