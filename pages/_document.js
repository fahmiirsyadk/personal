import Document, { Html, Head, Main, NextScript } from "next/document";
import { extractCritical } from "emotion-server";
import {
  MagicScriptTag,
  FallbackStyles,
} from "~/components/theme/inlineElement";

export default class MyDocument extends Document {
  static getInitialProps({ renderPage }) {
    const page = renderPage();
    const styles = extractCritical(page.html);
    return { ...page, ...styles };
  }

  render() {
    const { css, ids } = this.props;

    return (
      <Html lang="id">
        
        <Head>
          <style
            data-emotion-css={ids.join(" ")}
            dangerouslySetInnerHTML={{ __html: css }}
          />
          <FallbackStyles />
        </Head>
        <body>
          <MagicScriptTag />
          <Main />
          <NextScript />
        </body>
      </Html>
    );
  }
}
