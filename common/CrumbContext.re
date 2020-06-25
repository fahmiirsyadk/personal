type store = {
  crumbpage: string,
  setCrumbpage: (string => string) => unit,
};

let store = {crumbpage: "", setCrumbpage: _ => ()};
let storeCtx = React.createContext(store);

module ContextProvider = {
  let makeProps = (~value, ~children, ()) => {
    "value": value,
    "children": children,
  };
  let make = React.Context.provider(storeCtx);
};

[@react.component]
let make = (~children) => {
  let (crumbpage, setCrumbpage) = React.useState(() => "");
  <ContextProvider value={crumbpage, setCrumbpage}>
    children
  </ContextProvider>;
};

let default = make;