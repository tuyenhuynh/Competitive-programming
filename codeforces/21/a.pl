#/*****************************************************************************
# * codeforces:   knst
# * topcoder:     knstqq
# * projecteuler: knstqq
# * **************************************************************************/

$s = <>;
if ($s =~ m|^[\w]{1,16}@([\w]{1,16}(\.[\w]{1,16})*)(/[\w]{1,16})?$|) {
    if (length($1) <= 32) {
        print "YES";
    } else {
        print "NO";
    }
} else {
    print "NO";
}
