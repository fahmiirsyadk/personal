import Terser from "terser";

import { colors } from "./constants.bs";

function setColorsByTheme() {
  const colors = "🌈";

  const mql = window.matchMedia("(prefers-color-scheme: dark)");
  const prefersDarkFromMQ = mql.matches;
  const storage = localStorage.getItem("darkMode");

  let colorMode = "light";

  colorMode =
    storage !== null
      ? JSON.parse(storage)
        ? "dark"
        : "light"
      : prefersDarkFromMQ
      ? "dark"
      : "light";

  const root = document.documentElement;

  Object.entries(colors).forEach(([name, colorByTheme]) => {
    const cssVarName = `--color-${name}`;

    root.style.setProperty(cssVarName, colorByTheme[colorMode]);
  });
}

export function MagicScriptTag() {
  const boundFn = String(setColorsByTheme).replace(
    '"🌈"',
    JSON.stringify(colors)
  );

  let calledFunction = `(${boundFn})()`;
  calledFunction = Terser.minify(calledFunction).code;
  return <script dangerouslySetInnerHTML={{ __html: calledFunction }} />;
}

export function FallbackStyles() {
  const cssVariableString = Object.entries(colors).reduce(
    (acc, [name, colorByTheme]) => {
      return `${acc}\n--color-${name}: ${colorByTheme.light};`;
    },
    ""
  );

  const wrappedInSelector = `html { ${cssVariableString} }`;

  return <style>{wrappedInSelector}</style>;
}
