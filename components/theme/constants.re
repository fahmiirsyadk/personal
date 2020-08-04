type theme = {
  light: string,
  dark: string,
};

type t = {
  text: theme,
  foreground: theme,
  background: theme,
  primary: theme,
  secondary: theme,
  gray300: theme,
  gray500: theme,
  gray700: theme,
};

let colors = {
  text: {
    light: "hsl(0deg, 0%, 10%)",
    dark: "hsl(0deg, 0%, 95%)",
  },
  foreground: {
    light: "hsl(0, 0%, 6%)",
    dark: "hsl(0, 0%, 95%)",
  },
  background: {
    light: "hsl(0, 0%, 95%)",
    dark: "hsl(0, 0%, 6%)",
  },
  primary: {
    light: "hsl(340deg, 100%, 40%)",
    dark: "hsl(50deg, 100%, 50%)",
  },
  secondary: {
    light: "hsl(250deg, 100%, 50%)",
    dark: "hsl(190deg, 100%, 40%)",
  },
  gray300: {
    light: "hsl(0deg, 0%, 70%)",
    dark: "hsl(0deg, 0%, 30%)",
  },
  gray500: {
    light: "hsl(0deg, 0%, 50%)",
    dark: "hsl(0deg, 0%, 50%)",
  },
  gray700: {
    light: "hsl(0deg, 0%, 30%)",
    dark: "hsl(0deg, 0%, 70%)",
  },
};

let color_mode_key = "darkMode";
