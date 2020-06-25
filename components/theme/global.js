import { css, Global } from "@emotion/core";

export const globalStyles = (
  <Global
    styles={css`
      html {
        background: var(--color-background);
      }
      body {
        color: var(--color-text);
      }
      a {
        color: var(--color-secondary);
      }
    `}
  />
);
