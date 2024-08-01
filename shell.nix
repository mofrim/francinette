{pkgs ? import <nixpkgs> {}}:
pkgs.mkShell {
  buildInputs = with pkgs; [
    clang_12
    (python3.withPackages (ps: with ps; [
      GitPython
      halo
      pexpect
      rich
      toml
      certifi
      packaging
    ]))
  ];
  shellHook = ''
    echo "Nix stuff being loaded.."

    # nix_hardening is just to hard for francinette to compile anything :)
    unset NIX_HARDENING_ENABLE
  '';
}
