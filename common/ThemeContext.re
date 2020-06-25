let themeCtx = React.createContext();

module ThemeProvider = {
  let makeProps = (~value, ~children, ()) => {
    "value": value,
    "children": children,
  };
  let make = React.Context.provider(themeCtx);
} /* let default = make*/;

// type store = {
//   colorMode: string => unit,
//   setColorMode: (string => string) => unit,
// };
// let store = {colorMode: _ => (), setColorMode: _ => ()};

// let themeCtx = React.createContext(store);

// module ThemeProvider = {
//   let makeProps = (~value, ~children, ()) => {
//     "value": value,
//     "children": children,
//   };

//   let make = React.Context.provider(themeCtx);
// };

// [@react.component]
// let make = (~children) => {
//   let (colorMode, setColorMode) = React.useState(() => "");

//   React.useEffect0(() => {
//     let root = [%raw
//       {|window.document.documentElement.style.getPropertyValue("--initial-color-mode")|}
//     ];
//     setColorMode(_ => root);
//     None;
//   });

//   let contextValue =
//     React.useMemo2(
//       () => {
//         let colorMode = newVal => {
//           let root = [%raw "window.document.documentElement"];
//           Dom.Storage.setItem(
//             Constants.color_mode_key,
//             newVal,
//             Dom.Storage.localStorage,
//           );
//           let x = Constants.colors;
//           let objEntries = [%raw
//             {|
//             Object.entries(x).forEach(([name, colorByTheme]) => {
//               const cssVarName = `--color-${name}`;
//               root.style.setProperty(cssVarName, colorByTheme[newValue]);
//             })
//           |}
//           ];

//           let _ = objEntries(x, root);
//           setColorMode(_ => newVal);
//         };
//         {colorMode, setColorMode};
//       },
//       (colorMode, setColorMode),
//     );

//   <ThemeProvider value=contextValue> children </ThemeProvider>;
// };