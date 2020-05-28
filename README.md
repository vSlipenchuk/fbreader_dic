# fbreader_dic

on_click called script

/home/on/dic {text}

you can handle it to call external dictionary like this


t=`sdcv -n "$1" | grep -v "\-->" | grep -v Found | grep -v -e '^$'`
t=${t:0:1000}
notify-send -t 5000  "$t"





