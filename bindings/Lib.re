type useDarkMode = {value: bool};
[@bs.module "use-dark-mode"] external useDarkMode: bool => 'a = "default";

module CacheProvider = {
  [@bs.module "@emotion/core"] [@react.component]
  external make: (~value: 'a, ~children: React.element) => React.element =
    "CacheProvider";
};

module GoogleFonts = {
  [@bs.module "next-google-fonts"] [@react.component]
  external make: (~href: string) => React.element = "default";
};

/* href="https://fonts.googleapis.com/css2?family=Inter:wght@400;500;700&family=Libre+Baskerville:wght@700&display=swap" */
