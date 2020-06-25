type fontWeights = {
  body: int,
  subheading: int,
  link: int,
  bold: int,
  heading: int,
};
type lineHeights = {
  body: float,
  heading: float,
  code: float,
};
type defaultTheme = {
  fontSize: array(string),
  fontWeights,
  lineHeights,
};
type bgTheme = {
  primary: string,
  secondary: string,
  inset: string,
  input: string,
};
type textTheme = {
  primary: string,
  secondary: string,
  tertiary: string,
  quarternary: string,
  placeholder: string,
  onPrimary: string,
};

type theme = {
  bg: bgTheme,
  text: textTheme,
};

let light = {
  bg: {
    primary: "#eff0f5",
    secondary: "#ffffff",
    inset: "#e2e4e8",
    input: "rgba(65,67,78,0.12)",
  },
  text: {
    primary: "#050505",
    secondary: "#2f3037",
    tertiary: "#525560",
    quarternary: "#9194a1",
    placeholder: "rgba(82,85,96,0.5)",
    onPrimary: "#ffffff",
  },
};

let dark = {
  bg: {
    primary: "#050505",
    secondary: "#111111",
    inset: "#111111",
    input: "rgba(191,193,201,0.12)",
  },
  text: {
    primary: "#fbfbfc",
    secondary: "#e3e4e8",
    tertiary: "#a9abb6",
    quarternary: "#6c6f7e",
    placeholder: "rgba(145,148,161,0.5)",
    onPrimary: "#050505",
  },
};

let defaultTheme = {
  fontSize: [|"14px", "16px", "18px", "22px", "26px", "32px", "40px"|],
  fontWeights: {
    body: 400,
    subheading: 500,
    link: 600,
    bold: 700,
    heading: 800,
  },
  lineHeights: {
    body: 1.5,
    heading: 1.3,
    code: 1.6,
  },
};

let darkTheme = {"theme": dark, "defaultTheme": defaultTheme};
let lightTheme = {"theme": light, "defaultTheme": defaultTheme};