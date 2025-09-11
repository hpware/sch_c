var ieVersion = function () {
    var userAgent = window.navigator.userAgent;
    var matchMSIE = userAgent.match("MSIE");
    if (msie > 0 || !!navigator.userAgent.match(/Trident.*rv\:11\./)) {
      window.location.href="/ie.html";
    }
    return;
}
ieVersion();