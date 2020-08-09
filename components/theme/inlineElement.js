import { colors } from "./constants.bs";

export function MagicScriptTag() {
  let minifiedCode = '!function(){const e=window.matchMedia("(prefers-color-scheme: dark)").matches,l=localStorage.getItem("darkMode");let d="light";d=null!==l?JSON.parse(l)?"dark":"light":e?"dark":"light";const h=document.documentElement;Object.entries({text:{light:"hsl(0deg, 0%, 10%)",dark:"hsl(0deg, 0%, 95%)"},foreground:{light:"hsl(0, 0%, 6%)",dark:"hsl(0, 0%, 95%)"},background:{light:"hsl(0, 0%, 95%)",dark:"hsl(0, 0%, 6%)"},primary:{light:"hsl(340deg, 100%, 40%)",dark:"hsl(50deg, 100%, 50%)"},secondary:{light:"hsl(250deg, 100%, 50%)",dark:"hsl(190deg, 100%, 40%)"},gray300:{light:"hsl(0deg, 0%, 70%)",dark:"hsl(0deg, 0%, 30%)"},gray500:{light:"hsl(0deg, 0%, 50%)",dark:"hsl(0deg, 0%, 50%)"},gray700:{light:"hsl(0deg, 0%, 30%)",dark:"hsl(0deg, 0%, 70%)"}}).forEach(([e,l])=>{const r="--color-"+e;h.style.setProperty(r,l[d])})}();'
  return <script dangerouslySetInnerHTML={{ __html: minifiedCode }} />;  
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
