const path = require("path");

const bsconfig = require("./bsconfig.json");
const transpileModules = ["bs-platform"].concat(bsconfig["bs-dependencies"]);
const withTM = require("next-transpile-modules")(transpileModules);

const config = {
  target: "serverless",
  pageExtensions: ["jsx", "js", "bs.js"],
  webpack: (config) => {
    //   const { isServer } = options;
    config.resolve.alias["~"] = path.resolve(__dirname);
    //   if (!isServer) {
    //     // We shim fs for things like the blog slugs component
    //     // where we need fs access in the server-side part
    //     config.node = {
    //       fs: "empty",
    //     };
    //   }
    return config;
  },
};

module.exports = withTM(config);
