[@react.component]
let make = (~children) => {
  <React.Fragment> <Darkmode /> children </React.Fragment>;
};

let default = make;