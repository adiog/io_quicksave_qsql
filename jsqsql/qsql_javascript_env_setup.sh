#!/bin/bash

function install_node_and_deps_on_debian()
{
    curl -sL https://deb.nodesource.com/setup_10.x | sudo -E bash -
    sudo apt-get install -y nodejs
    sudo apt-get install nodejs nodejs-legacy npm -y
    sudo npm config set strict-ssl false
    sudo npm install antlr4 --global
    sudo npm install browserify --global
    sudo npm install node-minify uglify-js --global
}

install_node_and_deps_on_debian
