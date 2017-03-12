#!/bin/bash
# This file is a part of quicksave project.
# Copyright (c) 2016 Aleksander Gajewski <adiog@brainfuck.pl>.

. ${WORKSPACE}/env.sh

CLIENT_PLUGIN_FIREFOX=`find ${WORKSPACE}/client_plugin_firefox -name "*.js" ! -name "jquery*.min.js"`
CLIENT_PLUGIN_CHROME=`find ${WORKSPACE}/client_plugin_chrome -name "*.js" ! -name "jquery*.min.js"`
WEB_STATIC=`find ${WORKSPACE}/web_static/javascript* ${WORKSPACE}/web_static/js/quicksave.js -name "*.js"`
JAVASCRIPT_FILES="$CLIENT_PLUGIN_CHROME $CLIENT_PLUGIN_FIREFOX $WEB_STATIC"

jslint $JAVASCRIPT_FILES
jshint $JAVASCRIPT_FILES

exit 0

