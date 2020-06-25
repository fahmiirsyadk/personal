open Lib;
type mql = {matches: bool};

[@react.component]
let make = () => {
  open Constants;
  let darkMode = useDarkMode(false);
  React.useEffect2(
    () => {
      let colorMode = darkMode.value === true ? "dark" : "light";
      let root = [%raw {|document.documentElement|}];

      let entryObj = [%raw
        {| function(colors, root, colorMode) {
          Object.entries(colors).forEach(([name, colorByTheme]) => {
            const cssVarName = `--color-${name}`
            root.style.setProperty(cssVarName, colorByTheme[colorMode])
          })
        }
    |}
      ];

      let _ = entryObj(colors, root, colorMode);

      None;
    },
    (darkMode, darkMode.value),
  );

  React.null;
};

let default = make;