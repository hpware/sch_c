// navbar animations (very cool)
const navbar = document.getElementById("navbar");
const navbarTitle = document.getElementById("nav_title");
const navbarLinks = document.getElementById("nav_links");
const defaultNavBarClasses =
  "min-h-12 fixed z-50 inset-x-0 flex flex-row justify-between rounded text-center border transition-all duration-300 z-50";
// on init (onMounted)
document.addEventListener("DOMContentLoaded", (event) => {
  handleScroll();
  window.addEventListener("scroll", handleScroll);
});
// scroll stuff ig
function handleScroll() {
  if (window.scrollY > 10) {
    navbar.className = `${defaultNavBarClasses} mt-5 rounded-2xl mx-7 shadow border-gray-300/30 p-2 backdrop-blur-lg shadow-lg`;
  } else {
    navbar.className = `${defaultNavBarClasses} mt-0 p-4 rounded-xl border-gray-300/0`;
  }
}
