#!/bin/bash

function install_node_npm_and_lints_on_debian()
{
    sudo apt-get install nodejs nodejs-legacy npm
    sudo npm install jslint jshint --global
}

install_node_npm_and_lints_on_debian

