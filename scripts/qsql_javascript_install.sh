#!/bin/bash

if [[ -z "${QS_ROOT}" ]];
then
    echo "Use . /env.sh"
    exit 1
fi


function install()
{
    TEMPJS=`mktemp`
    browserify ${WORKSPACE}/qsql/js/qsqlMain.js --outfile ${TEMPJS}
    #uglifyjs ${TEMPJS} --compress --mangle --output web_static/js/qsql.min.js
    cp ${TEMPJS} ${WORKSPACE}/web_static/js/qsql.min.js
}

install

