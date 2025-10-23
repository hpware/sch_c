// ==UserScript==
// @name         Clean TPCU SIW UI
// @namespace    http://tampermonkey.net/
// @version      2025-10-21
// @description  Simplify and clean up the TPCU SIW interface
// @author       yh
// @match        https://siw.tpcu.edu.tw/*
// @icon         https://www.google.com/s2/favicons?sz=64&domain=www.tpcu.edu.tw
// @grant        none
// ==/UserScript==

(function () {
  "use strict";

  const cssScript = document.createElement("script");
  cssScript.src = "https://cdn.tailwindcss.com";
  document.head.appendChild(cssScript);

  const mainFrame = window.frames["Main"];
  if (!mainFrame || !mainFrame.document) return;
  const doc = mainFrame.document;

  const removeUnwantedElements = () => {
    const unusedImages = [
      "pics/img1.png",
      "pics/tsint_logo.png",
      "pics/logo.png",
      "pics/passbook.png",
    ];

    unusedImages.forEach((src) => {
      const img = doc.querySelector(`img[src='${src}']`);
      if (img) img.remove();
    });

    doc.querySelectorAll("font").forEach((fontEl) => {
      if (fontEl.textContent.includes("請使用IE瀏覽器")) {
        fontEl.remove();
      }
    });

    const selectorsToRemove = [
      "table[style*='pics/memo.png']",
      "img[title='選課時間，學生選課請點此進入。']",
      "input[name='rst']",
      "table[bgcolor='darkgreen']",
    ];

    selectorsToRemove.forEach((selector) => {
      doc.querySelectorAll(selector).forEach((el) => el.remove());
    });
    doc
      .querySelectorAll(
        "table[style='background:url(pics/book.png) repeat-x;'] tr",
      )
      .forEach((tr, i) => {
        if (i === 1) tr.remove();
        if (i === 4) {
          let getCalc = "";
          tr.querySelectorAll("font").forEach((t2, index2) => {
            if (index2 === 1) {
              const getCalc2 = t2.innerText.trim();
              getCalc = getCalc2;
            }
          });
          console.log(getCalc);
          if (getCalc.includes("+") && getCalc.includes("=")) {
            const getCalcNumrs = getCalc.split("+");
            const endNumr =
              Number(getCalcNumrs[0]) +
              Number(getCalcNumrs[1].replaceAll("=", ""));
            console.log(endNumr);
          }
        }
      });

    doc.querySelectorAll("table[style*='pics/book.png']").forEach((table) => {
      table.style.removeProperty("background");
    });
  };

  removeUnwantedElements();
  const observer = new MutationObserver(removeUnwantedElements);
  observer.observe(doc, { childList: true, subtree: true });
})();
