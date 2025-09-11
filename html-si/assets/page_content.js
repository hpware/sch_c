// super stupid page routing js garbage
const pageContent = document.getElementById("page_content");
const navTitle = document.getElementById("nav_title");

function updatePage() {
  const currentRoute = getPageRouteFromHash();
  console.log(currentRoute);
  const pageData = md_pageRoutes.find(route => route.slug === currentRoute);
  console.log(pageData);
  if (pageData) {
    pageContent.innerHTML = pageData.pageContent;
    document.title = `${pageData.title} | ${md_title}`;
  } else {
    pageContent.innerHTML = "<h2>Page not found</h2>";
    document.title = "404 | Not Found";
  }
}

function getPageRouteFromHash() {
  const hash = window.location.hash;
  if (hash.startsWith("#/")) {
    return hash.slice(2);
  }
  window.location.hash = "/home";
  return "home";
}

// listen stuff
document.addEventListener("DOMContentLoaded", updatePage);
window.addEventListener("hashchange", updatePage);


document.addEventListener("DOMContentLoaded", (event) => {
  navTitle.innerText = md_title;
})